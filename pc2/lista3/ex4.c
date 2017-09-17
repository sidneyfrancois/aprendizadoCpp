#include <stdio.h>
#include <stdlib.h>

int ** aloca_matriz(int l, int c);
void libera_matriz(int **m);

int main()
{	
	int l, c, **matriz, i, j, count;
	printf("Digite a dimensão da matriz de duas dimensões: ");
	scanf("%d %d", &l, &c);

	matriz = aloca_matriz(l, c);
	
	//for apenas para preencher a matriz com números inteiros
	for(i=0; i<l; i++){
		for(j=0; j<c; j++){
			*( *(matriz+i) + j) = ++count; 
		}
	}
	
	for(i=0; i<l; i++){
		printf("\n[");
		for(j=0; j<c; j++){
			printf(" %d ", *(*(matriz+i)+j));
		}
		printf("]\n");
	}	
	
	libera_matriz(matriz);

	printf("\nA matriz foi leberada da memória.\n");
	return 0;
}


int ** aloca_matriz(int l, int c){
	
	int **m, i;
	m = (int**)malloc(sizeof(int*) * l);
	*m = (int*)malloc(sizeof(int) * l * c); 	
	
	for(i=0; i<l; i++){
		*(m+i) = (*m + c * i);
	}

	return m;
}

void libera_matriz(int **m){
	
	free(*m);
	free(m);

}
