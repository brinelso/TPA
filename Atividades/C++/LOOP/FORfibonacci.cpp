#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL,"");
  int ult=0, penult=1, r, i, n;
  	cout<<" Exibir quantos números? \n";
	cin>>n;               
  	for (i=1;i<=n;i++)
  {
    cout <<"Resaultado="<<(ult+penult)<<"\n";
    r=penult;
    penult=ult;
    ult=ult+r;
  }

  return 0;
}
