#include <stdio.h>



int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d", &n);
    int checked[101] = {0};
    for(int i = 0; i < n; i++){
        int x1, x2;
        scanf("%d%d", &x1, &x2);
        for(int j = x1; j <= x2; j ++)
            checked[j] ++;
    }
    int max = 0;
    for(int i = 0; i < 101; i++){
        if(max < checked[i]) max = checked[i];
    }

    printf("%d", max);

    return 0;
}