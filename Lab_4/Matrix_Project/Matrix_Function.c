//
// Created by Boti on 2021. 03. 10..
//
#include <stdlib.h>
#include <stdio.h>
#include "Matrix_Function.h"

Matrix* createMatrix(int rows, int cols) {
    Matrix* matrix = (Matrix*)malloc(sizeof(Matrix));

    if(!matrix) {
        printf("Hiba a helyfoglalas kozben!");
        return NULL;
    }

    matrix->rows = rows;
    matrix->cols = cols;
    matrix->data = (int**)malloc(rows * sizeof(int*));

    for(int i = 0; i < matrix->rows; i++) {
        matrix->data[i] = (int*)malloc(cols * sizeof(int));
    }

    if(!matrix->data) {
        printf("Hiba a matrix lefoglalasa kozben!");
        return NULL;
    }

    return matrix;
}
void readMatrix(const char *fileName, Matrix **array) {
    FILE* fin = fopen(fileName, "rt");

    if(!fin) {
        printf("Hiba az allomany megniytasakor!");
        return;
    }

    int rows, cols;

    fscanf(fin, "%i", &rows);
    fscanf(fin, "%i", &cols);

    *array = createMatrix(rows, cols);

    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            fscanf(fin, "%i", &(*array)->data[i][j]);
        }
    }
}
void printMatrix(Matrix* array) {
    printf("A matrix: \n");
    for(int i = 0; i < array->rows; i++) {
        for(int j = 0; j < array->cols; j++) {
            printf("%i ", array->data[i][j]);
        }
        printf("\n");
    }
}