#include <stdio.h>
#include <string.h>
#include <math.h>

void abertura(){
	printf("/****************************************\n");
    printf("	     / Jogo de Forca */				 \n");
    printf("/****************************************\n");
}

void chuta(char chutes[],int* tentativa){
	char chute;
	printf("\nQual e o seu palpite ?\n");
  	scanf(" %c",&chute);
  	chutes[*tentativa]=chute;
  	(*tentativa)++;
}

int verificaacertos(char chute, char chutes[],int* tentativa){
	int j,achou=0;
	for(j=0;j<tentativa;j++){
	  	if(chutes[j]==chute){
	  		achou=1;
	  		break;
		}
	}
	return achou;
}

void imprimepalavrasecreta(char palavrasecreta[],char chutes[],int tentativa){
	int i,achou=0,cont=0;
	for(i=0;i<strlen(palavrasecreta);i++){
  		achou = verificaacertos(palavrasecreta[i],chutes,tentativa);
  			if(achou){
				printf("%c ", palavrasecreta[i]);
				cont++;
			}else{
				printf("_ ");
			}
			
	}
	if(cont==strlen(palavrasecreta)){
		printf("\nVoce acertou a palavra SECRETA!!\n");
		return 0;
	}
	
}

int main() {
  int i,j,totaltentativas=10,tentativa=0,cont=0,achou;
  char chute;
  char palavrasecreta[10];
  char chutes[totaltentativas];
  sprintf(palavrasecreta, "uber");
  abertura();
  do{
  	cont=0;
  		chuta(chutes,&tentativa);
  		imprimepalavrasecreta(palavrasecreta,chutes,tentativa);
  }while(tentativa<totaltentativas);
  printf("\nVoce nao acertou a palavra secreta");
  return 0;
}
