#include <iostream>

using namespace std;

main()
{
	setlocale(LC_ALL,"");
  int i, soma=0,n ;
	cout<<"Digite um número para a somatória:"<<endl;
  cin>>i;
  cout<<"Digite um número para a somatória:"<<endl;
  cin>>n;   
  	while (i<=n)       
  {
    soma+=i;
	i++;      
  }
  	cout<<"Somatória= "<<soma<<endl;  
}
