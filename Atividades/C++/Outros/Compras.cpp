#include<iostream>
using namespace std;
main()
 {
 	float PF,PG,PM,C,D,VF;
 	setlocale(LC_ALL,"");
 	cout<<"Digite o Preço do fogão\n";
 	cin>>PF;
 	cout<<"Digite o Preço da geladeira\n";
 	cin>>PG;
 	cout<<"Digite o Preço micro-ondas\n";
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
		cout<<"O Valor da compra é "<<C<<"\n";
 	 	cout<<"O Desconto é "<<D<<"\n";
 	 	cout<<"O Valor Final é "<<VF<<"\n";
 }
 
