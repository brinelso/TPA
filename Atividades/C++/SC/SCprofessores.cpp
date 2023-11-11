#include<iostream>
#include<locale.h>
using namespace std;
main()
{
	setlocale(LC_ALL,"");
	int prof;
	cout<<"Digite um número inteiro de 1 a 5 \n";
	cin>>prof;

	switch(prof)
	{case 1:
		cout<<"Banco de Dados, Elson";
		break;
		
	case 2:
		cout<<"TPA, Elson";
		break;
		
	case 3:
		cout<<"Programação web 1, Iara";
		break;
		
	case 4:
		cout<<"Design Digital, Marcelo";
		break;
		
	case 5:
		cout<<"Analise de Sistemas, Denise";
		break;
		
	default:
		cout<<"opção inválida";
	}
}
