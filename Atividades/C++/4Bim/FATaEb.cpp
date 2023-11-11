#include <iostream>
#include <locale.h>
using namespace std;
main ()
{
	int  i, a[15], b[15], soma[15], i1;
	setlocale (LC_ALL,"");

	for (i=1;i<=15;i++)
	{
		soma[i]=1;
		cout<<"Elemento "<<i<<endl;
		cout<<"Sua variavel A:\n";
		cin>>a[i];
		for (i1=1;i1<=a[i];i1++)       
		{
		    soma[i]*=i1;
		}
		b[i]=soma[i];
	
	}
	for(i=1;i<=15;i++)
	{
		cout<<"Elemento "<<i<<endl;
		cout<<"Elemento B é igual a: "<<b[i]<<endl;
	}
}
