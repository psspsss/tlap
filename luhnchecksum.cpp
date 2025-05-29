/*The Luhn formula is a widely used system for validating identification numbers. Using
the original number, double the value of every other digit. Then add the values of the
individual digits together (if a doubled value now has two digits, add the digits indi-
vidually). The identification number is valid if the sum is divisible by 10.

Write a program that takes an identification number of arbitrary length and
determines whether the number is valid under the Luhn formula. The program must
process each character before reading the next one.*/

#include <iostream>
using namespace std;

int doubleDigitValue(int digit){    
    int doubleDig= digit*2;
    int sum;

        if(doubleDig >= 10){
            sum = 1 + doubleDig%10; //as the range of double of single digit goes from 10-18 1 will always be there and the ones place digit is calculated through % 10 modulus
        } else sum = doubleDig;
    return sum;
    }

int main() {
    // cin >> digit;
    // cout << doubleDigitValue(digit);
    
    char digit;
    int oddlength=0;
    int evenlength=0;
    int position =1;
    
    cout<<"Enter a Set of number: ";
    digit = cin.get();

    while(digit !=10 ){

        if(position % 2==0){
            oddlength += doubleDigitValue(digit - '0');
            evenlength += digit - '0';  
        } else{
            evenlength += doubleDigitValue(digit - '0');
            oddlength += digit - '0';
        } 
        digit = cin.get();
        position++;
    }
    int checksum;
    
    if((position-1)%2==0){
        checksum = evenlength;
    } else {
        checksum = oddlength;
    } cout << "CHECKSUM IS: " << checksum << endl;
    
    if(checksum % 10==0){
        cout<< "Valid"<<endl;
    } else cout << "NOT VALID" <<endl;
    
    return 0;
}





/*
    
#include <iostream>
using namespace std;
int main() {
    int number;
    int positive=0;
    int negative=0;

    for(int i=1; i<=10;i++){
        cin>>number;
        if(number>0) positive++;
        if(number<0) negative++;
    }
    
    int response;
    cout<<"Press 1 to get Positive count or Press 0 to get Negative count";
    cin >>response;
    if(response == 1){cout << positive <<endl;}
    if(response == 0){cout << negative <<endl;}

    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main(){
    
// int doubleDigitValue(int digit){
    
//     int doubleDigit=digit*2;
//     int sum;
//     if(doubleDigit>=10){
//         sum = 1 + doubleDigit%10;
//     } else sum = doubleDigit;
//     return sum;
// }

char digit;
cout << "Enter a one-digit number: ";
cin >> digit;
int sum = digit - '0';
cout << "Is the sum of digits " << sum << "? \n";
// char NaDigit;
// NaDigit = cin.get();
// int sum = NaDigit;
// cout << sum;

    return 0;
}






*/