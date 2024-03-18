#include <stdio.h>
#include <stdbool.h>
//가장 작은 x1y1 인덱스와 가장 큰 x2y2인덱스를 구한다.

int main() {
    int arr[2001][2001] = {0};
    for(int i = 0; i < 2; i++){
        int x1, x2, y1, y2;
        scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
        x1 += 1000; y1 += 1000; x2 += 1000; y2 += 1000;
        for(int x = x1; x < x2; x++){
            for(int y = y1; y < y2; y++){
                if(i == 0){
                    arr[x][y] ++;
                }
                else if(i == 1){
                    arr[x][y] --;
                   // printf("x : %d / y : %d / arr[x][y] : %d\n", x, y, arr[x][y]);
                }
            }
        }
    }
    int max_x = 0, max_y = 0, min_x = 2001, min_y = 2001;

    bool exist = false;
    for(int x = 0; x < 2001; x ++){
        for(int y = 0; y < 2001; y++){
            if(arr[x][y] == 1){
                exist = true;
                if(x > max_x) max_x = x;
                if(y > max_y) max_y = y;
                if(x < min_x) min_x = x;
                if(y < min_y) min_y = y;
            }
        }
    }
    if(exist){
        int area = (max_x - min_x + 1) * (max_y - min_y + 1);
        printf("%d", area);
    }
    else printf("%d", 0);
    return 0;
}