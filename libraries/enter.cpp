#include <iostream>
#include "Matrix.h"
#include "Gauss.h"

double** Vvod(double** matrix_A, double* vector_b, int size){
    int i = 0, j = 0;
    char temp = '0';
    double proverka = 0.0;
    std:: cout << "Entering matrix:" <<std::endl;
    Show_system(matrix_A, vector_b, size);
    std:: cout << "Your position: string: " << i << " stolbec: " << j <<std::endl;
    bool flag = true;
    while(flag){
        std:: cout << "S - show matrix, U - up, D - down, R - right, L - left, E - Enter the element, Q - go to enter a vector" <<std::endl;
        std:: cout << "Your choice: " <<std::endl;
        std:: cin >> temp;
        switch (temp)
        {
            case 'Q': case 'q':
                flag = false;
                break;
            case 'S': case 's':
                Show_system(matrix_A, vector_b, size);
                std::cout << std::endl;
                std:: cout << "Your position: string: " << i << " stolbec: " << j <<std::endl;
                break;
            case 'U': case 'u':
                i--;
                if(i < 0){
                    std:: cout << "What are you doing? string and stolbec must be >= 0 but <= size - 1" <<std::endl;
                    i = 0;
                }
                std::cout << std::endl;
                std:: cout << "Your position: string: " << i << " stolbec: " << j <<std::endl;
                break;
            case 'D': case 'd':
                i++;
                if(i > size - 1){
                    std:: cout << "What are you doing? string and stolbec must be >= 0 but <= size - 1" <<std::endl;
                    i = size - 1;
                }
                std::cout << std::endl;
                std:: cout << "Your position: string: " << i << " stolbec: " << j <<std::endl;
                break;
            case 'R': case 'r':
                j++;
                if(j > size - 1){
                    std:: cout << "What are you doing? string and stolbec must be >= 0 but <= size - 1" <<std::endl;
                    j = size - 1;
                }
                std::cout << std::endl;
                std:: cout << "Your position: string: " << i << " stolbec: " << j <<std::endl;
                break;
            case 'L': case 'l':
                j--;
                if(j < 0){
                    std:: cout << "What are you doing? string and stolbec must be >= 0 but <= size - 1" <<std::endl;
                    j = 0;
                }
                std::cout << std::endl;
                std:: cout << "Your position: string: " << i << " stolbec: " << j <<std::endl;
                break;
            case 'E': case 'e':
                std::cin >> proverka;
                if (!proverka){
                    std::cout << "Value error" << std::endl;
                    std::cin.clear();
                    fflush(stdin);
                }
                matrix_A[i][j] = proverka;
                std::cout << std::endl;
                std:: cout << "Your position: string: " << i << " stolbec: " << j <<std::endl;
                break;
            default:
                std::cout << "Choice undifinded" << std::endl;
                break;
        }
    }
    std::cout << std::endl;
    std:: cout << "Entering vector:" <<std::endl;
    i = 0;
    Show_system(matrix_A, vector_b, size);
    std:: cout << "Your position: string: " << i <<std::endl;
    while(true){
        std:: cout << "S - show system, U - up, D - down, E - Enter the element, Q - the end entering" <<std::endl;
        std:: cout << "Your choice: " <<std::endl;
        std:: cin >> temp;
        switch (temp)
        {
            case 'Q': case 'q':
                return matrix_A;
                break;
            case 'E': case 'e':
                std::cin >> proverka;
                if (!proverka){
                    std::cout << "Value error" << std::endl;
                    std::cin.clear();
                    fflush(stdin);
                }
                vector_b[i] = proverka;
                std::cout << std::endl;
                std:: cout << "Your position: string: " << i << " stolbec: " << j <<std::endl;
                break;
            case 'U': case 'u':
                i--;
                if(i < 0){
                    std:: cout << "What are you doing? string must be >= 0 but <= size - 1" <<std::endl;
                    i = 0;
                }
                std::cout << std::endl;
                std:: cout << "Your position: string: " << i <<std::endl;
                break;
            case 'D': case 'd':
                i++;
                if(i > size - 1){
                    std:: cout << "What are you doing? string must be >= 0 but <= size - 1" <<std::endl;
                    i = size - 1;
                }
                std::cout << std::endl;
                std:: cout << "Your position: string: " << i <<std::endl;
                break;
            case 'S': case 's':
                Show_system(matrix_A, vector_b, size);
                std::cout << std::endl;
                std:: cout << "Your position: string: " << i <<std::endl;
                break;
            default:
                std::cout << "Choice undifinded" << std::endl;
                break;
        }
    }

    return matrix_A;
}

void Vibor(double** matrix_A, double* vector_b, int size){
    char v = '0';
    std:: cout << "Who enter the matrix? I - yourself, C - computer" <<std::endl;
    std:: cin >> v;
    switch (v)
        {
        case 'I': case 'i':
            matrix_A = Vvod(matrix_A, vector_b, size);
            break;
        case 'C': case 'c':
            edinenie(matrix_A, size);
            f0123_d(vector_b, size);
            break;
        default:
            std::cout << "Choice undifinded" << std::endl;
            break;
        }
}

void Redact(double** matrix_A, double* vector_b, int size){
    char v = '0';
    bool flag = true;
    while(flag){
        Show_system(matrix_A, vector_b, size);
        std:: cout << "Do you want to redact system? Y - Yes, N - No" <<std::endl;
        std:: cin >> v;
        switch (v)
            {
            case 'Y': case 'y':
                matrix_A = Vvod(matrix_A, vector_b, size);
                break;
            case 'N': case 'n':
                flag = false;
                break;
            default:
                std::cout << "Choice undifinded" << std::endl;
                break;
            }
    }
}