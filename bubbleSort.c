#include <stdio.h>
#include <stdlib.h>
 
void bubble_sort(int matriz[], int tam){
  int temp, i, j;
 
  for(i = 0; i < tam; i++){
    for(j = 0; j < tam; j++){
      if(matriz[i] < matriz[j]){
        temp = matriz[i];
        matriz[i] = matriz[j];
        matriz[j] = temp;
      }
    }
  }
}
 
int main(int argc, char *argv[])
{
  int valores[] = {4, 6, 2, 8, 1, 9, 3, 0, 11};
  int i, tamanho = 9;
 
  // imprime a matriz sem a ordenação
  for(i = 0; i < 9; i++){
    printf("%d ", valores[i]);
  }
 
  // vamos ordenar a matriz
  bubble_sort(valores, tamanho);
 
  // imprime a matriz ordenada
  puts("\n");
  for(i = 0; i < 9; i++){
    printf("%d ", valores[i]);
  }
 
  puts("\n");
  system("pause");
  return 0;
}