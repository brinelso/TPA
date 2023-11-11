#include<conio.h>
#include<iostream>
#include<cmath> 
using namespace std;
 /*Área dos protótipos
   void imprime */
	void imprime_cabec(void);
   float volume(float b,float l,float h);
   //fim 	protótipos 
// FUNÇÃO PRINCIPAL  
 int main(void)
 {
 	setlocale (LC_ALL, "");
	float x=0, y=0, z=0, v=0;
	 //Chamada da função imprime cabec
	 imprime_cabec();
	cout << "insira a Base:\n";
	cin >> x;
	cout << "Insira a Largura:\n";
	cin >> y;
	cout <<"Insira a Altura\n";
	cin >>z;
	//chama a função e recebe o retorno
	v = volume(x,y,z);
	cout<<"Resultado = "<<v<<endl; 
	getch();
	return 0;
 }

 /*- Corpo das funções -
***** Função imprime cabec *****/
void imprime_cabec(void)
{
	setlocale (LC_ALL, "");
	cout<<"*************************** \n";
	cout<<"*******VOLUME SÓLIDO******* \n";
	cout<<"*************************** \n";
return;
}

float volume(float b,float l,float h)
{
	float v;
	v = b*l*h;
	return(v);
}
