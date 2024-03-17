#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int checked[201] = {0};

    for(int i = 0; i < n; i ++){
        int x1, x2;
        scanf("%d%d", &x1, &x2);
        x1 += 100; x2 += 100;
        for(int j = x1; j < x2; j++)
            checked[j] ++;
    }
    int max = 0;
    for(int i = 0; i < 201; i++)
        if(checked[i] > max) max = checked[i];

    printf("%d", max);
    return 0;
}