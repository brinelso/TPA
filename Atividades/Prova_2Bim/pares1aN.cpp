#include <iostream>

using namespace std;

main()
{
	setlocale(LC_ALL,"");
  int i, n;
  	cout<<"digite um n�mero \n";
	cin>>n;               
  	for (i=0;i<=n;i=i+2)
  {
    cout <<"N�meros pares de 1 a "<<n<<"="<<i<<"\n"; 
  }
}
