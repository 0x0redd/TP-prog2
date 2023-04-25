#include <stdio.h>
#include <stdlib.h>

int nombreFacons(int S[], int N, int n) {
    if (N == 0) {
        return 1;
    }
    
    if (N < 0) {
        return 0;
    }
   
    if (N >= 1 && n <= 0) {
        return 0;
    }
    return nombreFacons(S, N - S[n - 1], n) + nombreFacons(S, N, n - 1);
}

int main() {
    int pieces[] = {1,2,5,10,20,50,100,200};
    int N ;
    printf("donner N dirame a changer \n ");
    scanf("%d",&N);
    printf("nombre de combinaison de change : ");
    printf("%d", nombreFacons(pieces, N, sizeof(pieces) / sizeof(pieces[0])));
    return 0;
}