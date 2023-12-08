//arrumar isso aqui

listas encadeadas

passo 1: definição das variáveis

#define TAM 6

struct nodo{
	char nome[16];
	int idade;
	int elo;
};

struct nodo lista[TAM];

int disp, nc;

passo 2: criação da PND

void cria_pnd(void)
{
	int i=0;
	while(i<tam-1)
	{
		lista[i].elo = i++;
		i++;
	}
	lista[TAM-1].elo = -1;
	disp=0;
}

passo 3: criação do NC

void cria_nc(void)
{
	nc = obtem();
	if(nc == -1)
	{
		printf("Não pode criar ND");
		fflush(stdin);
		getchar();
		exit(0);
	}
	else
	{
		list[nc].elo = -1;
		list[nc].idade = -1;
	}
}

passo 3: criação do NC (continuação)

int obtem(void)
{
	int aux;
	if(disp == -1)
		return(-1);
	else
	{
		aux = disp;
		disp = lista[disp].elo;
		return(aux);
	}

}
