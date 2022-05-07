#include <stdio.h>
#define N 15


int main() {

 float V[N], Maior = 0, Menor = 0, Soma;


 for (int i = 0; i <= N - 1; i++){

   printf("Digite o %d° valor:", i+1);
   scanf("%f", &V[i]);

 }

  puts("\n");

  puts("\n---- Entradas ----"); 


  
for ( int i = 0; i <= N - 1; i++){

   printf("O %d° valor inserido é: %.2f\n", i+1, V[i]);
   printf("");

}

  
Maior = V[0];
Menor = V[0];

for(int i = 1; i < N; i++){

if(Maior < V[i]){
  
  Maior = V[i];

} else if (Menor > V[i]){

 Menor = V[i];

} 

   }

 Soma = Maior + Menor;

  puts("\n---- Resultado ----");  
   
 printf("O Maior valor: %.2f\n", Maior);
 printf("O Menor valor: %.2f\n", Menor);
 printf("O valor da adição entre %.2f + %.2f = %.2f\n", Maior, Menor, Soma);
  
    return 0;
}