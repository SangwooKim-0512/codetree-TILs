#include <iostream>
#include <string>
using namespace std;

class Weather{
    public:
        string date, dotw, condition;
        Weather(string date, string, string dotw, string condition){
            this -> date = date;
            this -> dotw = dotw;
            this -> condition = condition;
        }
        Weather(){}
};

bool Minday(string A, string B){
    int ay, am, ad, by, bm, bd;
    ay = stoi(A.substr(0, 4)); am = stoi(A.substr(5, 2)); ad = stoi(A.substr(8, 2));
    by = stoi(B.substr(0, 4)); bm = stoi(B.substr(5, 2)); bd = stoi(B.substr(8, 2));
    //cout << ay << " " << am << " " << ad << "\n"; 

    if(ay < by) return true;
    else if(ay > by) return false;
    else if(ay == by){
        if(am < bm) return true;
        else if(am > bm) return false;
        else if(am == bm){
            if(ad < bd) return true;
            else if(ad > bd) return false;
        }
    }
    return true;

}


int main() {
    int n;
    cin >> n;
    Weather weathers[n];
    for(int i = 0; i < n; i++){
        string date, dotw, condition;
        cin >> date >> dotw >> condition;
        weathers[i].date = date; weathers[i].dotw = dotw; weathers[i].condition = condition;
    }
    int idx = 0;

    for(int i = 0; i < n; i++){
        if(weathers[i].condition == "Rain"){
            idx = i;
            break;
        }
    }
    for(int i = idx+1; i < n; i++){
        if(weathers[i].condition == "Rain"){
            if(Minday(weathers[i].date, weathers[idx].date)){
                idx = i;
            }
        }
    }
    cout << weathers[idx].date << " " << weathers[idx].dotw << " " << weathers[idx].condition;
    return 0;
}