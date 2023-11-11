#include <iostream>
#include <locale.h>
using namespace std;
int main ()
{float n1, n2, m;
setlocale (LC_ALL, "");
cout << "Programa para cálculo de média:\n";
cout << "Digite sua primeira nota:\n";
cin >> n1;
cout << "Digite sua segunda nota:\n";
cin >> n2;
m=(n1+n2)/2;
cout << "Parabéns seu inútil, sua média foi" <<m;
}
