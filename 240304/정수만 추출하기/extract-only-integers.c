#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char str1[9], str2[9], str1_1[9], str2_1[9];
    scanf("%s %s", str1, str2);
    int sum = 0;
    for(int i = 0; i < strlen(str1); i++){
        if(str1[i] >= '0' && str1[i] <= '9') str1_1[i] = str1[i];
        else {
            str1_1[i] = '\0';
            break;
        }
    }

    sum += atoi(str1_1);


    for(int i = 0; i < strlen(str2); i++){
        if(str2[i] >= '0' && str2[i] <= '9') str2_1[i] = str2[i];
        else {
            str1_1[i] = '\0';
            break;
        }
    }
    sum += atoi(str2_1);
    printf("%d", sum);

    return 0;
}