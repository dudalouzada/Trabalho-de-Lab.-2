#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
  int j,c,v;
  do{
  printf("Escolha uma opção:\n1.Pedra 2.Papel 3.Tesoura\n");
  scanf("%d", &j);
  
  srand(time(NULL));
  c=("%d",rand()%3+1);
  if(c==1){
    printf("Computador escolheu Pedra.\n");
  }
  else if(c==2){
    printf("Computador escolheu Papel.\n");
  }
  else{
    printf("Computador escolheu Tesoura.\n");
  }
    
  if(j==c){
    printf("Empate\n");}
  else if((j==1 && c==3)||(j==2 && c==1)||(j==3 && c==2)){
    printf("Voce venceu!\n");}
  else{
    printf("Computador venceu!\n");}
  
  printf("Deseja jogar novamente?\n 1. Sim\n 2. Nao\n");
  scanf("%d", &v);
    }while(v==1);
}
