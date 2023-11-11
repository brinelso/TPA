#include <iostream>
#include <locale.h>
using namespace std;
main ()
{
	int  i=1, a[20], b[20], c[20];
	setlocale (LC_ALL,"");
	while (i<=20)
	{
		cout<<"Elemento "<<i<<endl;
		cout<<"Sua variavel A:\n";
		cin>>a[i];
		cout<<"Sua variavel B:\n";
		cin>>b[i];
		c[i]=a[i]-b[i];
		cout<<"Elemento C é igual a: "<<c[i]<<endl;
		i++;
	}
	return 0;
}
