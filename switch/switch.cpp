/*
// Create a calculator

#include <iostream>
using namespace std;

int main()
{
    char oper;
    float num1, num2;
    cout<<"Enter an operator (+,-, *,/): ";
    cin>>oper;
    cout<<"Enter 2 numbers: "<<endl;
    cin>>num1>>num2;

    switch(oper)
    {
    case '+':
        cout<<num1<<"+"<<num2<<" = "<<num1+num2;
        break;

    case '-':
        cout<<num1<<"-"<<num2<<" = "<<num1-num2;
        break;

    case '*':
        cout<<num1<<"*"<<num2<<"="<<num1*num2;
        break;

    case '/':
        cout<<num1<<"/"<<num2<<"="<<num1/num2;
        break;
    default:
        // operator doesn't match any case constant (+,-,*,/)
        cout<<"Error! The operator is incorrect";
        break;
    }
    return 0;
}
*/

// Special comment to entered grade

#include <iostream>
using namespace std;

int main()
{
    char grade;
    cout<<"Enter your grade: ";
    cin>>grade;

    switch(grade)
    {
    case ('A'):
        cout<<"Excellent!"<<endl;
        break;
         case ('a'):
        cout<<"Excellent!"<<endl;
        break;

    case ('B'):
    cout<<"Well done!"<<endl;
    break;
    case ('b'):
    cout<<"Well done!"<<endl;
    break;

    case ('C'):
        cout<<"Good"<<endl;
        break;
        case ('c'):
        cout<<"Good"<<endl;
        break;

    case ('D'):
        cout<<"You have passed"<<endl;
        break;
          case ('d'):
        cout<<"You have passed"<<endl;
        break;



    case ('F'):
        cout<<"You have failed"<<endl;
        break;
         case ('f'):
        cout<<"You have failed"<<endl;
        break;

    default:
        cout<<"Invalid grade"<<endl;
    }
    return 0;
}
