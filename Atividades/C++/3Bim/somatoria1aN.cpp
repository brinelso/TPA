#include <iostream>

using namespace std;

main()
{
	setlocale(LC_ALL,"");
  int i=1, soma=0,n ;
  cout<<"Digite um n�mero para a somat�ria:"<<endl;
  cin>>n;                 
  	while (i<=n)       
  {
    soma+=i;
	i++;      
  }
  	cout<<"Somat�ria= "<<soma<<endl;  
}
