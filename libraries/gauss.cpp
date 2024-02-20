#include <iostream>
#include "Matrix.h"

void Gauss(double** matrix_A, int* boss, double* vector_b, int size){
    for(int i = 0; i < size; i++){
        if(matrix_A[i][boss[i]] == 0){
            double val = boss[i];
            boss[i] = boss[find_boss(i, matrix_A, size)];
            boss[find_boss(i, matrix_A, size)] = val;
        }
        double r = matrix_A[i][boss[i]];
        for(int j = 0; j < size; j++){
            matrix_A[i][j] = matrix_A[i][j] / r;
        }
        vector_b[i] = vector_b[i] / r;

        for(int k = i + 1; k < size; k++){
            r = matrix_A[k][i];
            for(int j = i; j < size; j++){
                matrix_A[k][j] = matrix_A[k][j] - matrix_A[i][j] * r;
            }
            vector_b[k] = vector_b[k] - vector_b[i] * r;
        }

        std:: cout << "Working..." <<std::endl;
        Show_system(matrix_A, vector_b, size);
    }
}

void Obratniy_hod(double**matrix_A, double* Korni_x, double* vector_b, int size){
    for(int i = size - 1; i >= 0; i--){
        Korni_x[i] = vector_b[i];
        if(i < size - 1){
            for(int j = i + 1; j < size; j++){
                Korni_x[i] = Korni_x[i] - Korni_x[j] * matrix_A[i][j];
            }
        }
    }
}

void Pogresh(double** matrix_Const_A, double* Korni_x, double* vector_const_b, int size){
    double* pogreshn = new double[size];
    f0(pogreshn, size);
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            pogreshn[i] += matrix_Const_A[i][j] * Korni_x[j];
        }
    }
    for(int i = 0; i < size; i++){
         pogreshn[i] = vector_const_b[i] - pogreshn[i];
    }
    show_pogr(pogreshn, Korni_x, size);
    delete [] pogreshn;
}