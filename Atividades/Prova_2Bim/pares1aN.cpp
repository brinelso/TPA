#include <iostream>

using namespace std;

main()
{
	setlocale(LC_ALL,"");
  int i, n;
  	cout<<"digite um número \n";
	cin>>n;               
  	for (i=0;i<=n;i=i+2)
  {
    cout <<"Números pares de 1 a "<<n<<"="<<i<<"\n"; 
  }
}
