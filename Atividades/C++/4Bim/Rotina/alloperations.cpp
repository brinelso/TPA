/* Programa Calculadora */
#include <stdio.h>
#include <locale.h>
#include <iostream> 
using namespace std;
float R, A, B; 
float rotadicao(void); 
float rotsubtracao(void);
float rotmultiplicacao(void); 
float rotdivisao(void ); 
int main(void) 
{
	setlocale(LC_ALL,""); 
	int OPCAO = 0; 
	while (OPCAO!=5)
		{
		cout<<"\n\nMenu Principal\n";
		cout<<"-------------\n";
		cout<<"1 - Adicao\n";
		cout<<"2 - Subtracao\n";
		cout<<"3 - Multiplicacao\n";
		cout<<"4 - Divisao\n";
		cout<<"5 - Fim de  Programa\n\n";
		cout<<"Escolha uma op��o: ";
		fflush(stdin);
		cin>>OPCAO;
			if (OPCAO!=5)
			{
					switch (OPCAO)
				{
					case 1 : rotadicao(); break; 
					case 2 : rotsubtracao(); break; 
					case 3 : rotmultiplicacao(); break; 
					case 4 : rotdivisao(); break; 
					default : cout << "Opcao invalida - Tecle <Enter>"; 
					getchar(); 
					break;
				}
			}
	
		}
return 0;
}
// Rot-ina adi��o 
float rotadicao(void)
{
	cout<< "\n\nRotina de Adi��o\n";
	cout<< "-----------------\n\n";
	cout<< "Entre um valor para A: ";
	fflush(stdin);
	cin>>A;
	cout<< "Entre um valor para B: ";
	fflush(stdin);
	cin >>B;
	R=A+B;
	cout<< "O resultado � "<<R;
	cout<< "\nTecle <Enter> para acessar o menu: ";
	getchar();
	return 0;
}
// Rot-ina subtra��o 
float rotsubtracao(void) 
{	
	cout<< "\n\nRotina de Subtra��o\n";
	cout<< "------------------------\n\n";
	cout<< "Entre um valor para A: ";
	fflush(stdin);
	cin>>A;
	cout<< "Entre um valor para B: ";
	fflush(stdin);
	cin>>B;
	R=A-B;
	cout<< "O resultado � "<<R;
	cout<< "\nTecle <Enter> para acessar o menu: ";
	getchar();
	return 0;
}

// Rot-ina multiplica��o 
float rotmultiplicacao(void)
{
	cout<< "\n\nRotina de Mutiplica��o\n";
	cout<< "-----------------\n\n";
	cout<< "Entre um valor para A: ";
	fflush(stdin);
	cin>>A;
	cout<< "Entre um valor para B: ";
	fflush(stdin);
	cin >>B;
	R=A*B;
	cout<< "O resultado � "<<R;
	cout<< "\nTecle <Enter> para acessar o menu: ";
	getchar();
	return 0;
}

// Rot-ina divis�o 
float rotdivisao(void)
{
	cout<< "\n\nRotina de Divis�o\n";
	cout<< "-----------------\n\n";
	cout<< "Entre um valor para A: ";
	fflush(stdin);
	cin>>A;
	cout<< "Entre um valor para B: ";
	fflush(stdin);
	cin >>B;
	if (B==0)
	{
		cout<<"\nERRO DE DIVIS�O\n";
	}
	else
	{
		R=A/B;
		cout<< "O resultado � "<<R;
	}
	cout<< "\nTecle <Enter> para acessar o menu: ";
	getchar();
	return 0;
}
