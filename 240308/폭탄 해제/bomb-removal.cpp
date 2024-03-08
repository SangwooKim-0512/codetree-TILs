#include <iostream>
using namespace std;

class Boom{
    public:
        string code;
        char color;
        int sec;
        Boom(string code, char color, int sec){
            this -> code = code;
            this -> color = color;
            this -> sec = sec;
        }

};

int main() {
    // 여기에 코드를 작성해주세요.
    string code;
    char color;
    int sec;
    cin >> code >> color >> sec;
    Boom boom = Boom(code, color, sec);
    cout << "code : " << boom.code << "\n" << "color : " << boom.color << "\n" << "second : " << boom.sec;
    return 0;
}