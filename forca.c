#include <stdio.h>
#include <string.h>
#include <math.h>

  int tentativa=0,cont,achou,acertou=0;
  char palavrasecreta[10],chutes[10];

void abertura(){
	printf("/****************************************\n");
    printf("	     / Jogo de Forca */				 \n");
    printf("/****************************************\n");
}

void chuta(){
	char chute;
	printf("\nQual e o seu palpite ?\n");
  	scanf(" %c",&chute);
  	chutes[tentativa]=chute;
  	tentativa++;
}

int verificaacertos(char chute){
	int j,achou=0;
	for(j=0;j<tentativa;j++){
	  	if(chutes[j]==chute){
	  		achou=1;
	  		break;
		}
	}
	return achou;
}

void imprimepalavrasecreta(){
	printf("Você já deu %d chutes\n", tentativa);
	int i;
	for(i=0;i<strlen(palavrasecreta);i++){
  			if(verificaacertos(palavrasecreta[i])){
				printf("%c ", palavrasecreta[i]);
				cont++;
			}else{
				printf("_ ");
			}		
	}
	printf("\n");	
}


escolhepalavra(char palavrasecreta[]){
	sprintf(palavrasecreta, "melancia");
}

int main() {
  escolhepalavra(palavrasecreta);
  abertura();

  do{
  	imprimepalavrasecreta();
  	chuta();
  	
  }while(tentativa<10 || !acertou);
  return 0;
}
