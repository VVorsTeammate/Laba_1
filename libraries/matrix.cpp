#include <iostream>
#include <random>
#include <iomanip>

int find_boss(int i,double** array, int size){
    for(int j = i; j < size; j++){
        if(array[i][j] != 0.0) return j;
    }
    std:: cout << "Find boss error.$@%^#!" <<std::endl;
    exit(-1);
}

void edinenie(double** array, int size){
    std::mt19937 gen;
    gen.seed(std::random_device()());
    std::uniform_int_distribution<std::mt19937::result_type> dist(0,8);
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            array[i][j] = dist(gen);
        }
    }
}

void f0(double* array, int size){
    for(int i = 0; i < size; i++){
        array[i] = 0.0;
    }
}

void f0123(int* array, int size){
    for(int i = 0; i < size; i++){
        array[i] = i;
    }
}

void f0123_d(double* array, int size){
    std::mt19937 gen;
    gen.seed(std::random_device()());
    std::uniform_int_distribution<std::mt19937::result_type> dist(0,8);
    for(int i = 0; i < size; i++){
        array[i] = dist(gen);
    }
}

void obnul(double** array, int size){
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            array[i][j] = 0.0;
        }
    }
}

void obnul_1(double* array, int size){
    for(int i = 0; i < size; i++){
        array[i] = 0.0;
    }
}

double** Matrix_generation(int size){
    double** matrix = new double*[size];
    for(int i = 0; i < size; i++){
        matrix[i] = new double[size];
    }
    return matrix;
}

void show_pogr(double* pogreshn, double* Korni_x, int size){
    std::cout << "Pogreshnost':" <<std::endl;
    for(int i = 0; i < size; i++){
        std::cout << "x" << i << ": " << pogreshn[i] <<std::endl;
    }
}

void Show_system(double** array, double* b, int size){
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            std::cout << std::setw(10) << array[i][j] <<" ";
        }
        std::cout <<"   |   "<< b[i] <<std::endl;
    }
}

void show_x(double* Korni_x, int size){
    for(int i = 0; i < size; i++){
        std:: cout << "x" << i << " = " << Korni_x[i] <<std::endl;
    }
}

void copy_2(double** matrix_A, double** matrix_Const_A, int* boss, int size){
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            matrix_Const_A[i][j] = matrix_A[i][j];
        }
    }
}

void copy_1(double* vector_b, double* vector_const_b, int size){
    for(int i = 0; i < size; i++){
        vector_const_b[i] = vector_b[i];
    }
}

void del(double** matrix, int size){
    for(int i = 0; i < size; i++){
        delete [] matrix[i];
    }
    delete [] matrix;
}