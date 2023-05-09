#include <stdio.h>

void caminhoneiro(int p[],int n,int C){
  int S[6] = {0,0,0,0,0,0};
  int k = 0;
  int ultima_parada = 0;
  for(int i = 1;i < n;i++){
    if ((p[i] - ultima_parada) > C){
      ultima_parada = p[i] - 1;
      S[k] = i-1;
      k++;
    }
  }
  for(int i = 0;i<k;i++)
    printf("\n%i",S[i]);
}

int main() {
  int n = 6; //numero de paradas
  int p[6] = {2,6,12,14,22,30}; //posicoes dos postos de gasolina
  int C; //autonomia do veiculo
  printf("\nQuantos quilometros a maquina aguenta?\n");
  scanf("%i",&C);
  caminhoneiro(p,n,C);
}