#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[2001][2001] = {0};
    int x1[3], y1[3], x2[3], y2[3];
    for(int i = 0; i < 3; i++){
        scanf("%d%d%d%d", &x1[i], &y1[i], &x2[i], &y2[i]);
        x1[i] += 1000; x2[i] += 1000; y1[i] += 1000; y2[i] += 1000;
    }

    for(int i = 0; i < 2; i++)
        for(int x = x1[i]; x < x2[i]; x++)
            for(int y = y1[i]; y < y2[i]; y++)
                arr[x][y] ++;

    for(int x = x1[2]; x < x2[2]; x++)
        for(int y = y1[2]; y < y2[2]; y++)
            arr[x][y] --;

    int cnt = 0;
    for(int x = 0; x < 2001; x ++)
        for(int y = 0; y < 2001; y++)
            if(arr[x][y] == 1) cnt ++;
    
    printf("%d", cnt);
    return 0;
}