#include <iostream>

using namespace std;

main()
{
	setlocale(LC_ALL,"");
  int i=1, n, soma=1;
  	cout<<"digite um n�mero \n";
	cin>>n;               
  	while (i<=n)       
  {
    soma*=i;
    i++;     
  }
  cout <<"Fatorial de "<<n<<" = "<<soma<<endl;   
}
