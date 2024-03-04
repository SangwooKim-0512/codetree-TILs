#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {
    // 여기에 코드를 작성해주세요.
    char A[101], B[101];

    scanf("%s%s", A, B); // A, B 입력  


    
    while(true){
        int idx = -1;
        int len_A = strlen(A), len_B = strlen(B);

        for(int i = 0; i <= len_A - len_B; i++){
            bool same = true;
            for(int j = 0; j < len_B; j++){
                if(A[i+j] != B[j]){
                    same = false;
                    break;
                }
            }
            if(same == true){ // A 부분 문자열 == B 이면 idx에 i값을 저장
                idx = i;
                break;
            }
        }
        if(idx == -1) break; // 없으면 그냥 그대로 끝내고 A출력

        for(int i = idx + len_B; i < len_A; i++)
            A[i - len_B] = A[i];
        A[len_A - len_B] = '\0';

    }

    printf("%s", A);


    return 0;
}