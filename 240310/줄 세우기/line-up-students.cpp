#include <iostream>
#include <algorithm>
using namespace std;

class Student{
    public:
        int n, h, w;
        Student(int n, int h, int w){
            this-> n = n;
            this->h = h;
            this->w = w;
        }
        Student(){}
};

bool Cmp(Student a, Student b){
    if(a.h =! b.h)
        return a.h > b.h;
    if(a.w =! b.w)
        return a.w > b.w;
    return a.n > b.n;
}

int main() {
    int num;
    cin >>num;
    Student students[num];
    for(int i = 0; i < num; i++){
        int h, w;
        cin >> h >> w;
        students[i] = Student(i+1, h, w);
    }
    sort(students, students+num, Cmp);

    for(int i = 0; i < num; i ++){
        cout << students[i].h << " " << students[i].w << " " << students[i].n << endl;
    }
    return 0;
}