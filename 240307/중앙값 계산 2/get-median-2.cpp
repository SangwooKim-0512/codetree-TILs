#include <iostream>
using namespace std;
void PrintMid(int arr[]){

}

int main() {
    int n;
    cin >> n;
    int arr[n];

    for(int i = 0; i < n; i++){
        cin >> arr[i];
        if((i+1) % 2 == 1){
            cout << arr[i/2] << " ";
            // cout << i+1 << "일때 중앙값은 " << arr[i/2] << "입니다.\n";
        }
    }
    return 0;
}