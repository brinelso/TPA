#include <iostream>
#include <locale.h>
using namespace std;
int main ()
{float numero;
    setlocale (LC_ALL, "");
    cout <<"Sempre positivo:\n";
    cout <<"Digite um n�mero \n";
    cin >>numero;
    if (numero<=0)
    {
    numero=numero*(-1);
    cout <<"Seu n�mero �: "<<numero;
    }
}
