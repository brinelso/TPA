#include <iostream>

using namespace std;

main()
{
	setlocale(LC_ALL,"");
  int i=1, n, soma;
  	cout<<"digite um n�mero \n";
	cin>>n;               
  	for (soma=1;i<=n;i++)   
	  {
  		soma*=i;
	  }    
  cout <<"Fatorial de "<<n<<" = "<<soma<<endl;   
}
