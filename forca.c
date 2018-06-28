#include <stdio.h>
#include <string.h>

void aberturadojogo(){
	printf("*******************************************************************\n");
	printf("* 		***       JOGO   DE   FORCA        ***            *\n");
	printf("*******************************************************************\n\n\n\n");
}

int main() {
  int i,j,acertou=0,enforcou=0,totaltentativas=10,tentativa=0,achou,cont=0;
  char palavrasecreta[20],chute;
  char chutes[tentativa];
  sprintf(palavrasecreta, "semtrad");
  aberturadojogo();
  do{
  	achou = 0;
  	for(i=0;i<strlen(palavrasecreta);i++){
	  	achou = 0;
	  	for(j=0;j<tentativa;j++){
	  		if(palavrasecreta[i]==chutes[j]){
	  			achou=1;
	  			break;
			} 
		}
			if(achou){
				cont++;
				printf("%c ", palavrasecreta[i]);
			}else{
				printf("_ ");
			}
	}
			if(cont==strlen(palavrasecreta)){
				printf("\nVoce descobriu a palavra secreta!!");
				return 0;
			}
	    printf("\n");
	    printf("\nQual e o seu CHUTE ?\n");
  		scanf(" %c",&chute);
  		chutes[tentativa]=chute;
  		tentativa++;
  		cont=0;
  		chutes[tentativa]=chute;
	    
  }while(!acertou && !enforcou && tentativa<totaltentativas);
  
  return 0;
}
