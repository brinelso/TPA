#include <iostream>

using namespace std;

main()
{
	setlocale(LC_ALL,"");
  int i, soma=0,n ;
	cout<<"Digite um n�mero para a somat�ria:"<<endl;
  cin>>i;
  cout<<"Digite um n�mero para a somat�ria:"<<endl;
  cin>>n;   
  	while (i<=n)       
  {
    soma+=i;
	i++;      
  }
  	cout<<"Somat�ria= "<<soma<<endl;  
}
