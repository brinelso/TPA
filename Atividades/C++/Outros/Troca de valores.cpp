#include <iostream>
#include <locale.h>
using namespace std;
int main ()
{float a, b, aux;
setlocale (LC_ALL, "");
cout <<"Digite o valor A:\n";
cin >>a;
cout <<"Digite o valor B:\n";
cin >>b;
aux=a;
a=b;
b=aux;
cout <<"Valor A agora �"<<a; 
cout <<"Valor B agora �:\n"<<b;
}
