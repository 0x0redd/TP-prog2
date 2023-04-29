#include <stdio.h> #define M 4
#define N 10
void main()
{
    short A[M][N] ;
    short *pt ;
    int i, j ;
    /* lecture d'une matrice */
    pt = &A[0][0] ;
    /* ou bien pt = A[0] ; */
    for (i = 0 ;i<M ; i++){
    printf("\t ligne n° %d\n", i+1) ;
    for (j = 0 ; j<N ; j++)
    scanf("%i", pt + i * N + j ) ;
    }

    for (i = 0 ; i<M ; i++){
        for (j = 0 ; j<N ; j++)
            printf("%d", *( pt + i * N + j ) ) ;
            printf("\n") ;
    }
}