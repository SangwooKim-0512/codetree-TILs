#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[201][201] = {0};
    for(int i = 0; i < n; i++){
        int x1, x2, y1, y2;
        scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
        x1 += 100; x2 += 100; y1 += 100; y2 += 100;
        for(int x = x1; x < x2; x++){
            for(int y = y1; y < y2; y++){
                arr[x][y] = 1;
            }
        }
    }
    int cnt = 0;
    for(int i = 0; i < 201; i++){
        for(int j = 0; j < 201; j++){
            if(arr[i][j] == 1) cnt ++;
        }
    }
    printf("%d", cnt);
    return 0;
}