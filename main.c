#include <stdio.h>
#include <stdlib.h>

int main() {

    char harf[100];
    int i = 0, x;

    printf("Bir kelime giriniz: ");
    gets(harf);

    int fark = 'a' - 'A';

    while (harf[i] != '\0') {

        if (harf[i] >= 'A' && harf[i] <= 'Z') {
            harf[i] += fark;
        }
        printf("%c", harf[i]);
        i++;
    }

    return 0;
}
