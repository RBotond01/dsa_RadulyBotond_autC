//
// Created by Boti on 2021. 03. 10..
//

#ifndef MATRIX_PROJECT_MATRIX_FUNCTION_H
#define MATRIX_PROJECT_MATRIX_FUNCTION_H
typedef struct  {
    int rows; // sorok száma
    int cols; // oszlopok száma
    int** data; //
}Matrix;
//helyfoglalas
Matrix* createMatrix(int rows, int cols);

//tömb tartalmának beolvasása állományból
void readMatrix(const char *fileName, Matrix **array);


//tömb tartalmának kiiratása a képernyőre
void printMatrix(Matrix* array);
#endif //MATRIX_PROJECT_MATRIX_FUNCTION_H
