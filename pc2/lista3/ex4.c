#include <stdio.h>
#include <stdlib.h>

int ** aloca_matriz(int l, int c);
void libera_matriz(int **matriz);

int main()
{	
	int l, c, **m;
	printf("Digite a dimensão da matriz 2x2: ");
	scanf("%d %d", &l, &c);

	m = (int**)malloc(l*sizeof(int*));
	*m = (int*)malloc(l*c*sizeof(int)); 	
	
	for(i=0; i<l; i++){
		(m+i) = (*m+c*i);
	}

		

	return 0;
}


int ** aloca_matriz(int l, int c){
	
}

void libera_matriz(int **matriz){
	
}
