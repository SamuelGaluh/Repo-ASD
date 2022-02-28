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
int main()
{
    int array[100], n, i, j;
    printf("Masukkan banyak elemen : ");
    scanf("%d", &n);

    printf("Masukkan nilai : \n");

    for(i = 0; i < n; i++){
        scanf("%d", &array[i]);
    }
    Bubble_Sort (array, n);

    printf("Hasil pengurutan : \n");
    for(i = 0; i < n; i++){
        printf("%d ", array [i]);
    }
    printf("\n");
}
