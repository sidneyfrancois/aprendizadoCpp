#include <stdio.h>
#include <stdlib.h>

typedef struct pessoa Pessoa;

struct pessoa{
	char nome[50];
	char dataNascimento[20];
	char cpf[20];
};

void preenche_estrutura(Pessoa *p);
void imprime_estrutura(Pessoa *p);

int main()
{
	Pessoa *p1;
	
	p1 = (Pessoa*)malloc(sizeof(Pessoa));	

	preenche_estrutura(p1);	
	imprime_estrutura(p1);

	free(p1);
	return 0;
}

void preenche_estrutura(Pessoa *p){
	
	printf("Digite o nome da pessoa: ");
	scanf("%s", p->nome);
	
	printf("Digite a data de nascimento da pessoa: ");
	scanf("%s", p->dataNascimento);

	printf("Digite o cpf da pessoa: ");
	scanf("%s", p->cpf);
 
}

void imprime_estrutura(Pessoa *p){
	
	printf("\nNome da pessoa: %s", p->nome);
	printf("\nData de nascimento da pessoa: %s", p->dataNascimento);
	printf("\nCPF da pessoa: %s\n", p->cpf);
 
}
