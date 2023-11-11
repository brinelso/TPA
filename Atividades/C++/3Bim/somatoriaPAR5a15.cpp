#include <iostream>

using namespace std;

main()
{
	setlocale(LC_ALL,"");
  int i=6, soma=0;                 
  	while (i<=15)       
  {
    soma=soma+i;
	i+=2;         
  }
  	cout<<"Somatória= "<<soma<<endl;  
}
