#include <iostream>

using namespace std;

bool Leap_Year(int y){
    if(y % 100 == 0 && y % 400 != 0) return false;
    if(y % 4 == 0) return true;
    return false;
}

int main() {
    int y;
    cin >> y;
    if(Leap_Year(y)) cout << "true";
    else cout << "false";
    return 0;
}