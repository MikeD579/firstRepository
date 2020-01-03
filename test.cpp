#include <iostream>

using namespace std;

int add (int, int);

int main(){
    int number1;
    int number2;

    int sum;

    cout << "Enter an integer >> ";
    cin >> number1;
    cout << "Enter another integer >> ";
    cin >> number2;

    sum = add(number1, number2);

    cout << "Sum >> " << sum;

    return 0;
}

int add (int num1, int num2){
    return num1 + num2;
}