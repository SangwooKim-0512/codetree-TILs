#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class Student{
    public:
        string name;
        int korean, english, math;
        Student(string name, int korean, int english, int math){
            this-> name = name;
            this -> korean = korean;
            this -> english = english;
            this-> math = math;
        }
        Student(){}
};

bool Cmp(Student a, Student b){
    return a.korean + a.english + a.math < b.korean + b.english + b.math;
}

int main() {
    int n;
    cin >> n;
    Student score[n];
    for(int i = 0; i < n; i ++){
        string name; int korean, english, math;
        cin >> name >>korean >> english >> math;
        score[i] = Student(name, korean, english, math);
    }
    sort(score, score+n, Cmp);

    for(int i = 0; i < n; i++){
        cout << score[i].name << " ";
        cout << score[i].korean << " ";
        cout << score[i].english << " ";
        cout << score[i].math << endl;
    }

    return 0;
}