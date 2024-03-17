#include <stdio.h>
#include <string.h>

int days[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
char dotw[7][4] = {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};


int Numdays(int m, int d){
    int total_day = 0;
    for(int i = 1; i < m; i++){
        total_day += days[i];
    }
    total_day += d;
    return total_day;
}

int main() {
    int m1, d1, m2, d2;
    scanf("%d%d%d%d", &m1, &d1, &m2, &d2);
    /*while(1){
        if(m1 == m2 && d1 == d2)
            break;
        d1 ++;
        nday ++;
        if(d1 == days[m1]){
            m1++;
            d1 = 1;
        }
    }*/

    int nday = Numdays(m2, d2) - Numdays(m1, d1);
    if(nday < 0) nday += 7;
    printf("%s", dotw[nday % 7]);
    return 0;
}