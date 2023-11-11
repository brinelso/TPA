#include <iostream>
#include <locale.h>
using namespace std;
int main ()
{float s, so, v, t;
	setlocale (LC_ALL, "");
	cout << "Espaço percorrido móvel\n";
	cout << "insira o espaço inicial:\n";
	cin >> so;
	cout << "Insira a velocidade:\n";
	cin >> v;
	cout <<"Insira o tempo\n";
	cin >>t;
	s=(so+v)*t;
	cout <<"O espaço percorrido foi de"<<s; 
}
