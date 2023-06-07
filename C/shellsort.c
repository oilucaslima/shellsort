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
    clock_t start, end;
    double cpu_time_used;
  
    printf("Array antes de ordenar: \n");
    printArray(vetor, n);
  
    start = clock();
    shellSort(vetor, n);
    end = clock();
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    

    printf("\nArray depois de ordenar: \n");
    printArray(vetor, n);

    printf("\nTempo de execução: %f segundos\n", cpu_time_used);
}