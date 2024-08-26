/*
Develop a calculator program that performs basic arithmetic
operations such as addition, subtraction, multiplication, and
division. Allow the user to input two numbers and choose an
operation to perform.
*/
#include<iostream>
using namespace std;
int main(){
    int num1,num2;
    char ch='+' ;'-'; '*'; '/';
    cout<<"Enter number"<<endl;
    cin>>num1;
    cout<<"Enter another number"<<endl;
    cin>>num2;
    cout<<"Enter operator"<<endl;
    cin>>ch;
    switch(ch){
        case '+':{
            cout<<num1<<"+"<<num2<<"="<<num1+num2<<endl;
             break;
        }
          case '-':{
            cout<<num1<<"-"<<num2<<"="<<num1-num2<<endl;
             break;
        }
          case '*':{
            cout<<num1<<"*"<<num2<<"="<<num1*num2<<endl;
            break;
        }
          case '/':{
            cout<<num1<<"/"<<num2<<"="<<num1/num2<<endl;
             break;
        }
        default:
            cout<<"Enter valid input"<<endl;
        


    }


}

