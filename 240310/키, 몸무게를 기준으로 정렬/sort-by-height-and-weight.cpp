#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class Person{
    public:
        string name;
        int hight, weight;
        Person(string name, int hight, int weight){
            this -> name = name;
            this -> hight = hight;
            this -> weight = weight;
        }
        Person(){}
};

bool Cmp_name(Person a, Person b){
    return a.name < b.name;
}

bool Cmp(Person a, Person b){
    if(a.hight != b.hight)
        return a.hight < b.hight;
    return a.weight > b.weight;
}


int main() {
    int n;
    cin >> n;
    Person people[n];
    for(int i = 0; i < n; i++){
        string name; int hight, weight;
        cin >> name >> hight >> weight;
        people[i] = Person(name, hight, weight);
    }

    //cout << fixed;
    //cout.precision(1);
    sort(people, people+n, Cmp);
    for(int i = 0; i < n; i++){
        cout << people[i].name << " " << people[i].hight << " " << people[i].weight << endl;
    }
    return 0;
}