#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, Data[10],jumlah=0, cari;
    printf("Masukkan input data? ");
    scanf("%d", &n);
    printf("Masukkan &d interger (s) \n", n);
    for(i=0;i<n;i++)
        scanf("%d", &Data[i]);

    printf("Cari angka berapa? ");
    scanf("%d", &cari);
    for(i=0;i<n;i++)
    {
        if(Data[i]==cari)
        {
            printf("Angka %d ADA, dan tersimpan di indeks %d \n", cari, i+1);
            jumlah++;
        }
    }
        if(jumlah==0)
            printf("Angka %d TIDAK ADA!", cari);
        else
            printf("Angka %d ADA sebanyak %d kali dalam array", cari, jumlah);
    return 0;
}
