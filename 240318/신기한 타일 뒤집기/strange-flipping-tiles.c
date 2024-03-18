#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[200001] = {0}, idx = 100000;
    for(int i = 0; i < n; i++){
        int x;
        char direc;
        scanf("%d %c", &x, &direc);
        if(direc == 'R'){
            while(x--){
                arr[idx] = 1;
                if(x) idx ++;
            }
        }
        else{
            while(x--){
                arr[idx] = 2;
                if(x) idx --;
            }
        }
    }
    int w = 0, b = 0;
    for(int i = 0; i < 200001; i++){
        if(arr[i] == 1) b++;
        else if(arr[i] == 2) w++;
    }
    printf("%d %d", w, b);
    return 0;
}