#include <stdio.h>

int main() {
    int n, i,br, MAX;

    printf("Wywedi broi chisla:  ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("The number of elements must be greater than zero.\n");
        return 1;
    }
    printf("Wywedi %d chisla:\n", n);
    scanf("%d", &MAX);
    for (i = 1; i < n; i++) {
        scanf("%d", &br);
        if (br>MAX) {
            MAX = br;
        }
    }
<<<<<<< HEAD
    printf("pepi e gay: %d\n", MAX);
=======
    printf("Nai golqmoto chislo e: %d\n", MAX);
    printf("Nqmash 5090Ti");
>>>>>>> urok
    return 0;
}
