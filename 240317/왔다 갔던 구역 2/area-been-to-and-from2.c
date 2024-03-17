#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[1001] = {0};
    int idx = 500;
    for(int i = 0; i < n; i++){
        int x;
        char direc;
        scanf("%d %c", &x, &direc);
        if(direc == 'R'){
            for(int j = 0; j < x; j++){
                arr[idx] ++;
                idx ++;
            }
        }
        if(direc == 'L'){
            for(int j = 0; j < x; j++){
                idx--;
                arr[idx] ++;
            }
        }
    }
    int sum = 0;
    for(int i = 0; i < 1001; i++){
        if(arr[i] >= 2) {
            sum ++;
        }
    }
    printf("%d", sum);
    return 0;
}