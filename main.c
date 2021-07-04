//****************************************************//
//*                   PROGRAMA: Soma                 *//
//  Exibe a soma de 5 números digitados pelo usuário  //
//*                    Data 12/06/2019               *//
//*                      VERSÃO: 1.0                 *//
//*        MODIFICAÇÃO Data 12/06/2019               *//
//****************************************************//


#include <stdio.h> //Declara biblioteca de entrada e saída
#include <stdlib.h> //Declara biblioteca de identificação de caracteres calculo

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int numero[5]; // Declaração de Variaveis (Todas do tipo Inteiro)
	int soma;
	int i;
	
	soma=0; // A variavel "soma" recebe o valor 0 inicialmente
	
	for(i=0;i<5;i++) // Para i iniciado em 0, enquanto a variavel for menor que 5, i rá somar mais um
	{
		
		printf("Digite um numero para somar:"); //Exibe na tela a frase
		scanf("%d", &numero[i]); //Leitura do valor digitado
		
		soma=soma+numero[i]; // A soma irá receber a equaçao "soma+numero na posição do valor de i
	
	}
	
	printf("\n\n_______________________________________\n\n");
	printf("A soma entre eles e igual a: %d\n", soma); // Exibe o resultado
	system("pause"); //Pausa logo após a sua execução
	
	
	
	return 0; // Retorna o valor esperado pela função main
}


//****************************************************//
//*     PROGRAMADOR: Nathália Dutra de Oliveira      *//
//*     TELEFONE: +55 11 9 5658 1503                 *//
//****************************************************//
