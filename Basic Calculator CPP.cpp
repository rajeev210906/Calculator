#include <iostream>
using namespace std;

int main(){
    int option;
    int num1,num2;
    cout<<"Welcome To Calculator"<<endl;
    cout<<"Select One Of The Following Operation Below"<<endl;
    cout<<"1. Addition\n2. Subtraction\n3. Multiplication\n4. Dividision"<<endl;
    cin>>option;
    if (option == 1)
    {
        
        cout<<"Welcome To Addition"<<endl;
        cout<<"Enter First Number : ";
        cin>>num1;
        cout<<"Enter Second Number : ";
        cin>>num2;
        cout<<"Addition Is : "<<num1+num2<<endl;

    }
    if (option == 2)
    {
        
        cout<<"Welcome To Subtraction"<<endl;
        cout<<"Enter First Number : ";
        cin>>num1;
        cout<<"Enter Second Number : ";
        cin>>num2;
        cout<<"Subtarction Is : "<<num1-num2<<endl;

    }
    if (option == 3)
    {
        
        cout<<"Welcome To Multiplication"<<endl;
        cout<<"Enter First Number : ";
        cin>>num1;
        cout<<"Enter Second Number : ";
        cin>>num2;
        cout<<"Multiplication Is : "<<num1*num2<<endl;

    }
    if (option == 4)
    {
        
        cout<<"Welcome To Devision"<<endl;
        cout<<"Enter First Number : ";
        cin>>num1;
        cout<<"Enter Second Number : ";
        cin>>num2;
        cout<<"Devision Is : "<<num1/num2<<endl;

    }

}