#include <stdio.h>
#include <string.h>

int main() {
  int i,j,acertou=0,enforcou=0,ttentativas=10,tentativa=0,achou,cont=0;
  char palavrasecreta[20],chute;
  char chutes[tentativa];
  sprintf(palavrasecreta, "uber");
  do{
  	printf("\nQual e o seu palpite ?\n");
  	scanf(" %c",&chute);
  	chutes[tentativa]=chute;
  	tentativa++;
  		cont=0;
  		for(i=0;i<strlen(palavrasecreta);i++){
	  		achou = 0;
	  		for(j=0;j<=tentativa;j++){
	  			if(palavrasecreta[i]==chutes[j]){
	  				achou=1;
	  				break;
				} 
			}
			if(achou){
				printf("%c ", palavrasecreta[i]);
				cont++;
			}else{
				printf("_ ");
			}
			if(cont==strlen(palavrasecreta)){
				printf("\nVoce descobriu a palavra secreta!!");
				acertou=1;
			}
	    }
	    printf("\n");
  }while(!acertou && !enforcou);
  
  return 0;
}
