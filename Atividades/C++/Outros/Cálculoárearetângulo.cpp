#include <iostream>
#include <locale.h>
using namespace std;
int main ()
{float a, b, h;
setlocale (LC_ALL, "");
cout << "Programa para C�lculo de Ret�ngulo\n";
cout << "Digite a Base:\n";
cin >> b;
cout << "Digite a Altura :\n";
cin >> h;
a=b*h;
cout << "A �rea � " <<a;
}
