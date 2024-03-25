#include <stdio.h>

int main() {
    int n, num[1001];
    scanf("%d%d", &n, &num[0]);
    int cnt = 1, max = 1;
    int arr[1001];

    for(int i = 1; i < n; i++){
        scanf("%d", &num[i]);
        if(num[i] == num[i-1]) cnt ++;
        else {
            if(max < cnt) max = cnt;
            cnt = 1;
        }
    }
    printf("%d", max);
    return 0;
}