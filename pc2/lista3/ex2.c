#include <stdio.h>
#include <stdlib.h>

void funcao_imprime(int *vetor, int tam);
void funcao_liberaVetor(int *vetor);

int main()
{
	int n, i, *v;
	
	printf("Digite o tamanho do vetor desejado: ");	
	scanf("%d", &n);

	v = (int*)malloc(n*sizeof(int));		

	for(i=0; i<n; i++){
		printf("Digite um número inteiro para ser inserido no vetor de %d elementos: ", n);
		scanf("%d", (v+i));
	}

	funcao_imprime(v, n);
	funcao_liberaVetor(v);

	return 0;
}

void funcao_imprime(int *vetor, int tam){
	
	int i;
	printf("\n[");
	for(i=0; i<tam; i++){
		printf(" %d ", *(vetor+i));		
	}
	printf("]\n");	

}

void funcao_liberaVetor(int *vetor){

	free(vetor);
	printf("O vetor foi liberado da memória!\n");

}
