#include <iostream>
#include <locale.h>
using namespace std;
int main ()
{float s, so, v, t;
	setlocale (LC_ALL, "");
	cout << "Espa�o percorrido m�vel\n";
	cout << "insira o espa�o inicial:\n";
	cin >> so;
	cout << "Insira a velocidade:\n";
	cin >> v;
	cout <<"Insira o tempo\n";
	cin >>t;
	s=(so+v)*t;
	cout <<"O espa�o percorrido foi de"<<s; 
}
