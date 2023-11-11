#include <iostream>
#include <locale.h>
using namespace std;
main ()
{
	int  i=1, n, alu_apro, alu_repro, n1[i], n2[i];
	float m[i], soma=0, mediasala;
	setlocale (LC_ALL,"");
		cout<<"Quantos alunos:\n";
		cin>>n;
	while (i<=n)
	{
		cout<<"Aluno "<<i<<endl;
		cout<<"Sua primeira nota foi:\n";
		cin>>n1[i];
		cout<<"Sua segunda nota foi:\n";
		cin>>n2[i];
		m[i]=(n1[i]+n2[i])/2;
		if (m[i]>=6)
		{
			cout<<"Aluno "<<i<<" Aprovado "<<"Média é "<<m[i]<<endl;
			alu_apro++;
		}
		else 
		{
			cout<<"Aluno "<<i<<" Reprovado "<<"Média é "<<m[i]<<endl;
			alu_repro++;
		}
		soma+=m[i];
		i++;
	}
	mediasala=soma/n;
	cout<<"Média da sala com "<<n<<" alunos é "<<mediasala<<endl;
	cout<<"Sendo "<<alu_apro<<" alunos aprovados \n";
	cout<<"E "<<alu_repro<<" alunos reprovados \n";
}
