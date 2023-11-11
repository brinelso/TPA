#include<conio.h>
#include<iostream>
#include<cmath> 
using namespace std;
 /*Área dos protótipos
   void imprime */
	void imprime_cabec(void);
   int multiplica(int NI, int N2); 
   //fim 	protótipos 
// FUNÇÃO PRINCIPAL  
 int main(void)
 {
	int V1=0, V2=0, resultado=0;
	 //Chamada da função imprime cabec
	 imprime_cabec();
	setlocale(LC_ALL,"");
	cout<<"Digite o primeiro valor: ";  
	cin>>V1;
	cout<<"Digite o segundo valor: ";
	cin>>V2;
	//chama a função e recebe o retorno
	resultado = multiplica(V1,V2);
	cout<<"Resultado = "<<resultado<<endl; 
	getch();
	return 0;
 }

 /*- Corpo das funções -
***** Função imprime cabec *****/
void imprime_cabec(void)
{
	cout<<"******************* \n";
	cout<<"*****LINGUAGEM***** \n";
	cout<<"******************* \n";
return;
}

/* retorno de uma função void 
 Função multiplica  Parâmetros de entrada: NI, N2 ambos int
Objetivo: multiplicar valores
Tipo de retorno: int (resultado);
*/
//multiplica recebe NI,N2 e retorna um int 
int multiplica(int NI, int N2)
{
int resultado; 
resultado = NI * N2;

//retornando o valor para main 
return(resultado);
}

