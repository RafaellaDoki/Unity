#include "sort.h"

void sort(int *v, int size);
void trocarPosicaoValores( int *posicaoA, int *posicaoB );

//Get sort function from internet site just for testing.
void sort(int *v, int size){ //Funçao selection recebendo vetor e tamanho
	int i, j, posicaoValorMinimo;
	for (i = 0; i < ( size - 1 ); i++){ //Loop para percorrer o vetor
		posicaoValorMinimo = i; //O valor minimo de posiçao do vetor a ser percorrido e 0
		for (j = ( i + 1 ); j < size; j++){ 			//Percorreremos o vetor da posiçao 1 ate o tamanho estimado 
			if(v[j] < v[posicaoValorMinimo]){ //Se a posiçao que vamos verificar for menos que a posiçao que temos em maos
				posicaoValorMinimo = j; //A variavel 'j' recebe esse valor
			}
		}
		if ( i != posicaoValorMinimo ){
			trocarPosicaoValores( &v[i], &v[posicaoValorMinimo] );//vamos chamar uma outra funçao para trocar as posiçoes de lugares  
		}
	}
}

void trocarPosicaoValores( int *posicaoA, int *posicaoB ){ //Funçao para trocar as posiçoes que estamos olhando
	int temporario;
	temporario = *posicaoA;
	*posicaoA = *posicaoB;
	*posicaoB = temporario;     
}

