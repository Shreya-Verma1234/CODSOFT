/*
Create a program that generates a random number and asks the
user to guess it. Provide feedback on whether the guess is too
high or too low until the user guesses the correct number.
*/

#include<iostream>
#include<time.h>
using namespace std;

int main(){
    int num;
   srand(time(0)); // it will generate randon number every millisecond.
    int Randon=rand()%10; // it will generate random number.

cout<<"Enter any number"<<endl;
do{
cin>>num;

if(num==Randon){
    cout<<"you guesssed the number right."<<endl;
}
else if(num>Randon){
    cout<<"your guessed number is too high"<<endl;
}
else if(num<Randon){
    cout<<"your guessed number is too low"<<endl;
}
}
while(num!=Randon);

}



