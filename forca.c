#include <stdio.h>
#include <string.h>
#include <math.h>

<<<<<<< HEAD
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
=======
void abertura(){
	printf("/****************************************\n");
    printf("	  / Jogo de Forca */				 \n");
    printf("/****************************************\n");
}

int parimpar(int numero){
	if(numero%2==0){
		return 1;
	}else{
		return 0;
	}
}

potencia(int a,int b){
	int r = pow(a,b);
	printf("\n%d\n",r);
}

soma(int numeros[10]){
	int i,s=0;
	for(i=0;i<10;i++){
		s += numeros[i];	
	}
	printf("A soma é = %d",s);
	for(i=0;i<10;i++){
		printf("\n%d ",numeros[i]);	
	}
}
int main() {
  int a,x,ehpar=0,i,j,acertou=0,enforcou=0,ttentativas=10,tentativa=0,achou,cont=0;
  char palavrasecreta[20],chute;
  char chutes[tentativa];
  int vetor[10];
  sprintf(palavrasecreta, "uber");
  abertura();
  int resultado = parimpar(25);
  printf("%d",resultado);
  potencia(5,3);
  x=2;
  for(a=0;a<10;a++){
  	x++;
  	vetor[a]=x;
  }
  soma(vetor);
>>>>>>> 0cafb76af8058b34f52bfb26df1b73ad9a268b44
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
