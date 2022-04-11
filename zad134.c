// Program treba izracunat produkt elemenata na sekundarnoj dijagonali.

#include <stdio.h>

int main()
{
    int A[10][10],i,j,m,n;
    int prod = 1;

    printf("Unesi broj redaka: ");
        scanf("%d", &m);
        printf("\nUnesi broj stupaca: ");
        scanf("%d",&n);
        printf("\nUnesi vrijednosti matrice: \n");
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                 printf("\nUnesi element A[%d][%d] : ",i,j);
                 scanf("%d", &A[i][j]);
                }
        }

    printf("\nDana matrica je: \n\n");

        for (i = 0; i < m; ++i)
        {
            for (j = 0; j < n; ++j)
            {
                printf("\t%d", A[i][j]);
            }
            printf("\n\n");
        }

    /*
     *   Racuna produkt.
     */
        for (i = 0; i < m; ++i)
        {
             prod = prod * A[i][m - i - 1];
        }


    printf("\nProdukt elemenata na sekundarnoj dijagonali = %d", prod);

    return 0;
}
