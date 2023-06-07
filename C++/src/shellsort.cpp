#include "shellsort.hpp"

using namespace std;

ShellSort :: ShellSort(){
    n = 0;
}

ShellSort :: ShellSort(vector<int>arr, int n){
    arr.clear();
    setN(n);
}

void ShellSort :: setN(int n){
    this -> n = n;
}
int ShellSort :: getN(){
    return this -> n;
}

ShellSort :: ~ShellSort(){
    
}

void ShellSort :: iniciando(){

    vector<int>arr = {};
    int n = arr.size();

    cout<<"Array antes de ordenar: \n";
    printArray(arr, n);

    funcao_Shell(arr,n);

    cout<<"\nArray depois de ordenar: \n";
    printArray(arr, n);
}
  
void ShellSort :: funcao_Shell(vector<int>&arr, int n){
    for (int gap = n/2; gap > 0; gap /= 2){
        for (int i = gap; i < n; i += 1){
    
            int temp = arr[i];
            int j; 

            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap){
                arr[j] = arr[j - gap];
            }
              
            arr[j] = temp;
        }
    }
}
  
void ShellSort :: printArray(vector<int>arr, int n){
    for (int i=0; i<n; i++){
        cout << arr[i] << " ";

    }
}
