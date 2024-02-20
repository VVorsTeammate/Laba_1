#include "Enter.h"
#include "Matrix.h"
#include "Gauss.h"
#include <iostream>

int main(){
    int size = 0;
    char v = '0';
    std:: cout << "Enter size matrix, please" <<std::endl;
    std:: cin >> size;
    
    double* vector_b = new double[size];
    double* vector_const_b = new double[size];
    obnul_1(vector_b , size);
    int* boss = new int[size];
    f0123(boss, size);
    double ** matrix_A = Matrix_generation(size);
    double ** matrix_Const_A = Matrix_generation(size);
 
    obnul(matrix_A, size);
    Vibor(matrix_A, vector_b, size);
    Redact(matrix_A, vector_b, size);

    copy_1(vector_b, vector_const_b, size);
    copy_2(matrix_A, matrix_Const_A, boss, size);
    Show_system(matrix_A, vector_b, size);

    Gauss(matrix_A, boss, vector_b, size);
    double* Korni_x = new double[size];
    Obratniy_hod(matrix_A, Korni_x, vector_b, size);
    show_x(Korni_x, size);
    Pogresh(matrix_Const_A, Korni_x, vector_const_b, size);

    del(matrix_A, size);
    del(matrix_Const_A, size);
    delete [] vector_b;
    delete [] vector_const_b;
    delete [] boss;

    return 0;
}