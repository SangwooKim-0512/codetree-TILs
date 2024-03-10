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
    if(a.korean != b.korean)
        return a.korean > b.korean;
    if(a.english != b.english)
        return a.english > b.english;
    return a.math > b.math;
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