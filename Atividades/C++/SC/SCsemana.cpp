#include<iostream>
#include<locale.h>
using namespace std;
main()
{
	setlocale(LC_ALL,"");
	int semana;
	cout<<"Digite um número inteiro de 1 a 7 \n";
	cin>>semana;

	switch(semana)
	{case 1:
		cout<<"Domingo";
		break;
		
	case 2:
		cout<<"Segunda-feira";
		break;
		
	case 3:
		cout<<"Terça-feira";
		break;
		
	case 4:
		cout<<"Quarta-feira";
		break;
		
	case 5:
		cout<<"Quinta-feira";
		break;
		
	case 6:
		cout<<"Sexta-feira";
		break;
		
	case 7:
		cout<<"Sabado";
		break;
		
	default:
		cout<<"opção inválida";
	}
}
