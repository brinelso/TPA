#include<conio.h>
#include<iostream>
#include<cmath> 
using namespace std;
 /*�rea dos prot�tipos
   void imprime */
	void imprime_cabec(void);
   float volume(float b,float l,float h);
   //fim 	prot�tipos 
// FUN��O PRINCIPAL  
 int main(void)
 {
 	setlocale (LC_ALL, "");
	float x=0, y=0, z=0, v=0;
	 //Chamada da fun��o imprime cabec
	 imprime_cabec();
	cout << "insira a Base:\n";
	cin >> x;
	cout << "Insira a Largura:\n";
	cin >> y;
	cout <<"Insira a Altura\n";
	cin >>z;
	//chama a fun��o e recebe o retorno
	v = volume(x,y,z);
	cout<<"Resultado = "<<v<<endl; 
	getch();
	return 0;
 }

 /*- Corpo das fun��es -
***** Fun��o imprime cabec *****/
void imprime_cabec(void)
{
	setlocale (LC_ALL, "");
	cout<<"*************************** \n";
	cout<<"*******VOLUME S�LIDO******* \n";
	cout<<"*************************** \n";
return;
}

float volume(float b,float l,float h)
{
	float v;
	v = b*l*h;
	return(v);
}
