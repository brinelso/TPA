#include<iostream>
using namespace std;
main()
 {
 	float PF,PG,PM,C,D,VF;
 	setlocale(LC_ALL,"");
 	cout<<"Digite o Pre�o do fog�o\n";
 	cin>>PF;
 	cout<<"Digite o Pre�o da geladeira\n";
 	cin>>PG;
 	cout<<"Digite o Pre�o micro-ondas\n";
 	cin>>PM;
 	C=PF+PG+PM;
 	if (C>=5000)
 	{
	D=C*0.10;
	}
	else
	{
		D=C*0.05;
	}
		VF=C-D;
		cout<<"O Valor da compra � "<<C<<"\n";
 	 	cout<<"O Desconto � "<<D<<"\n";
 	 	cout<<"O Valor Final � "<<VF<<"\n";
 }
 
