#include <iostream>
#include <locale.h>
using namespace std;
int main ()
{float n1, n2, m;
setlocale (LC_ALL, "");
cout << "Programa para c�lculo de m�dia:\n";
cout << "Digite sua primeira nota:\n";
cin >> n1;
cout << "Digite sua segunda nota:\n";
cin >> n2;
m=(n1+n2)/2;
cout << "Parab�ns seu in�til, sua m�dia foi" <<m;
}
