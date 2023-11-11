#include <iostream>

using namespace std;

main()
{
	setlocale(LC_ALL,"");
  int i, n, r;
  	cout<<"digite um número \n";
	cin>>n;               
  	for (i=1;i<=10;i++)
  {
  	r=i*n;
    cout <<n<<"x"<<i<<"="<<r<<"\n";
  }
}
