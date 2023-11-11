#include <iostream>
#include <locale.h>
using namespace std;
int main ()
{float anoatual, nasci, idade;
setlocale (LC_ALL, "");
cout <<"Ano de nascimento:\n";
cout <<"Em que ano você nasceu?\n";
cin >>nasci;
cout <<"Em que ano estamos? \n";
cin >>anoatual;
idade=anoatual-nasci;
if (idade>=18){
cout <<"Maior de idade \n";
} else {
	cout << "Menor de idade \n";
}
cout << "Sua idade é :\n"<<idade;
}
