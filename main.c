#include <stdio.h>
#include <stdlib.h>
#include <locale.h>//library para PT-BR

int main(){
	setlocale(LC_ALL,"Portuguese");//caracteres em PT-BR
	
	int escolha = 0, voto = 0, voto2 = 0;//opções
	int v111 = 0, v222 = 0, v333 = 0, v444 = 0;//v(vereador) = vxxx
	int p11 = 0, p22 = 0, p33 = 0;//p(prefeito) = pxxx
	
	do{//início estrutura DO - While
		system("cls");//limpar tela
		printf("Selecione uma opção:\n\n");//mensagem ao usuário
		printf("1 - Votar\n2 - Apuração dos votos\n3 - Sair\n");//informações
		scanf("%d", &escolha);//escolha
		fflush(stdin);//limpar buffer
		
		if(escolha == 1){//estrutura dos votos
			system("cls");//limpar tela
			printf("Vereadores: \n\n");//mensagem ao usuário
			printf("111 - João do Frete\n222 - Maria da Pamonha\n333 - Zé da Farmácia\n444 - Voto nulo\n\n");//informações
			printf("Selecione o Vereador desejado: \n");//interação com o usuário
			scanf("%d", &voto);//entrada de dados
			fflush(stdin);//limpar buffer
			
			switch(voto){//início da estrutura Switch
				case 111:{
					system("cls");//limpar tela
					printf("Você votou no vereador João do Frete!\n\n");//mensagem ao usuário
					if(voto == 111){//estrutura condicional
						v111++;//iteração
					}//fim estrutura condicional
					system("pause");//pausa
					break;//quebra de código
				}
				case 222:{
					system("cls");//limpar tela
					printf("Você votou na vereadora Maria da Pamonha!\n\n");//mensagem ao usuário
					if(voto == 222){//estrutura condicional
						v222++;//iteração
					}//fim estrutura condicional
					system("pause");//pausa
					break;//quebra de código
				}
				case 333:{
					system("cls");//limpar tela
					printf("Você votou no vereador Zé da Farmácia!\n\n");//mensagem ao usuário
					if(voto == 333){//estrutura condicional
						v333++;//iteração
					}//fim estrutura condicional
					system("pause");//pausa
					break;//quebra de código
				}
				case 444:{
					system("cls");//limpar tela
					printf("Você votou em Nulo!\n\n");//mensagem ao usuário
					if(voto == 444){//estrutura condicional
						v444++;//iteração
					}//fim estrutura condicional
					system("pause");//pausa
					break;//quebra de código
				}
				default:{//variável de erro
					system("cls");//limpar tela
					printf("Candidato digitado inválido, tente novamente!\n\n");//mensagem de erro ao usuário
					system("pause");//pausa
					break;//quebra de código
				}
			}//fim da estrutura Switch
	
			system("cls");//limpar tela
			printf("Prefeito:\n\n");//mensagem ao usuário
			printf("11 - DR. Zureta\n22 - Senhor Gomes\n33 - Voto nulo\n\n");//informações
			printf("\nSelecione o Prefeito desejado: \n");//interação com usuário
			scanf("%d", &voto2);//entrada de dados
			fflush(stdin);//limpar buffer
			
			
			switch(voto2){//início estrutura Switch
				case 11:{
					system("cls");//limpar tela
					printf("Você votou no prefeito DR. Zureta!\n\n");//mensagem ao usuário
					if(voto2 == 11){//estrutura condicional
						p11++;//iteração	
					}//fim estrutura condicional
					system("pause");//pausa
					break;//quebra de código
				}
				case 22:{
					system("cls");//limpar tela
					printf("Você votou no prefeito Senhor Gomes!\n\n");//mensagem ao usuário
					if(voto2 == 22){//estrutura condicional
						p22++;//iteração
					}//fim estrutura condicional
					system("pause");//pausa
					break;//quebra de código
				}
				case 33:{
					system("cls");//limpar tela
					printf("Você votou em Nulo!\n\n");//mensagem ao usuário
					if(voto2 == 33){//estrutura condicional
						p33++;//iteração
					}//fim estrutura condicional
					system("pause");//pausa
					break;//quebra de código
				}
				default:{//variável de erro
					system("cls");//limpar tela
					printf("Candidato digitado inválido, tente novamente!\n\n");//mensagem de erro ao usuário
					system("pause");//pausa
					break;//quebra de código
				}
			}//fim estrutura Switch
			system("cls");//limpar tela
			printf("Votação encerrada!\n\n");//mensagem ao usuário
			system("pause");//pausa
			
	}else if(escolha == 2){//estrutura else-if
		system("cls");//limpar tela
		printf("Apuração dos votos:\n\n");//mensagem ao usuário
		printf("-------- Vereadores --------\n\n");//mensagem ao usuário
		printf("111 - João do Frete: %d\n222 - Maria da Pamonha: %d\n333 - Zé da Farmácia: %d\n444 - Nulo: %d\n\n", v111, v222, v333, v444);//informações
		
		printf("-------- Prefeitos -------- \n\n");//mensagem ao usuário
		printf("11 - DR. Zureta: %d\n22 - Senhor Gomes: %d\n33 - Nulo: %d\n\n", p11, p22, p33);//informações
		system("pause");//pausa
	}else{//estrutura else
		break;
	}//fim da estrutura IF - Else If - Else
		
	}while(escolha >= 1 && escolha <= 2);//fim da estrutura Do-While
	
	system("cls");//limpar tela
	printf("Programa finalizado!\n\n");//mensagem ao usuário
	system("pause");//pausa
	return(0);//fim do código
	
}//fim da estrutura MAIN

