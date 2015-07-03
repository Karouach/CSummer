/*
 ============================================================================
 Name        : arrays.c
 Author      :
 Description : Using loops for searching and sorting, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define TRUE 1;
#define FALSE 0;

void searchHighMPG(float value, float dataSet[], int len);
void printArray(char dataName[], float dataSet[], int dataLength);
void bubbleSort(float dataSet[], int length);
int main(void) {

    float mpgData[10] = {18.5,16.2,32.0,40.0,24.5,31.2,16.8,22.1,12.5,35.5};
    searchHighMPG(30.0,mpgData, 10);
    bubbleSort(mpgData,10);

    return EXIT_SUCCESS;
}
void searchHighMPG(float value, float dataSet[], int len){
    printf("Array received \n");
    printArray("mpgdata", dataSet, len);
    printf("Cars at over 32\n\n");
    int i;
    for (i = 0; i < len; i++){
        if (dataSet[i] > value)
            printf("Car %d has MPG: %f\n", i, dataSet);
    }
}

void printArray(char dataName[], float dataSet[], int dataLength){
    int i;
    for( i=0; i<dataLength; i++){
        printf("        %s[%d]: %.1f\n",dataName, i,dataSet[i]);
    }
}

void bubbleSort(float dataSet[], int length){
    printf("Array received by bubbleSort\n");
    printArray("mpgData", dataSet,length);
    int swapped;
    float temp;
    int loopCounter = 0;
    do{
        printf("==>DO-WHILE-LOOP CYCLE -------: %d\n", loopCounter++);
        swapped = FALSE;
        int i;
        for( i=1; i<length; i++){
            if(dataSet[i-1] > dataSet[i]){
                temp = dataSet[i-1];
                dataSet[i-1] = dataSet[i];
                dataSet[i] = temp;
                swapped = TRUE;
            }
            printf("-----> FOR-LOOP CYCLE ------: %d\n", i);
            printArray("mpgData", dataSet,length);
        }

    }while(swapped);

    printArray("mpgData", dataSet,length);
}
