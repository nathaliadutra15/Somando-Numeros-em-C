//****************************************************//
//*                   PROGRAMA: Soma                 *//
//  Exibe a soma de 5 n�meros digitados pelo usu�rio  //
//*                    Data 12/06/2019               *//
//*                      VERS�O: 1.0                 *//
//*        MODIFICA��O Data 12/06/2019               *//
//****************************************************//


#include <stdio.h> //Declara biblioteca de entrada e sa�da
#include <stdlib.h> //Declara biblioteca de identifica��o de caracteres calculo

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int numero[5]; // Declara��o de Variaveis (Todas do tipo Inteiro)
	int soma;
	int i;
	
	soma=0; // A variavel "soma" recebe o valor 0 inicialmente
	
	for(i=0;i<5;i++) // Para i iniciado em 0, enquanto a variavel for menor que 5, i r� somar mais um
	{
		
		printf("Digite um numero para somar:"); //Exibe na tela a frase
		scanf("%d", &numero[i]); //Leitura do valor digitado
		
		soma=soma+numero[i]; // A soma ir� receber a equa�ao "soma+numero na posi��o do valor de i
	
	}
	
	printf("\n\n_______________________________________\n\n");
	printf("A soma entre eles e igual a: %d\n", soma); // Exibe o resultado
	system("pause"); //Pausa logo ap�s a sua execu��o
	
	
	
	return 0; // Retorna o valor esperado pela fun��o main
}


//****************************************************//
//*     PROGRAMADOR: Nath�lia Dutra de Oliveira      *//
//*     TELEFONE: +55 11 9 5658 1503                 *//
//****************************************************//
