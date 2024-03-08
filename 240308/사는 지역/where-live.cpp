#include <iostream>
#include <algorithm>

using namespace std;

class Address{
    public:
        string name, num, location;
        Address(string name, string num, string location){
            this -> name = name;
            this -> num = num;
            this -> location = location;
        }
        Address(){}
};


int main() {
    int n;
    cin >> n;
    Address address[n];

    for(int i = 0; i < n; i++){
        string name, num, location;
        cin >> name >> num >> location;
        address[i] = Address(name, num, location);
    }

    int idx = 0;

    for(int i = 0; i < n; i++){
        if(address[i].name > address[idx].name) idx = i;
    }

    cout << "name " << address[idx].name;
    cout << "\naddr " << address[idx].num;
    cout << "\ncity " << address[idx].location;
    

    return 0;
}