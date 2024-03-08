#include <iostream>
using namespace std;

class Product{
    public:
        string name;
        int code;
        Product(string name = "codetree", int code = 50){
            this -> name = name;
            this -> code = code;
        }
};

int main() {
    Product product1;
    cout << "product " << product1.code << " is " << product1.name << "\n"; 

    string name;
    int code;
    cin >> name >> code;

    Product product2 = Product(name, code);
    cout << "product " << product2.code << " is " << product2.name; 
    return 0;
}