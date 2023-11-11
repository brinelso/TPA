#include <iostream>
#include <locale.h>
using namespace std;
int main ()
{float n1, n2, m;
setlocale (LC_ALL, "");
cout <<"Média e Aprovado:\n";
cout <<"Sua primeira nota foi:\n";
cin >>n1;
cout <<"Sua segunda nota foi:\n";
cin >>n2;
m=(n1+n2)/2;
if (m>=6){
cout <<"Aprovado";
} else {
	cout << "Reprovado\n";
}
cout << "Sua média foi\n"<<m;
}
