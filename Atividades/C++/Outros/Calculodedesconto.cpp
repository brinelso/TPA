#include<iostream>
using namespace std;
main()
 {
 	float PT,PU,Q,D,PF;
 	setlocale(LC_ALL,"");
 	cout<<"Digite o Pre�o Unit�rio\n";
 	cin>>PU;
 	cout<<"Digite a Quantidade\n";
 	cin>>Q;
 	PT=PU*Q;
 	cout<<"O Pre�o Total �  "<<PT<<"\n";
 	if (PT>=1000)
 	{
	D=PT*0.10;
	}
	else
	{
		D=PT*0.05;
	}
		PF=PT-D;
			cout<<"O Desconto � de "<<D<<"\n";
 	 	cout<<"O Pre�o Final � "<<PF<<"\n";
 }
 
