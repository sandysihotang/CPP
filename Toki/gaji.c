#include <stdio.h>
#include <stdlib.h>
int main()
{

int jam, gaji;
char golongan;
char nama[100];

    printf("Masukkan Nama Karyawan = ");
    scanf("%s", nama);
    printf("Masukkan jumlah jam kerja = ");
    scanf("%d", &jam);
    printf("Masukkan Golongan karyawan : ");
    scanf("%*c%c", &golongan);

    switch(golongan)
    {
        case 'A' :
        {
            gaji = 5000;
            break;
        }
        case 'B' :
        {
            gaji = 7000;
            break;
        }
        case 'C' :
        {
            gaji = 8000;
            break;
        }
        case 'D' :
        {
            gaji = 10000;
            break;
        }
    }
    int gaji_total;
    if(jam>48){
        gaji_total = (gaji * 48) + ((jam-48)*4000);
    }else {
        gaji_total = gaji * jam;
    }
    printf("\n \n");
    printf("Nama Mahasiswa : %s\n", nama);
    printf("Gaji karyawan : %i\n", gaji_total);

    return 0;

}
