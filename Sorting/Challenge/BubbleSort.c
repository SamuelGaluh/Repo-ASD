#include <stdio.h>
#include <stdlib.h>
//Bubble Sort
void Bubble_Sort (int arr[], int n)
{
    int i, j, angka;
    for (i = 0; i < n; i++){
        for (j = 0; j < n-i-1; j++){
            if (arr[j] > arr[j+1]){
                angka = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = angka;
            }
        }
    }
}

void cetakArray(int array[], int size){
    for(int i=0; i<size; ++i){
        printf("%d ",array[i]);
    }
    printf("\n");
}

int main(){
    int data[]= {23, 65, 30, 8, 33, 24, 76, 7};
    int size = sizeof(data)/sizeof(data[0]);
    Bubble_Sort(data, size);
    printf("Hasil Shorting :\n");
    cetakArray(data,size);
}
