
#include <ctype.h>
#include <stdio.h>
#include <string.h>
 
int main()
{
    char str[] = "VibhuDFGhji$";
    char x[100];
    for (int i = 0; i < strlen(str); i++) {
        char ch = str[i];
        if (isupper(ch))
            x[i] = tolower(ch);
        else
            x[i] = toupper(ch);
    }
    x[strlen(str)] = '\0';
    printf("%s\n", x);
    return 0;
}