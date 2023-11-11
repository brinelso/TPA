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
			{	cout<<"Esse triangulo é equilátero";
			}
			else if (a==b || a==c || b==c)
			{
				cout<<"Esse triângulo é isósceles";
			}
			 	else 
			 	{
			 		cout<<"Esse triângulo é escaleno";
			 	}
	}

	else 
		{
		
		cout<<"Os lados não formam um triângulo \n";
 	 	}
 }
