#include <iostream>
#include <locale.h>
using namespace std;
int main ()
{
	int soma=0, i, j;
	float med[8][4];
	setlocale (LC_ALL,"");
	cout<<"\n Leitura e apresentação das notas \n";
	/*entrda das notas*/
	for(i=0;i<=7;i++)
	{
		for(j=0;j<=3;j++)
		{
				cout<<"Digite a média "<<j+1<<" do aluno "<<i+1<<endl;
				cin>>med[i][j];
		}

	}
	for(i=0;i<=7;i++)
	{
		for(j=0;j<=3;j++)
		{
				cout<<"A média "<<j+1<<" do aluno "<<i+1<<" é "<<med[i][j]<<endl;
		}

	}
}
