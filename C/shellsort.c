#include  <stdio.h>
#include  <stdlib.h>
#include  <time.h>

  
int shellSort(int vetor[], int n){
    for (int gap = n/2; gap > 0; gap /= 2){
        for (int i = gap; i < n; i += 1){
            
            int temp = vetor[i];
            int j; 
      
            for (j = i; j >= gap && vetor[j - gap] > temp; j -= gap){
                vetor[j] = vetor[j - gap];
            }

            vetor[j] = temp;
        }
    }

    return 0;
}
  
void printArray(int vetor[], int n){
    for (int i=0; i<n; i++){
        printf("%d ",vetor[i]);
    }
}
  
int main(){
    
    int vetor []={};
    int n = sizeof(vetor)/sizeof(vetor[0]);
    
    printf("Array antes de ordenar: \n");
    printArray(vetor, n);
  
    shellSort(vetor, n);
    
    printf("\nArray depois de ordenar: \n");
    printArray(vetor, n);

}