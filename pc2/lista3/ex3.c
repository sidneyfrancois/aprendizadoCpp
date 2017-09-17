#include <stdio.h>
#include <stdlib.h>

int ** aloca_matriz(int l, int c);
void libera_matriz(int **m, int l, int c);

int main()
{
	int **m, i, l, c;

	printf("Digite o número de linhas e colunas para a matriz a ser alocada: ");
	scanf("%d %d", &l, &c);
		
	m = aloca_matriz(l, c);	
	
	libera_matriz(m, l, c);	
	
	return 0;
}

int ** aloca_matriz(int l, int c){
	
	int **matriz, i;
	
	if(l<1 || c<1){
		printf("Linha ou coluna inválida para a alocação da matriz!");
		return (NULL); 
	}

	matriz = (int **)malloc(l*sizeof(int*));
	
	for(i=0; i<l; i++){
		*(matriz+i) = (int*)malloc(c*sizeof(int));
	}
	
	printf("Matriz de %d linhas e %d colunas foi alocada na memória!\n", l, c);
	
	return matriz; 	
}


void libera_matriz(int **m, int l, int c){
	
	int i;	
	for(i=0; i<l; i++){
		free(*(m+i));
	}

	free(m);

	printf("Matriz foi desalocada da memória!\n");
}
