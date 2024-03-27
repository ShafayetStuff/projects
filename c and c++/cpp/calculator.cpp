#include <iostream> 
#include<cmath>
using namespace std;
int main(){
    float num1;
    float num2;
    char op;

    cout <<"Enter a number :)): ";
    cin >> num1;
    cout <<"Enter a operator :)):";
    cin>> op;
    cout <<"Enter another number :)): ";
    cin >> num2;

    if(op == '+'){
        cout<<"The result is...... " <<num1+num2<<"!!!! :))";
    }
    else if(op == '-'){
        cout<<"The result is...... " <<num1-num2<<"!!!! :))";
    }
    else if(op == '*'){
        cout<<"The result is...... " <<num1*num2<<"!!!! :))";
    }
    else if(op == '/'){
        cout<<"The result is...... " <<num1/num2<<"!!!! ";
    }
    
    else {
        cout<<"Invalid Operator :(";
    }
    return 0;

}