#include<iostream>
#include<locale.h>
using namespace std;
main()
 {
 	float a, b, r;
 		setlocale(LC_ALL,"");
 	cout<<"Digite o valor de A\n";
 	cin>>a;
 	cout<<"Digite o valor de B\n";
 	cin>>b;
 	if (a>b)
 	{	
	 	r=a-b;
	 }
	 
	 else 
		{
			r=b-a;
		}
			cout<<"A diferen�a entre A e B � de "<<r<<"\n";
}