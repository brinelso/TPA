#include <iostream>

using namespace std;

main()
{
	setlocale(LC_ALL,"");
  int i, n;
  i=0;                 
  	while (n<=50)       
  {
    i=i+1;
	n=i*5;
	cout <<"5x"<<i<<"="<<n<<"\n"; 
  }
}
