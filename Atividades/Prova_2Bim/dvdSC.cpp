#include<iostream>
#include<locale.h>
using namespace std;
main()
{
	setlocale(LC_ALL,"");
	int codigo;
	cout<<"Digite o c�digo: \n";
	cin>>codigo;

	switch(codigo)
	{case 1:
		cout<<"Maxwell, 2.00 reais";
		break;
		
	case 2:
		cout<<"Philips, 1.80 reais";
		break;
		
	case 3:
		cout<<"LG, 1.90";
		break;
		
	default:
		cout<<"op��o inv�lida";
	}
}
