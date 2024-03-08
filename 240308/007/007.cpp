#include <iostream>
using namespace std;

class Agent{
    public:
    string code;
    char place;
    int time;
    Agent(string code, char place, int time){
        this -> code = code;
        this -> place = place;
        this -> time = time;
    }

};

int main() {
    string code;
    char point;
    int time;
    cin >> code >> point >> time;
    //cout << code <<"\n";
    Agent agent1 = Agent(code, point, time);

    //printf("secret code : %s\n", agent1.code);
    cout << "secret code : " << agent1.code << "\n";
    printf("meeting point : %c\n", agent1.place);
    printf("time : %d\n", agent1.time);

    return 0;
}