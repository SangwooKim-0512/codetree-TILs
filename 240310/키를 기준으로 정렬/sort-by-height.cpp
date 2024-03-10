#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

class People{
    public:
        string name;
        int hight, weight;
        People(string name, int hight, int weight){
            this -> name = name;
            this -> hight = hight;
            this -> weight = weight;
        }
        People(){}
};

bool Cmp(People a, People b){
    return a.hight < b.hight;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    People person[n];

    for(int i = 0; i < n; i++){
        string name; int hight, weight;
        cin >> name >> hight >> weight;
        person[i] = People(name, hight, weight);
    }
    sort(person, person + n, Cmp);

    for(int i = 0; i < n; i++){
        cout << person[i].name << " ";
        cout << person[i].hight << " ";
        cout << person[i].weight << endl;
    }



    return 0;
}