#include <stdio.h>
int main() {
    int anno;
    printf("Inserisci un anno: ");
    scanf("%d", &anno);
    if ((anno %4 == 0 && anno %100 != 0) || (anno %400 == 0)) {
        printf("L'anno %d e' bisestile.\n", anno);
    } else {
        printf("L'anno %d non e' bisestile.\n", anno);
    }
    return 0;
}
