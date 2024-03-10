#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class Person{
    public:
        string name;
        int hight;
        double weight;
        Person(string name, int hight, double weight){
            this -> name = name;
            this -> hight = hight;
            this -> weight = weight;
        }
        Person(){}
};

bool Cmp_name(Person a, Person b){
    return a.name < b.name;
}

bool Cmp_hight(Person a, Person b){
    return a.hight > b.hight;
}

int main() {
    Person people[5];
    for(int i = 0; i < 5; i++){
        string name; int hight; double weight;
        cin >> name >> hight >> weight;
        people[i] = Person(name, hight, weight);
    }

    sort(people, people+5, Cmp_name);

    cout << "name\n";

    for(int i = 0; i < 5; i++){
        cout << people[i].name << " " << people[i].hight << " " << people[i].weight << endl;
    }
    cout << endl;
    
    sort(people, people+5, Cmp_hight);
    cout << "height\n";
    for(int i = 0; i < 5; i++){
        cout << people[i].name << " " << people[i].hight << " " << people[i].weight << endl;
    }


    return 0;
}