#include <iostream>
#include <locale.h>
using namespace std;
int main ()
{
	int b[7], a[7], c[7][2], i, j;
	setlocale (LC_ALL,"");
	/*entrda de A e B*/
	for(i=0;i<=6;i++)
	{
		cout<<"Digite A[" <<i+1<<"]= "<<endl;
		cin>>a[i];
	}
		for(i=0;i<=6;i++)
	{
		cout<<"Digite B["<<i+1<<"]= "<<endl;
		cin>>b[i];
	}
	
	for(i=0;i<=1;i++)
	{
		for(j=0;j<=6;j++)
		{
			if(i==0)
			{
				c[j][i]=a[j];
			}
			else
			{
				c[j][i]=b[j];	
			}
		}
	}

	for(i=0;i<=1;i++)
	{
		for(j=0;j<=6;j++)
		{
			cout<<"C["<<j+1<<"]["<<i+1<<"]="<<c[j][i]<<endl;
		}
	}
}
