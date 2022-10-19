#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
  int j,c,v;
  do{
    printf("Escolha uma opção:\n1.Pedra 2.Papel 3.Tesoura 4.Lagarto 5.Spock\n");
  scanf("%d", &j);
  
  srand(time(NULL));
  c=("%d",rand()%5+1);
  if(c==1){
    printf("Computador escolheu Pedra.\n");
  }
  else if(c==2){
    printf("Computador escolheu Papel.\n");
  }
  else if(c==3){
    printf("Computador escolheu Tesoura.\n");
  }
  else if(c==4){
    printf("Computador escolheu Lagarto.\n");
  }
  else{
    printf("Computador escolheu Spock.\n");
  }
    
  if(j==c){
    printf("Empate\n");}
  else if((j==1 && c==3)||(j==1 && c==4)||(j==2 && c==1)||(j==2 && c==5)||(j==3 && c==2)||(j==3 && c==4)||(j==4 && c==5)||(j==4 && c==2)||(j==5 && c==3)||(j==5 && c==1)){
    printf("Voce venceu!\n");}
  else{
    printf("Computador venceu!\n");}

    printf("Deseja jogar novamente?\n1.Sim 2.Nao\n");
    scanf("%d", &v);
  }while(v==1); 
}
