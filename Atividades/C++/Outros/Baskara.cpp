#include<iostream>
#include<math.h>
using namespace std;
main()
 {
 	float a, b, c, delta, x1, x2;
 	setlocale(LC_ALL,"");
 	cout<<"Digite o valor de A\n";
 	cin>>a;
 	cout<<"Digite o valor de B\n";
 	cin>>b;
 	cout<<"Digite o valor de C\n";
 	cin>>c;
 	delta=b*b-4*a*c;
 	
 	if (delta>0)
 	{
	x1=(-b+sqrt(delta))/(2*a);
	x2=(-b+sqrt(delta))/(2*a);
	
	cout<<"X1: \n"<<x1<<"X2:"<<x2<<"\n";
	}
		else if (delta==0)
		{
		x1=-b/2*a;
		cout<<"X1 é \n"<<x1;
		}
			else 
			{
			
			cout<<"Não há raiz real \n";
 	 		}
 }
 
