#include <stdio.h>
#include <string.h>
#define String 100

int main() {
   char  V[String], C;


  printf("Digite uma palavra: ");
  scanf("%s",V);

  int Tamanho = strlen(V); 

  printf("A palavra digitada foi: %s\n", V);

  printf("\nDigite um caractere:");
  scanf(" %c", &C);

  printf("o caractere digitado foi: %c\n", C);

    printf("---- Resultado ----\n");
  
    for(int i = 0 ; i < Tamanho; i++){
       
      printf("%c" ,V[i]);

     
      
      }

    printf("\n");

   
    for(int i = 0 ; i < Tamanho; i++){
       

    if(C == V[i]){
   
      printf("\nO caractere %c foi encontrado na posição %d\n", C, i);
        
      } 
      
      }
  

    return 0;



}