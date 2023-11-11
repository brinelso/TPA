#include <iostream>
#include <locale.h>
using namespace std;
main ()
{
	int  i=1, a[10], b[10], c[20], i1=1;
	setlocale (LC_ALL,"");

	while (i<=10)
	{
		cout<<"Elemento "<<i<<endl;
		cout<<"Sua variavel A:\n";
		cin>>a[i];
		c[i]=a[i];
		i++;
	}
	i=0;
	while(i<=10)
	{
		cout<<"Elemento "<<i<<endl;
		cout<<"Sua variavel B:\n";
		cin>>b[i];
		c[i+10]=b[i];
		i++;
	}
	while(i1<=20)
	{
		cout<<"Elemento C é igual a: "<<c[i1]<<endl;
		i1++;
	}
}
