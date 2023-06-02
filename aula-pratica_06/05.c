#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 100

void ordenarString(char string[]) {
    int i, j, n;
    char temp;

    n = strlen(string);

    for (i = 0; i < n-1; i++) {
        for (j = i + 1; j < n; j++) {
            if (string[i] > string[j]) {
                temp = string[i];
                string[i] = string[j];
                string[j] = temp;
            }
        }
    }
}

int main() {
    int i;
    char strings[4][MAX_LENGTH];

    printf("Digite 4 strings:\n");

    for (i = 0; i < 4; i++) {
        fgets(strings[i], MAX_LENGTH, stdin);

        // Remover o caractere de nova linha '\n' da string
        if (strlen(strings[i]) > 0 && strings[i][strlen(strings[i]) - 1] == '\n') {
            strings[i][strlen(strings[i]) - 1] = '\0';
        }

        ordenarString(strings[i]);

        printf("String %d em ordem alfabética: %s\n", i+1, strings[i]);
    }

    return 0;
}