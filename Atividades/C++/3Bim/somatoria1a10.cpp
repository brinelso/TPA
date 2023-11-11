#include <iostream>

using namespace std;

main()
{
	setlocale(LC_ALL,"");
  int i=1, soma=0;                 
  	while (i<=10)       
  {
    soma=soma+i;
	i++;
	cout<<"Somatória= "<<soma<<endl;             
  }
}
