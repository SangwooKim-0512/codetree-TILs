#include <stdio.h>

int days[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main() {
    int m1, d1, m2, d2;
    int nday = 1;
    scanf("%d%d%d%d", &m1, &d1, &m2, &d2);
    while(1){
        if(m1 == m2 && d1 == d2)
            break;
        d1 ++;
        nday ++;

        if(d1 == days[m1]){
            m1 ++;
            d1 = 0;
        }
    }
    printf("%d", nday);
    return 0;
}