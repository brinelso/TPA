#include <iostream>
#include <locale.h>
using namespace std;
int main ()
{	int n, i, alu_apro=0, alu_repro=0; 
	float n1, n2, m, mt, soma=0;
	setlocale (LC_ALL,"");
	cout<<"Média e Aprovado da sala:\n";
	cout<<"Quantos alunos: \n";
	cin>>n;
	for (i=1;i<=n;i++)
	{
		cout<<"Aluno "<<i<<endl;
		cout<<"Sua primeira nota foi:\n";
		cin>>n1;
		cout<<"Sua segunda nota foi:\n";
		cin>>n2;
		m=(n1+n2)/2;
		if (m>=6)
		{
			cout<<"Aluno "<<i<<" Aprovado \n";
			alu_apro++;
		}
		else 
		{
			cout<<"Aluno "<<i<<" Reprovado \n";
			alu_repro++;
		}
	cout<<" Sua média foi "<<m<<endl;
	soma+=m;
	}
	mt=(soma/n);
	cout<<"Média da sala é "<<mt<<endl;
	cout<<"Alunos Aprovados "<<alu_apro<<endl;
	cout<<"Alunos Reprovados "<<alu_repro<<endl;
}
