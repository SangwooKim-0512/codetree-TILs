#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    char A, B;
    scanf("%c %c", &A, &B);
    printf("%d ", A+B);
    if(A > B) printf("%d", A-B);
    else printf("%d", B-A);
    return 0;
}