//
// This is example code from Chapter 6.6 "Trying the first version" of
// "Software - Principles and Practice using C++" by Bjarne Stroustrup
//

#include "../Headers//std_lib_facilities.h"
#include <stdlib.h>


double expression();  // read and evaluate a Expression
double term();        // read and evaluate a Term

class Token
{
	public:
		char kind;        // what kind of token
		double value;     // for numbers: a value
		Token(char ch)    // make a Token from a char
			:kind(ch), value(0) { }
		Token(char ch, double val)     // make a Token from a char and a double
			:kind(ch), value(val) { }
};


class Token_stream
{
	public:
		Token get();            // get a Token
		void putback(Token tokenInput);  // put a Token back
	private:
		bool full {false};      // is there a Token in the buffer?
		Token buffer = {'0'};           // where we store a 'putback' Token
};

void Token_stream::putback(Token tokenInput)
{
	if (full)
		error("putback() into a full buffer");
	buffer = tokenInput;         // copy t to buffer
	full = true;        // buffer is now full
}

Token Token_stream::get()
{
	char character;
	if (full)
	{
		full = false;
		return buffer;
	}

	cin >> character;

	switch (character)
	{
		case '=':       // for "print the result"
		case 'q':       // for "quit"
		case '(':
		case ')':
		case '+':
		case '-':
		case '*':
		case '/':
			return Token{character};   // let each character represent itself
		default:
			if(isdigit(character) || character == '.')
			{
				cin.putback(character);
				double val;
				cin >> val;
				return Token{'8', val};
			}
			error("Bad Token");
	}
}


//------------------------------------------------------------------------------

Token_stream tokenStreamInput;      // provides get() and putback()

//------------------------------------------------------------------------------

int main()
{
	try {
		double val = 0;
		while (cin)
		{
			Token tokenInput = tokenStreamInput.get();
			if(tokenInput.kind == 'q')
			{
				cout << "exit" << endl;
				break;
			}
			if(tokenInput.kind == '=')
				cout << "= " << val << endl;
			else
				tokenStreamInput.putback(tokenInput);
			val = expression();
		}

	}
	catch (exception &e)
	{
		cerr << e.what() << endl;
		return 1;
	}
	catch (...)
	{
		cerr << "exception \n";
		return 2;
	}
}


//------------------------------------------------------------------------------

double primary()     // read and evaluate a Primary
{
	Token tokenInput = tokenStreamInput.get();
	switch (tokenInput.kind)
	{
		case '(':    // handle '(' expression ')'
		{
			tokenInput = tokenStreamInput.get();
			if (tokenInput.kind != ')')
				error("')' expected");
			return expression();
		}
		case '8':            // we use '8' to represent a number
			return tokenInput.value;  // return the number's value
		case 'q':
			cout << "Exit" << endl;
			exit(1);
		default:
			error("primary expected");
	}
}
//------------------------------------------------------------------------------


//------------------------------------------------------------------------------

double expression()
{
	double left = term();      // read and evaluate a Term
	Token tokenInput = tokenStreamInput.get();        // get the next token
	while(true)
	{
		switch(tokenInput.kind)
		{
			case '+':
				left += term();    // evaluate Term and add
				break;
			case '-':
				left -= term();    // evaluate Term and subtract
				break;
			default:
				tokenStreamInput.putback(tokenInput);
				return left;       // finally: no more + or -: return the answer
		}
		tokenInput = tokenStreamInput.get();
	}
}

//------------------------------------------------------------------------------

double term()
{
	double left = primary();
	Token tokenInput = tokenStreamInput.get();     // get the next token

	while(true) {
		switch (tokenInput.kind)
		{
			case '*':
				left *= primary();
				break;
			case '/':
			{
				double div = primary();
				if (div == 0)
					error("divide by zero");
				left /= div;
				break;
			}
			default:
				tokenStreamInput.putback(tokenInput);
				return left;
		}
		tokenInput = tokenStreamInput.get();
	}
}

//------------------------------------------------------------------------------