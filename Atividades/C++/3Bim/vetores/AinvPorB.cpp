#include <iostream>
#include <locale.h>
using namespace std;
main ()
{
	int  i, a[20], b[20];
	setlocale (LC_ALL,"");

	for (i=1;i<=20;i++)
	{
		cout<<"Elemento "<<i<<endl;
		cout<<"Sua variavel A:\n";
		cin>>a[i];
		b[21-i]=a[i];
	}
	for(i=1;i<=20;i++)
	{
		cout<<"Elemento "<<i<<endl;
		cout<<"Elemento B é igual a: "<<b[i]<<endl;
	}
}
