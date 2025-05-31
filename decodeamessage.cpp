#include<bits/stdc++.h>
using namespace std;


int main(){

    // to store the value of 2 digit num using 2 variables
// cout<<"enter 2 digit num: ";
// char Digit1 = cin.get();
// char Digit2 = cin.get();

// int Dig1 = Digit1 - '0';
// int Dig2 = Digit2 - '0';

// int overallnum = Dig1 * 10 + Dig2;
// cout<<"The num: " <<overallnum <<endl;

// storing value of 2 digits using one variable only
    
// cout<<"enter 2 digit num: ";
// char digitChar = cin.get();

// int overallNum= (digitChar - '0') * 10;

// digitChar = cin.get();
// overallNum += (digitChar - '0');

// cout<<"The num: " <<overallNum <<endl;



cout<<"Enter a 3 digit or 4 dig num: ";

char dig = cin.get();
int threeDigit = (dig- '0') * 100;
int fourDigit = (dig- '0') * 1000;

dig = cin.get();
threeDigit += (dig-'0') *10;
fourDigit += (dig- '0') * 100;

dig = cin.get();
threeDigit += (dig - '0');
fourDigit += (dig - '0') * 10;

dig = cin.get();
if(dig == 10){
    cout <<"Number entered is 3 digit: " <<threeDigit <<endl;
} else {
    fourDigit += (dig-'0');
    cout<< "Number entered is 4 digit: " << fourDigit <<endl;
}
return 0;
}

