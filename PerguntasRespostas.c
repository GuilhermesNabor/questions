#include <stdio.h>
#include <stdbool.h>
//NaborZin Interactive copia não comédia.

	int respostas_1;
	int respostas_2;
	int respostas_3;
	int respostas_4;


	int main(int argc, char *argv[]){


	printf("VERSÃO 1.0\n\n\n");

	char nome[61];

	printf("Qual é o seu nome? ");
	scanf("%s", nome);

	printf("Seja bem vindo %s, o jogo irá começar. \n\n\n", nome);

	printf("Onde se localiza Machu Picchu? \n");
	printf("1 - Colômbia \n");
	printf("2 - Peru \n");
	printf("3 - China \n");
	printf("4 - Bolívia \n");
	printf("5 - Índia \n\n");

	scanf("%i", &respostas_1);
	switch(respostas_1){
	case 1:
		printf("RESPOSTA ERRADA \n\n");
		break;
	case 2:
		printf("RESPOSTA CORRETA \n\n");
		break;
	case 3:
		printf("RESPOSTA ERRADA \n\n");
		break;
	case 4:
		printf("RESPOSTA ERRADA \n\n");
		break;
	case 5:
		printf("RESPOSTA ERRADA \n\n");
		break;
	default:
		printf("Errou, tente novamente \n\n");
	}


	printf("Quanto tempo a Terra demora para dar uma volta completa em torno dela mesma? \n");
	printf("1 - 24 Horas \n");
	printf("2 - 365 dias \n");
	printf("3 - 7 dias \n");
	printf("4 - 365 ou 366 dias \n");
	printf("5 - 30 ou 31 dias \n\n");

	scanf("%i", &respostas_2);
	switch(respostas_2){
	case 1:
		printf("RESPOSTA CORRETA \n\n");
		break;
	case 2:
		printf("RESPOSTA ERRADA \n\n");
		break;
	case 3:
		printf("RESPOSTA ERRADA \n\n");
		break;
	case 4:
		printf("RESPOSTA ERRADA \n\n");
		break;
	case 5:
		printf("RESPOSTA ERRADA \n\n");
		break;
	default:
		printf("Errou, tente novamente \n\n");
		break;
	}


	printf("Qual o maior planeta do sistema solar? \n");
	printf("1 - Marte \n");
	printf("2 - Lua \n");
	printf("3 - Saturno \n");
	printf("4 - Terra \n");
	printf("5 - Júpter \n\n");

	scanf("%i", &respostas_3);
	switch(respostas_3){
	case 1:
		printf("RESPOSTA ERRADA \n\n");
		break;
	case 2:
		printf("RESPOSTA ERRADA \n\n");
		break;
	case 3:
		printf("RESPOSTA ERRADA \n\n");
		break;
	case 4:
		printf("RESPOSTA ERRADA \n\n");
		break;
	case 5:
		printf("RESPOSTA CORRETA \n\n");
		break;
	default:
		printf("Errou, tente novamente \n\n");
		break;
	}

	printf("Em que país foi construído o Muro de Berlim? \n");
	printf("1 - Estados Unidos \n");
	printf("2 - China \n");
	printf("3 - Coreia do Norte \n");
	printf("4 - Alemanha \n");
	printf("5 - Brasil \n\n");

	scanf("%i", &respostas_4);
	switch(respostas_4){
	case 1:
		printf("RESPOSTA ERRADA \n\n");
		break;
	case 2:
		printf("RESPOSTA ERRADA \n\n");
		break;
	case 3:
		printf("RESPOSTA ERRADA \n\n");
		break;
	case 4:
		printf("RESPOSTA CORRETA \n\n");
		break;
	case 5:
		printf("RESPOSTA ERRADA \n\n");
		break;
	default:
		printf("Errou, tente novamente \n\n");
		break;
	}
	printf("Parabéns pelos resultados! NaborZin Interactive\n");
	return 0;
}
//NaborZin Interactive copia não comédia.
