#include<iostream>
#include<math.h>
using namespace std;
main()
{
 	float SL, SH, HT, SB, DESC, n, MSL, soma, i;
 	setlocale(LC_ALL,"");
 	cout<<"Quantos Funcion�rios? \n";
 	cin>>n;
 	for (i=1;i<=n;i++)
 	{
 		cout<<"Qual seu sal�rio hora? \n";
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
		cout<<"O desconto � de "<<DESC<<" reais e O sal�rio liquido � de "<<SL<<" reais \n";
		cout<<"Sal�rio bruto � "<<SB<<endl;
		soma+=SL;
	}
	MSL=soma/n;
 	cout<<"M�dia de Sal�rio liquidos dos "<<n<<" funcion�rios � "<<MSL<<endl;
}
