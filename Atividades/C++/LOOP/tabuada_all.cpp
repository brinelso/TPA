#include <iostream>

using namespace std;

main()
{
	setlocale(LC_ALL,"");
  int i, n, x;
  cout<<"Digite o valor desejado: \n";
  cin>>x;
  i=1;                 
  	while (i<=10)       
  {
	n=i*x;
	cout <<x<<"x"<<i<<"="<<n<<"\n";
	i=i+1;
  }
}
