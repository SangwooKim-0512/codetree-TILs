#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    int q;
    scanf("%s%d", str, &q);
    int len = strlen(str);
    int n;
    for(int i = 0; i < q; i ++){
        scanf("%d",&n);
        char temp;

        if(n == 1){
            temp = str[0];
            for(int j = 0; j < len-1; j++)
                str[j] = str[j+1];
            str[len-1] = temp;
        }

        else if(n == 2){
            temp = str[len-1];
            for(int j = len-1; j > 0; j--)
                str[j] = str[j-1];
            str[0] = temp;
        }
        
        else{
            for(int j = 0; j < len/2; j++){
                temp = str[j];
                str[j] = str[len-1-j];
                str[len-1-j] = temp;
            }
        }
        printf("%s\n", str);
    }

    return 0;
}