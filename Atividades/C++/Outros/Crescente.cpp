#include <iostream>
#include <locale.h>
using namespace std;
int main ()
{float a, b, c, aux;
setlocale (LC_ALL, "");
cout <<"Digite o valor A:\n";
cin >>a;
cout <<"Digite o valor B:\n";
cin >>b;
cout <<"Digite o valor C:\n";
cin >>c;
if (a>b)
	{
	aux=a;
	a=b;
	b=aux;
	}
if (a>c)
	{
	aux=a;
	a=c;
	c=aux;
	}
if (b>c)
	{
	aux=b;
	b=c;
	c=aux;
	}
cout<<"O valor crescente de A, B e C � \n";
cout<<"A �:"<<a<<"\n"; 
cout<<"B �:"<<b<<"\n";
cout<<"C �:"<<c<<"\n";
}
