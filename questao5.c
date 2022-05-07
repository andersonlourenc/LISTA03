#include <stdio.h>
#include <string.h>
#define LIM 100
#define LIM2 200

int main(void) {

  char V1[LIM], V2[LIM2];
  
  printf("Digite a primeira string:");
  scanf("%s", V1);
  

  printf("Digite a segunda string:");
  scanf("%s", V2);

  printf("\nMetódo - sem strcat\n");

  printf("Cocatenação da string 1 com string 2:%s%s\n", V1, V2);

  printf("\nMetódo - strcat\n");
  strcat(V1, V2);
  printf("Cocatenação da string 1 com string 2:%s\n", V1);

  return 0;
}