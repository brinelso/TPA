#include<iostream>
#include<math.h>
using namespace std;
main()
 {
 	float a, b, c;
 	setlocale(LC_ALL,"");
 	cout<<"Digite o valor do lado A\n";
 	cin>>a;
 	cout<<"Digite o valor do lado B\n";
 	cin>>b;
 	cout<<"Digite o valor do lado C\n";
 	cin>>c;

 	if (a<b+c && b<a+c && c<a+b)
 	{
		if (a==b && b==c)
			{	cout<<"Esse triangulo � equil�tero";
			}
			else if (a==b || a==c || b==c)
			{
				cout<<"Esse tri�ngulo � is�sceles";
			}
			 	else 
			 	{
			 		cout<<"Esse tri�ngulo � escaleno";
			 	}
	}

	else 
		{
		
		cout<<"Os lados n�o formam um tri�ngulo \n";
 	 	}
 }
