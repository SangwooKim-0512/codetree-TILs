#include <stdio.h>
#include <string.h>

int days[13] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
char dotw[7][4] = {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};

int Numdays(int m, int d){
    int total_days = 0;
    for(int i = 1; i < m; i++){
        total_days += days[i];
    }
    total_days += d;
    return total_days;
}

int main() {
    int m1, d1, m2, d2;
    scanf("%d%d%d%d", &m1, &d1, &m2, &d2);
    int ndays = Numdays(m2, d2) - Numdays(m1, d1);
    char day_of_week[4];
    scanf("%s", day_of_week);

    int idx = 0;
    for(int i = 0; i < 7; i++){
        //printf("%s %s %d\n", dotw[i], day_of_week, idx);
        if(strcmp(dotw[i], day_of_week) == 0)
            idx = i;
    }
    //printf("%d %d\n", ndays, idx);
    if(ndays < idx) printf("0");
    else printf("%d", ((ndays - idx) / 7) + 1);

    return 0;
}