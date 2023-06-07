#ifndef SHELLSORT_HPP
#define SHELLSORT_HPP
#include <bits/stdc++.h>
#include <vector>

using namespace std;

class ShellSort{

    private:
        vector<int>arr;
        int n;
    public:

        ShellSort(vector<int>arr,int n);
        ShellSort();

        void setN(int n);
        int getN();

        ~ShellSort();

        void iniciando();
        void funcao_Shell(vector<int>&arr, int n);
        void printArray(vector<int>arr, int n);

};
#endif
