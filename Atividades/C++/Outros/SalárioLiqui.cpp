#include<iostream>
#include<math.h>
using namespace std;
main()
 {
 	float SL, SH, HT, SB, DESC;
 	setlocale(LC_ALL,"");
 	cout<<"Qual seu sal�rio hora? \n";
 	cin>>SH;
 	cout<<"Quais suas horas trabalhadas? \n";
 	cin>>HT;
 	SB=SH*HT;
 	
 	if (SB>=0 && SB<=1000)
 	{
		DESC=SB*0.03;
	
   	}
		else if (SB>1000 && SB<=2000)
 		{
			DESC=SB*0.05;
	
		}
		else if (SB>2000 && SB<=3000)
 		{
			DESC=SB*0.07;
	
		}
		else if (SB>3000)
 		{
			DESC=SB*0.10;
	
		}
	SL=SB-DESC;
	cout<<"O desconto � de "<<DESC<<" reais O sal�rio liquido � de "<<SL<<" reais \n";
	cout<<"Sal�rio bruto � "<<SB;
 }
