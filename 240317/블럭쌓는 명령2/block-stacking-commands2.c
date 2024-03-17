#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, k;
    scanf("%d%d", &n, &k);
    int *num = (int*)malloc(4 * n);
    for(int i = 0; i < k; i++){
        int a, b;
        scanf("%d%d", &a, &b);
        for(int j = a; j <= b; j++){
            num[j] ++;
        }
    }
    int max = 0;
    for(int i = 0; i < n; i++){
        if(max < num[i]) max = num[i];
    }

    printf("%d", max);

    return 0;
}