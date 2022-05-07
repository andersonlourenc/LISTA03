#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 5

int main() {

int  mat[N][N], count = 0;
char Num = 0;
  


  
srand(time(NULL));

for(int i = 0; i < N; i++){
   for(int j = 0; j < N; j++){
      mat[i][j] = rand() % 10;
 }
}

 printf("\nValores gerados\n");   
    for (int i=0; i < N; i++){
     for(int j = 0; j < N; j++){

       printf("[%d]", mat[i][j]);
     }
   puts("\n");
  }
  
  printf("Digite um número:");
 scanf("%d", &Num);
  printf("o caractere digitado foi: %d\n", Num);

  for (int i=0; i < N; i++){
     for(int j = 0; j < N; j++){
        
       if(mat[i][j] == Num){
          count++;
        }
       }
     }

printf("%d está presente %d vezes\n", Num, count); 



  return 0;
}