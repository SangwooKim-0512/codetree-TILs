#include <stdio.h>

int main() {
    int a, b, c, d;
    int time = 0;
    scanf("%d%d%d%d", &a, &b, &c, &d);
    while(1){
        if(a == c && b == d)
            break;
        time ++;
        b++;
        if(b == 60){
            a++;
            b = 0;
        }
    }
    printf("%d", time);
    return 0;
}