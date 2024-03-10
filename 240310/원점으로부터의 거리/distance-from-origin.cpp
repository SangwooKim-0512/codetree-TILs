#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

class Point{
    public:
        int x, y, num;
        Point(int x, int y, int num){
            this->x = x;
            this->y = y;
            this->num = num;
        }
        Point(){}
};

bool Distance(Point a, Point b){
    if((abs)(a.x+a.y) != (abs)(b.x+b.y)){
        return (abs)(a.x+a.y) < (abs)(b.x+b.y);
    }
    return a.num < b.num;
}


int main() {
    int n;
    cin >> n;
    Point points[n];
    for(int i = 0; i < n; i++){
        int x, y;
        cin >> x >> y;
        points[i] = Point(x, y, i+1);
    }
    sort(points, points+n, Distance);

    for(int i = 0; i < n; i++){
        cout << points[i].num << endl;
    }

    return 0;
}