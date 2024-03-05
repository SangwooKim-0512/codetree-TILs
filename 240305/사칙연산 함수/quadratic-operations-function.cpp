#include <iostream>
using namespace std;

void Calculation(int a, char o, int b){
    if(o == '+') cout << a << " " << o << " " << b << " = " <<  a+b;
    else if(o == '-') cout << a << " " << o << " " << b << " = " <<  a-b;
    else if(o == '/') cout << a << " " << o << " " << b << " = " <<  a/b;
    else if(o == '*') cout << a << " " << o << " " << b << " = " <<  a*b;
    else cout << "False";
}


int main() {
    int a, b;
    char o;
    cin >> a >> o >> b;

    Calculation(a, o ,b);
    return 0;
}