#include <iostream>
using namespace std;

class Friend {
private:
    string name;
    int age;

public:
    //attributes
    Friend(string n, int a) {  // constructor
        name = n;
        age = a;
    }
     //behavior
    void greet() {
        cout << "Hey, I'm " << name << "!" << endl;
    }

    void showAge() {
        cout << "I'm " << age << " years old." << endl;
    }
};

int main() {
    Friend f("Jay", 21);
    f.greet();
    f.showAge();
    return 0;
}

