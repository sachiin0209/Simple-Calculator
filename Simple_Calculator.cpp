#include <iostream>
#include <string>
using namespace std;

int main() {
    double num1;
     double num2;
    char oper;
    char c;
    bool firstIteration = true;

    do {
        if (firstIteration) {
            cout << "Enter the first number: ";
            cin >> num1;
            cout << "Enter the second number: ";
            cin >> num2;
            firstIteration = false;
        }
        else {
            cout << "Enter the next number: ";
            cin >> num2;
        }
        cout << "Enter the operator (+, -, *, /): ";
        cin >> oper;
        if (oper != '+' && oper != '-' && oper != '*' && oper != '/') {
            cout << "Invalid operator! Please enter one of the following: +, -, *, /" << endl;
            return 0;
        }
        switch (oper) {
        case '+':
            cout << "Current Calculation: " << num1 << " " << oper << " " << num2 << " = " << num1 + num2 << endl;
            num1 = num1 + num2;
            
            break;
        case '-':
             cout << "Current Calculation: " << num1 << " " << oper << " " << num2 << " = " << num1 - num2 << endl;
            num1 = num1 - num2;
            
            break;
        case '*':
            cout << "Current Calculation: " << num1 << " " << oper << " " << num2 << " = " << num1 * num2 << endl;
            num1 = num1 * num2;
            break;
        case '/':
                if(num2==0){
                    cout<<"Error! Division by zero is not allowed"<<endl;
                    return 0;
                }
                else {
                    cout<<"Current Calculation:  "<<num1<<" "<<oper<<" "<<num2<<"="<<num1/num2<<endl;
                    num1=num1/num2;
                       }
            break;
        }
    cout<<"Do you want to perform more calculations (y/n)";
    cin>>c;
        
    } while(c=='y' || c=='Y');
    cout<<"The result is "<<num1<<endl;

    return 0;
}
