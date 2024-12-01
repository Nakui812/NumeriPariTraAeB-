#include <stdio.h>

int NumeriPari(int a, int b) {
    int swap = 0;
    if (a > b) {
        swap = b;
        b = a;
        a = swap;
    }
    int risultato = 0;
    for (int i = a; i <= b; i++) {
        if (i % 2 == 0) {
            risultato += i;
        }
    }
    return risultato;
}

int main() {
    int a;
    int b;
    printf("Inserisci un numero intero: ");
    scanf("%d", &a);
    printf("Inserisci un numero intero: ");
    scanf("%d", &b);
    printf("la somma dei numeri pari compresi tra  questi 2 numeri è %d", NumeriPari(a, b));
}
