#include<iostream>
#include<math.h>
using namespace std;
main()
 {
 	float vc, vca, vv, dp, d, df;
 	setlocale(LC_ALL,"");
 	cout<<"Valor caseiro? \n";
 	cin>>vc;
 	cout<<"Valor comida animais? \n";
 	cin>>vca;
 	cout<<"Valor Veterinário \n";
 	cin>>vv;
 	dp=vc+vca+vv;
 	
 	if (dp>=0 && dp<=600)
 	{
		d=dp*0.03;
	
   	}
		else if (dp>600 && dp<=900)
 		{
			d=dp*0.05;
	
		}
		else if (dp>900 && dp<=1200)
 		{
			d=dp*0.07;
	
		}
		else if (dp>1200)
 		{
			d=dp*0.10;
	
		}
	df=dp-d;
	cout<<"Despesa inicial= "<<dp<<"\n";
	cout<<"O desconto é de "<<d<<"\n";
	cout<<"Despesa final ="<<df;
 }
