#include <stdio.h>
#include <stdlib.h>

void funcao_leitura(int *vetor, int tam);

int main()
{
	int n, i, *v;
	
	printf("Digite o tamanho do vetor desejado: ");
	scanf("%d", &n);
	
	v = (int*)malloc(n*sizeof(int));
	
	funcao_leitura(v, n);
		
	printf("\n[");
	for(i=0; i<n; i++){
		printf(" %d ", *(v+i));
	}	

	printf("]\n");

	free(v);
	return 0;
}


void funcao_leitura(int *vetor, int tam) {
	int i;
	for(i=0; i<tam; i++){
		printf("Digite um inteiro para ser adicionado no vetor de inteiros de %d elementos: ", tam);
		scanf("%d", (vetor + i));	
	}
}
