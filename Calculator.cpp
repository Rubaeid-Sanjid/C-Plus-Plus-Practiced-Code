#include <iostream>
using namespace std;

int power(int base, int pow){
    int result = 1;
    for(int i =0; i<pow; i++){
        result = result*base;
    }
    return result;
}
int main(){
    double num1, num2;
    char op;
    double result;
    int buttons;

    cout<<"What do you want to do ?"<<endl;
    cout<<"Type 0 for basic operation or Type 1 for exponent operation."<<endl;
    cin>>buttons;

    switch (buttons){
        case 0:
            cout<<"Enter your first number: ";
            cin>>num1;
            cout<<"Enter your operator: ";
            cin>>op;
            cout<<"Enter your second number: ";
            cin>>num2;

            if (op == '+'){
                result = num1 + num2;
            }
            else if (op == '-'){
                result = num1 - num2;
            }
            else if (op == '*'){
                result = num1 * num2;
            }
            else if (op == '/'){
                result = num1 / num2;
            }
            else {
                cout<< "Invalid input !";
            }
            cout<<"Your result is: "<< result;
            break;
        case 1:
            cout<<"Enter your first number: ";
            cin>>num1;
            cout<<"Enter your second number: ";
            cin>>num2;
            cout<<"Your result is: " <<power(num1,num2);
            break;
    }

}
