/* File         : tabel2.c */
/* Penulis      : Fauzyah Hadirahma, email faubelajar@gmail.com */
/* Deskripsi    : mendefinisikan array dan mengisi nilainya dari input yang dibaca */

#include <stdio.h>
int main () 
{
    /* KAMUS */
    int Tab [5];
    int i;
    
    /* baca isi Tab */
    for (i=0; i<5; i++)
        {
            scanf ("%d", &Tab[i]);
        }
    
    /* menuliskan isi Tab berderet ke kanan */
    for (i=0; i<5; i++)
        {
            printf ("Tab[%d] = %d; ", i, Tab [i]);
        }
    
    printf ("\n");
    
    return 0;
}
