#include <iostream>
using namespace std;

class Calculator {
    public:
    int a;
    int b;
    int answer;

    void add(){
        cout << "Enter in the first number \n";
        cin >> a;
        cout << "Enter in the second number \n";
        cin >> b;
        answer = a + b;
        cout << "The answer is " << answer << endl;
    }

    void subtract() {
        cout << "Enter in the first number \n";
        cin >> a;
        cout << "Enter in the second number \n";
        cin >> b;
        answer = a - b;
        cout << "The answer is " << answer << endl;
    }

    void multiply() {
        cout << "Enter in the first number \n";
        cin >> a;
        cout << "Enter in the second number \n";
        cin >> b;
        answer = a * b;
        cout << "The answer is " << answer << endl;
    }

    void divide() {
        cout << "Enter in the first number \n";
        cin >> a;
        cout << "Enter in the second number \n";
        cin >> b;
        answer = a / b;
        cout << "The answer is " << answer << endl;
    }
}; 

int main () {
    Calculator try1;
    try1.add();
    return 0;
}