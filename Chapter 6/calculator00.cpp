//
// This is example code from Chapter 6.6 "Trying the first version" of
// "Software - Principles and Practice using C++" by Bjarne Stroustrup
//

#include "../Headers/std_lib_facilities.h"

//------------------------------------------------------------------------------

class Token {
public:
	char kind;        // what kind of token
	double value;     // for numbers: a value
	Token(char characterKind)    // make a Token from a char
			:kind(characterKind), value(0) { }
	Token(char characterKind, double characterValue)     // make a Token from a char and a double
			:kind(characterKind), value(characterValue) { }
};

//------------------------------------------------------------------------------

Token get_token()    // read a token from cin
{
	char character;
	cin >> character;    // note that >> skips whitespace (space, newline, tab, etc.)

	switch (character) {
		//not yet   case ';':    // for "print"
		//not yet   case 'q':    // for "quit"
		case '(': case ')': case '+': case '-': case '*': case '/':
			return Token(character);        // let each character represent itself
		default:
			if(isdigit(character) || character == '.')  // read if is a digit or a '.'
			{
				cin.putback(character);         // put digit back into the input stream
				double val;
				cin >> val;              // read a floating-point number
				return Token('8',val);   // let '8' represent "a number"
			}
			error("Bad token");
	}
}

//------------------------------------------------------------------------------

double expression();  // read and evaluate a Expression

//------------------------------------------------------------------------------

double term();        // read and evaluate a Term

//------------------------------------------------------------------------------

double primary()     // read and evaluate a Primary
{
	Token token = get_token();
	switch (token.kind) {
		case '(':    // handle '(' expression ')'
		{
			double d = expression();
			token = get_token();
			if (token.kind != ')') error("')' expected");
			return d;
		}
		case '8':            // we use '8' to represent a number
			return token.value;  // return the number's value
		default:
			error("primary expected");
	}
}
//------------------------------------------------------------------------------

int main(void)
{
	try {
		while (cin)
			cout << "=" << expression() << endl;
	}
	catch (exception& e) {
		cerr << e.what() << endl;
		return 1;
	}
	catch (...) {
		cerr << "exception \n";
	}
	return 0;
}

//------------------------------------------------------------------------------

double expression()
{
	double left = term();      // read and evaluate a Term
	Token tokenInput = get_token();     // get the next token
	while(true) {
		switch(tokenInput.kind) {
			case '+':
				left += term();    // evaluate Term and add
				tokenInput = get_token();
				break;
			case '-':
				left -= term();    // evaluate Term and subtract
				tokenInput = get_token();
				break;
			default:
				return left;       // finally: no more + or -: return the answer
		}
	}
}

//------------------------------------------------------------------------------

double term()
{
	double left = primary();
	Token token = get_token();     // get the next token

	while(true) {
		switch (token.kind) {
			case '*':
				left *= primary();
				token = get_token();
				break;
			case '/':
			{
				double d = primary();
				if (d == 0) error("divide by zero");
				left /= d;
				token = get_token();
				break;
			}
			default:
				return left;
		}
	}
}

//------------------------------------------------------------------------------