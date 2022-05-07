#include <stdio.h>
#include <stdlib.h>  
#include <time.h> 
#include <math.h>


#define N 3

int main(){
  int str[N], I, SMA = 0, MMG = 1;
  float MA, MG;
  
  srand (time(NULL));


  for(int i = 0; i < N; i++){
      I = rand()%18;
      printf("[%d] = %d\n", i, I);
      SMA+=I;
      MMG*=I;

  }
  
  MA = (float)SMA/N;
  MG = cbrt(MMG); 
 
  printf("A média aritmética é: %.2f\n", MA);
  printf("A média geométrica é: %.2f\n", MG);
  
  return 0;
}