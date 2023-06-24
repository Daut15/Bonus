#include <stdio.h>
#include <string.h>
void RecursivePermute(char str[], int k) {
    if(str[k] == '\0') {
        printf("%s\n", str);
        return;
    }
    for(int i = k; str[i] != '\0'; i++){
        char temp = str[i];
        str[i] = str[k];
        str[k] = temp;
        RecursivePermute(str, k + 1);
        temp = str[i];
        str[i] = str[k];
        str[k] = temp;
    }
}