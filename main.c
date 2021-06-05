#include <stdio.h>
#include <stdlib.h>
#include <locale.h>//library para PT-BR

int main(){
	setlocale(LC_ALL,"Portuguese");//caracteres em PT-BR
	
	int escolha = 0, voto = 0, voto2 = 0;//op��es
	int v111 = 0, v222 = 0, v333 = 0, v444 = 0;//v(vereador) = vxxx
	int p11 = 0, p22 = 0, p33 = 0;//p(prefeito) = pxxx
	
	do{//in�cio estrutura DO - While
		system("cls");//limpar tela
		printf("Selecione uma op��o:\n\n");//mensagem ao usu�rio
		printf("1 - Votar\n2 - Apura��o dos votos\n3 - Sair\n");//informa��es
		scanf("%d", &escolha);//escolha
		fflush(stdin);//limpar buffer
		
		if(escolha == 1){//estrutura dos votos
			system("cls");//limpar tela
			printf("Vereadores: \n\n");//mensagem ao usu�rio
			printf("111 - Jo�o do Frete\n222 - Maria da Pamonha\n333 - Z� da Farm�cia\n444 - Voto nulo\n\n");//informa��es
			printf("Selecione o Vereador desejado: \n");//intera��o com o usu�rio
			scanf("%d", &voto);//entrada de dados
			fflush(stdin);//limpar buffer
			
			switch(voto){//in�cio da estrutura Switch
				case 111:{
					system("cls");//limpar tela
					printf("Voc� votou no vereador Jo�o do Frete!\n\n");//mensagem ao usu�rio
					if(voto == 111){//estrutura condicional
						v111++;//itera��o
					}//fim estrutura condicional
					system("pause");//pausa
					break;//quebra de c�digo
				}
				case 222:{
					system("cls");//limpar tela
					printf("Voc� votou na vereadora Maria da Pamonha!\n\n");//mensagem ao usu�rio
					if(voto == 222){//estrutura condicional
						v222++;//itera��o
					}//fim estrutura condicional
					system("pause");//pausa
					break;//quebra de c�digo
				}
				case 333:{
					system("cls");//limpar tela
					printf("Voc� votou no vereador Z� da Farm�cia!\n\n");//mensagem ao usu�rio
					if(voto == 333){//estrutura condicional
						v333++;//itera��o
					}//fim estrutura condicional
					system("pause");//pausa
					break;//quebra de c�digo
				}
				case 444:{
					system("cls");//limpar tela
					printf("Voc� votou em Nulo!\n\n");//mensagem ao usu�rio
					if(voto == 444){//estrutura condicional
						v444++;//itera��o
					}//fim estrutura condicional
					system("pause");//pausa
					break;//quebra de c�digo
				}
				default:{//vari�vel de erro
					system("cls");//limpar tela
					printf("Candidato digitado inv�lido, tente novamente!\n\n");//mensagem de erro ao usu�rio
					system("pause");//pausa
					break;//quebra de c�digo
				}
			}//fim da estrutura Switch
	
			system("cls");//limpar tela
			printf("Prefeito:\n\n");//mensagem ao usu�rio
			printf("11 - DR. Zureta\n22 - Senhor Gomes\n33 - Voto nulo\n\n");//informa��es
			printf("\nSelecione o Prefeito desejado: \n");//intera��o com usu�rio
			scanf("%d", &voto2);//entrada de dados
			fflush(stdin);//limpar buffer
			
			
			switch(voto2){//in�cio estrutura Switch
				case 11:{
					system("cls");//limpar tela
					printf("Voc� votou no prefeito DR. Zureta!\n\n");//mensagem ao usu�rio
					if(voto2 == 11){//estrutura condicional
						p11++;//itera��o	
					}//fim estrutura condicional
					system("pause");//pausa
					break;//quebra de c�digo
				}
				case 22:{
					system("cls");//limpar tela
					printf("Voc� votou no prefeito Senhor Gomes!\n\n");//mensagem ao usu�rio
					if(voto2 == 22){//estrutura condicional
						p22++;//itera��o
					}//fim estrutura condicional
					system("pause");//pausa
					break;//quebra de c�digo
				}
				case 33:{
					system("cls");//limpar tela
					printf("Voc� votou em Nulo!\n\n");//mensagem ao usu�rio
					if(voto2 == 33){//estrutura condicional
						p33++;//itera��o
					}//fim estrutura condicional
					system("pause");//pausa
					break;//quebra de c�digo
				}
				default:{//vari�vel de erro
					system("cls");//limpar tela
					printf("Candidato digitado inv�lido, tente novamente!\n\n");//mensagem de erro ao usu�rio
					system("pause");//pausa
					break;//quebra de c�digo
				}
			}//fim estrutura Switch
			system("cls");//limpar tela
			printf("Vota��o encerrada!\n\n");//mensagem ao usu�rio
			system("pause");//pausa
			
	}else if(escolha == 2){//estrutura else-if
		system("cls");//limpar tela
		printf("Apura��o dos votos:\n\n");//mensagem ao usu�rio
		printf("-------- Vereadores --------\n\n");//mensagem ao usu�rio
		printf("111 - Jo�o do Frete: %d\n222 - Maria da Pamonha: %d\n333 - Z� da Farm�cia: %d\n444 - Nulo: %d\n\n", v111, v222, v333, v444);//informa��es
		
		printf("-------- Prefeitos -------- \n\n");//mensagem ao usu�rio
		printf("11 - DR. Zureta: %d\n22 - Senhor Gomes: %d\n33 - Nulo: %d\n\n", p11, p22, p33);//informa��es
		system("pause");//pausa
	}else{//estrutura else
		break;
	}//fim da estrutura IF - Else If - Else
		
	}while(escolha >= 1 && escolha <= 2);//fim da estrutura Do-While
	
	system("cls");//limpar tela
	printf("Programa finalizado!\n\n");//mensagem ao usu�rio
	system("pause");//pausa
	return(0);//fim do c�digo
	
}//fim da estrutura MAIN

