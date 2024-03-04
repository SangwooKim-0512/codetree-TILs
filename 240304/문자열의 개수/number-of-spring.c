#include <stdio.h>
#include <string.h>

int main() {
    char str1[201], str2[200][201];
    int cnt = 0;
    while(1){
        scanf("%s", str1);
        if(str1[0] == '0') break;
        for(int i = 0; i< strlen(str1); i++){
            str2[cnt][i] = str1[i];
        }
        cnt ++;
    }
    printf("%d\n", cnt);
    for(int i = 0; i < cnt; i++){
        if(i % 2 == 0){
            printf("%s\n", str2[i]);
        }

    }

    return 0;
}