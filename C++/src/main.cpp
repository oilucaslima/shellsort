#include "shellsort.hpp"
#include <iostream>
#include  <time.h>


using namespace std;

int main(){

    clock_t start, end;
    double cpu_time_used;

    ShellSort* shell = new ShellSort();
    start = clock();
    shell->iniciando();
    end = clock();
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;

    printf("\nTempo de execução: %f segundos\n", cpu_time_used);

    return 0;    
}