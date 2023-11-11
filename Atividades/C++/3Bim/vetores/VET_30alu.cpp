#include <iostream>
#include <locale.h>
using namespace std;
int main ()
{
	int soma=0, i=0;
	float med[i], mediasala;
	setlocale (LC_ALL,"");
	while(i<=29)
	{
		cout<<"Média aluno "<<i<<endl;
		cin>>med[i];
		soma+=med[i];
		i++;
	}
	mediasala=soma/30;
	cout<<"Média da sala é "<<mediasala<<endl;
}
