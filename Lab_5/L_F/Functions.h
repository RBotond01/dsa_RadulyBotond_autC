//
// Created by Boti on 2021. 03. 17..
//

#ifndef L_F_FUNCTIONS_H
#define L_F_FUNCTIONS_H
typedef struct  {
    int rows; // sorok száma
    int cols; // oszlopok száma
    int** data; //
}Matrix;
//helyfoglalas
Matrix* createMatrix(int rows, int cols);

//tömb tartalmának beolvasása állományból
void readMatrix(const char *fileName, Matrix **array);

//Sarkany
void find_element(Matrix *array, int element);
//Raduly
void modulus_element(Matrix *array);
//Pal
int number_sum(Matrix *array);
//Nagy
double scattering_matrix(Matrix *array);
double avg(Matrix **array);
#endif //L_F_FUNCTIONS_H
