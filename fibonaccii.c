#include <stdio.h>

int fibonacci(int n){

  int variavel;
  if(n <= 0){
    variavel = 0;
  }
  if(n == 1){
    variavel = 1;
  }
  if(n>1){
    variavel = fibonacci(n-1)+fibonacci(n-2);
   }

  return variavel;
  
  }

int main(void){

  int a,b;

  printf("Digite um valor\n");
  scanf("%d",&a);

  b = fibonacci(a);

  printf("O %d-esimo valor da sequencia vale %d",a,b);
  printf("\n");

  return 0;

}