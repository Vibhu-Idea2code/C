#include <stdio.h>    

int main() {
    char string[100];
    int length, i, j, flag = 1;

    printf("Enter a string: ");
    scanf("%s", string);

    length = strlen(string);

    for (i = 0, j = length - 1; i < j; i++, j--) {
        if (string[i] != string[j]) {
            flag = 0;
            break;
        }
    }

    if (flag) {
        printf("\"%s\" is a palindrome.\n", string);
    } else {
        printf("\"%s\" is not a palindrome.\n", string);
    }

    return 0;
}