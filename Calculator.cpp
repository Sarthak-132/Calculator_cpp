#include<iostream>
using namespace std;

int main(){
    int a , b ;
    char result;

    cout << "Enter a number : ";
    cin >> a;

    cout << "Enter a operator : ";
    cin >> result;

    cout << "Enter a number : ";
    cin >> b;

    switch(result){
        case '+': cout<< "Answer is : " << (a + b) << endl;
            break;

        case '-': cout<< "Answer is : " << (a - b) <<  endl;
            break;

        case '*': cout<< "Answer is : " << (a * b) <<  endl;
            break;

        case '/': cout<< "Answer is : " << (a / b) <<  endl;
            break;

        case '%': cout<< "Answer is : " << (a % b) <<  endl;
            break;

        default: cout << "Please enter a valid operator"<< endl;
            break;

    }

}