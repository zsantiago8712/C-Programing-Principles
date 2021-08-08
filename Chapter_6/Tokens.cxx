#include "../Headers/std_lib_facilities.h"


/*
 * Las clases son variables con distinatas combinaciones de variables dentro,
 * es lo mismo que una estructra solo que sin seguridad.
 * Las clases pueden ser publicas o privadas en camnbio las estructuras son siempre publicas.
 * El nombre de las clases se deben iniciar con máyuscula
*/


class Token {
public:
    char kind;
    double value;
    string name;
    Token(char ch)
        :kind(ch), value(0){}

    Token(char ch, double value)
        :kind(ch), value(value){}

    Token(string name)
        :kind(0), value(0), name(name){}
};


int main(void) {

    // Clase -> Token  = token -> Contructor


    // Se pueden inicializar de esta manera el objeto
    Token token{'*', 1.1};

    // Se pueden inicializar de esta manera
    Token token2('x', 1.1);
    Token token3('-');
    token.kind = '+';
    token.value = 12.1;
	int test;
    token2.kind = '-';
    token2.value = -32.1;

    token3 = token2;

    cout << token2.value << token3.kind << endl;

    vector<Token> tokenLis;
    vector<int> numbersList(3, 10);

    cout << numbersList.at(1) << endl;
    char a;
    char r = '+';
    double d;
    cin >> a;
    cout << a << endl;
    cin.putback(a);

    cin >> d;
    cout << d << endl;


}