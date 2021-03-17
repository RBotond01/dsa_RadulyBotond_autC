//
// Created by Boti on 2021. 03. 17..
//

#include "Functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>


Matrix *createMatrix(int rows, int cols) {
    Matrix *matrix = (Matrix *) malloc(sizeof(Matrix));

    if (!matrix) {
        printf("Hiba a helyfoglalas kozben!");
        return NULL;
    }

    matrix->rows = rows;
    matrix->cols = cols;
    matrix->data = (int **) malloc(rows * sizeof(int *));
    int i;
    for ( i = 0; i < matrix->rows; i++) {
        matrix->data[i] = (int *) malloc(cols * sizeof(int));
    }

    if (!matrix->data) {
        printf("Hiba a matrix lefoglalasa kozben!");
        return NULL;
    }

    return matrix;
}

void readMatrix(const char *fileName, Matrix **array) {
    FILE *fin = fopen(fileName, "rt");

    if (!fin) {
        printf("Hiba az allomany megniytasakor!");
        return;
    }

    int rows, cols;

    fscanf(fin, "%i", &rows);
    fscanf(fin, "%i", &cols);
    Matrix *matrix;
    *array = createMatrix(rows, cols);
    int i,j;
    for (i = 0; i < (*array)->rows; i++) {
        for (j = 0; j<(*array)->cols; j++) {
            fscanf(fin, "%i", &(*array)->data[i][j]);
        }
    }
}
void find_element(Matrix *array, int element) {
    int i,j;
    for( i=0;i<array->rows;++i){
        for ( j = 0; j < array->cols; ++j) {
            if(array->data[i][j]==element){
                printf("(%i),(%i) ",i,j);
            }
        }
    }
}
void modulus_element(Matrix *array)
{
    int i;
    int j;
    for(i=0; i<array->rows; i++)
    {
        for(j=0; j<array->cols; j++)
        {
            if (array->data[i][j]<0)
            {
                array->data[i][j] *= -1;
            }
            printf("%i ",array->data[i][j]);
        }
        printf("\n");
    }
}
int sum_number(Matrix* array){
    int sum=0,i,j;
    for ( i=0;i<array->rows;i++) {
        for ( j=0;j<array->cols;j++)
            if((array->data[i][j]<100 && array->data[i][j]>9) || (array->data[i][j]>-100 && array->data[i][j]<-9))
                ++sum;
    }
    return sum;
}
double scattering(Matrix **array)
{
    double avg = avg(array);
    double scatterin = 0;
    int i,j;
    for ( i = 0; i < (*array)->rows; i++){
        for( j = 0; j < (*array)->rows; j++){
            scattering = scattering + pow((*array)->data[i][j]-avg,2);
        }
    }
    scattering = sqrt(scattering);
    return scattering;
}
double avg(Matrix **array){
    double avg = 0;
    int sum = 0, nrofelements = 0,i,j;
    nrofelements = (*array)->rows * (*array)->cols;
    for ( i = 0; i < (*array)->rows; i++){
        for( j = 0; j < (*array)->rows; j++){
            sum = sum + (*array)->data[i][j];
        }
    }
    avg = sum/(*array)->rows * (*array)->cols;
    return avg;
}

}