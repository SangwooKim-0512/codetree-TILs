#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d", &n);
    int arr[201][201] = {0};
    for(int i = 0; i < n; i ++){
        int x1, y1;
        scanf("%d%d", &x1, &y1);
        x1 += 100; y1 += 100;
        for(int x = x1; x < x1+8; x++)
            for(int y = y1; y < y1+8; y++)
                arr[x][y] = 1;
    }
    int cnt = 0;
    for(int x = 0; x < 201; x ++)
        for(int y = 0; y < 201; y ++)
            if(arr[x][y] == 1) cnt ++;

    printf("%d", cnt);
    return 0;
}