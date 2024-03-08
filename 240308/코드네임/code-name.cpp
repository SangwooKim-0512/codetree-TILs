#include <iostream>
using namespace std;

class Agent{
    public:
        char name;
        int score;
        Agent(char name, int score){
            this -> name = name;
            this -> score = score;
        }
        Agent(){}
};

int main() {
    Agent agent[5];
    int idx;
    for(int i = 0; i < 5; i++){
        char name;
        int score;
        cin >> name >> score;
        agent[i] = Agent(name, score);
        if(i == 0) idx = i;
        if(agent[i].score < agent[idx].score) idx = i;
    }
    cout << agent[idx].name << " " << agent[idx].score;
    return 0;
}