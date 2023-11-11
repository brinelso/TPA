#include<iostream>
#include<math.h>
using namespace std;
main()
{
 	float SL, SH, HT, SB, DESC, n, MSL, soma, i;
 	setlocale(LC_ALL,"");
 	cout<<"Quantos Funcionários? \n";
 	cin>>n;
 	for (i=1;i<=n;i++)
 	{
 		cout<<"Qual seu salário hora? \n";
 		cin>>SH;
 		cout<<"Quais suas horas trabalhadas? \n";
 		cin>>HT;
 		SB=SH*HT;
 	
 		if (SB>=1000)
 		{
			DESC=SB*0.10;
	
	   	}
			else
 			{
				DESC=SB*0.05;
	
			}
		SL=SB-DESC;
		cout<<"O desconto é de "<<DESC<<" reais e O salário liquido é de "<<SL<<" reais \n";
		cout<<"Salário bruto é "<<SB<<endl;
		soma+=SL;
	}
	MSL=soma/n;
 	cout<<"Média de Salário liquidos dos "<<n<<" funcionários é "<<MSL<<endl;
}
