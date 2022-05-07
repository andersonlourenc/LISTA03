#include <stdio.h>
#define N 100

int main(void) {

   char  V[N];
   int Count = 0;

  printf("Informe uma palavra: ");
  scanf("%s",V);

   while(V[Count] != '\0'){
     Count ++;
     
   }
  
  printf("A quantidade de caracteres na string é: %d\n", Count);
  return 0;
}
