#include <stdio.h>
#include <stdlib.h>

int iterativeBinarySearch(int array[], int start_index, int end_index, int element)
{
    while (start_index <= end_index)
    {
        int middle = start_index + (end_index-start_index)/2;
        if (array[middle]==element)
            return middle;
        if (array[middle]<element)
            start_index = middle+1;
        else
            end_index=middle-1;
    }
    return -1;
}
int main (void)
{
    int array[]={2,4,6,8,10,12,14};
    int n = 6;
    int element=8;
    int found_index=iterativeBinarySearch(array,0,n-1,element);
    if(found_index==-1)
    {
        printf("Angka Tersebut TIDAK ADA ");
    }
    else
    {
        printf("Angka ADA pada index : %d",found_index);
    }
    return 0;
}
