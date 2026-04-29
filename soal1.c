/** EL2008 Praktikum Pemecahan Masalah dengan Pemrograman 2025/2026
 *   Modul               : 3
 *   Hari dan Tanggal    : Rabu, 29 April 2026
 *   Nama (NIM)          : Julianysyah Putra Jalinda (13224026)
 *   Nama File           : soal1modul3.c
 *   Deskripsi           : Soal 1 – Pemulihan Sensor Fragmen
 * 
 */
 #include <stdio.h>
 #include <string.h>

 struct items{
    char nama[100];
    char kategori[100];
    int tahun;
    int nilai;
 };

 int main(){
    int d;
    scanf("%d", &d);
    struct items array[d];
    
    for (int i = 0; i < d; i++){
        scanf("%s", array[i].nama);
        scanf("%s", array[i].kategori);
        scanf("%d", &array[i].tahun);
        scanf("%d", &array[i].nilai);
    };

    struct items temp;
    for(int a = 0; a < d-1; a++){
        for(int j = 0; j < d-1-a; j++){
           if(strcmp(array[j].kategori, array[j+1].kategori) > 0){
             temp = array[j];
             array[j] = array[j+1];
             array[j+1] = temp;
            }
            else if(strcmp(array[j].kategori, array[j+1].kategori) == 0){
                struct items temp2;
                if(array[j].tahun > array[j+1].tahun){
                    temp2 = array[j];
                    array[j] = array[j+1];
                    array[j+1] = temp2;
                }
                else if(array[j].tahun == array[j+1].tahun){
                    struct items temp3;
                    if(array[j].nilai < array[j+1].nilai){
                        temp3 = array[j];
                        array[j] = array[j+1];
                        array[j+1] = temp3;
                    }
                    else if(array[j].nilai == array[j+1].nilai){
                        struct items temp4;
                        if(strcmp(array[j].nama, array[j+1].nama) > 0){
                            temp4 = array[j];
                            array[j] = array[j+1];
                            array[j+1] = temp4;
                        }    
                    }
                }
            }
        }
    }

    for(int z = 0; z < d; z++){
        printf("%s %s %d %d\n", array[z].nama, array[z].kategori, array[z].tahun, array[z].nilai);
    }
    return 0;

 }
