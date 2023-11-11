#include<iostream>
using namespace std;
main()
 {
 	float PT,PU,Q,D,PF;
 	setlocale(LC_ALL,"");
 	cout<<"Digite o Preço Unitário\n";
 	cin>>PU;
 	cout<<"Digite a Quantidade\n";
 	cin>>Q;
 	PT=PU*Q;
 	cout<<"O Preço Total é  "<<PT<<"\n";
 	if (PT>=1000)
 	{
	D=PT*0.10;
	}
	else
	{
		D=PT*0.05;
	}
		PF=PT-D;
			cout<<"O Desconto é de "<<D<<"\n";
 	 	cout<<"O Preço Final é "<<PF<<"\n";
 }
 
