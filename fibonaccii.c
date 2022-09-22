#include <stdio.h>

int main(void){

  int variavel_1 = 0, variavel_2 = 1;
  int a,b=1;
  
  printf("Digite um valor\n");
  scanf("%d",&a);
  
  for(int i=0;i<=a-1;i++){
    
    if(a-1<0){

      b=0;
      break;

    }

    variavel_1=variavel_2;
    variavel_2=b;
    b=variavel_1+variavel_2;

  }
  
  printf("O %d-esimo valor da sequencia vale %d",a,variavel_1);
  printf("\n");
  return 0;

}