#include<conio.h>
#include<iostream>
#include<cmath> 
using namespace std;
 /*�rea dos prot�tipos
   void imprime */
	void imprime_cabec(void);
   float 	perc(float so,float v,float t);
   //fim 	prot�tipos 
// FUN��O PRINCIPAL  
 int main(void)
 {
 	setlocale (LC_ALL, "");
	float x=0, y=0, z=0, s=0;
	 //Chamada da fun��o imprime cabec
	 imprime_cabec();
	cout << "insira o espa�o inicial:\n";
	cin >> x;
	cout << "Insira a velocidade:\n";
	cin >> y;
	cout <<"Insira o tempo\n";
	cin >>z;
	//chama a fun��o e recebe o retorno
	s = perc(x,y,z);
	cout<<"Resultado = "<<s<<endl; 
	getch();
	return 0;
 }

 /*- Corpo das fun��es -
***** Fun��o imprime cabec *****/
void imprime_cabec(void)
{
	setlocale (LC_ALL, "");
	cout<<"*************************** \n";
	cout<<"*****ESPA�O PERCORRIDO***** \n";
	cout<<"*************************** \n";
return;
}

float perc(float so,float v,float t)
{
	float s;
	s = (so+v)*t;
	return(s);
}
