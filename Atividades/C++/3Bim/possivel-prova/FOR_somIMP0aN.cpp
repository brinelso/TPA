#include <iostream>

using namespace std;

main()
{
	setlocale(LC_ALL,"");
  int i=1, n, soma;
    cout<<"numero: "<<endl;
	cin>>n;  
  	while (i<n)       
  {
    cout <<"Contagem="<<i<<"\n";
    i+=2;
	soma=soma+i;
  }
  cout<<"somatória= "<<soma<<endl;
}
