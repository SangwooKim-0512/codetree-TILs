#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arrb[200001] = {0};
    int arrw[200001] = {0};
    int arr[200001] = {0};
    int idx = 100000;
    for(int i = 0; i < n; i++){
        int x;
        char direc;
        scanf("%d %c", &x, &direc);
        if(direc == 'R'){
            while(x--){
                arrb[idx] ++;
                arr[idx] = 1;
                if(x) idx ++;
            }
        }
        else{
            while(x--){
                arrw[idx] ++;
                arr[idx] = 2;
                if(x) idx --;
            }
        }
    }
    int b = 0, w = 0, g = 0;
    for(int i = 0; i < 200001; i++){
        if(arrb[i] >= 2 && arrw[i] >= 2) g++;
        else if(arr[i] == 1) b++;
        else if(arr[i] == 2) w++;
    }
    printf("%d %d %d", w, b, g);
    return 0;
}