#include <iostream>
#include <locale.h>
using namespace std;
int main ()
{	int n, i=1; 
	float n1, n2, m, mt, soma=0;
	setlocale (LC_ALL, "");
	cout<<"Mé0dia e Aprovado da sala:\n";
	cout<<"Quantos alunos: \n";
	cin>>n;
	while(i<=n)
	{
		cout<<"Aluno "<<i<<endl;
		cout <<"Sua primeira nota foi:\n";
		cin >>n1;
		cout <<"Sua segunda nota foi:\n";
		cin >>n2;
		i++;
		m=(n1+n2)/2;
		if (m>=6)
		{
			cout<<"Aluno "<<i<<" Aprovado \n";
		}
		else 
		{
			cout<<"Aluno "<<i<<" Reprovado \n";
		}
	cout<<" Sua média foi "<<m<<endl;
	soma+=m;
	}
	mt=(soma/n);
	cout<<"Média da sala é "<<mt<<endl;
}
