#include <stdio.h>

int main() {
    int d1, h1, m1, d2, h2, m2;
    int min = 0;
    scanf("%d%d%d", &d2, &h2, &m2);
    /*if(d2 > d1 && h2 > h1 && m2 > m1)
        printf("-1");*/
    d1 = 11; h1 = 11; m1 = 11;
   /* while(1){
        if(d1 > d2 || h1 > h2 && m1 > m2){
            min = -1;
            break;
        }
        if(d1 == d2 && h1 == h2 && m1 == m2)
            break;
        m1 ++;
        min ++;
        if(m1 == 60){
            h1 ++;
            m1 = 0;
        }
        if(h1 == 24){
            d1 ++;
            h1 = 0;
        }
    }
    printf("%d", min);*/
    int diff = (d2 * 24 * 60 + h2 * 60 + m2) - (d1 * 24 * 60 + h1 * 60 + m1);
    if(diff < 0) printf("-1");
    else printf("%d", diff);
    return 0;
}