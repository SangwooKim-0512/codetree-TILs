#include <iostream>
using namespace std;

class Game{
    public:
    string id;
    int lv;
    Game(string id = "codetree", int lv = 10){
        this -> id = id;
        this -> lv = lv;
    }
};

int main() {
    Game game1;
    cout << "user " << game1.id << " lv " << game1.lv << "\n";

    string id;
    int lv;
    cin >> id >> lv;


    Game game2 = Game(id, lv);
    cout << "user " << game2.id << " lv " << game2.lv << "\n";

    return 0;
}