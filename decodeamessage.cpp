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



// cout<<"Enter a 3 digit or 4 dig or 5 dig num: ";

// char dig = cin.get();
// int threeDigit = (dig- '0') * 100;
// int fourDigit = (dig- '0') * 1000;

// dig = cin.get();
// threeDigit += (dig-'0') *10;
// fourDigit += (dig- '0') * 100;

// dig = cin.get();
// threeDigit += (dig - '0');
// fourDigit += (dig - '0') * 10;

// dig = cin.get();
// if(dig == 10){
//     cout <<"Number entered is 3 digit: " <<threeDigit <<endl;
// } else {
//     fourDigit += (dig-'0');
//     cout<< "Number entered is 4 digit: " << fourDigit <<endl;
// }


//turning the above code into single variable

// char charDigi = cin.get();
// int threeDigit = (charDigi - '0') *100;

// charDigi = cin.get();
// threeDigit += (charDigi - '0') * 10;

// charDigi = cin.get();
// threeDigit += (charDigi - '0');

// charDigi= cin.get();
// if(charDigi == 10){
//     cout<< "Three Digit: " <<threeDigit <<endl;
// } else {

//     threeDigit = threeDigit * 10 + (charDigi - '0');
//     cout<<"Four DIGI: " << threeDigit <<endl;
// }



//turning the above code FOR 5 DIGIT into single variable

// char charDigi = cin.get();
// int threeDigit = (charDigi - '0') *100;

// charDigi = cin.get();
// threeDigit += (charDigi - '0') * 10;

// charDigi = cin.get();
// threeDigit += (charDigi - '0');

// charDigi= cin.get();
// if(charDigi == 10){
//     cout<< "Three Digit: " <<threeDigit <<endl;
// } else {
//     threeDigit = threeDigit * 10 + (charDigi - '0');
//     charDigi = cin.get();
//     if(charDigi == 10){
//     cout<<"Four DIGI: " << threeDigit <<endl;}
//     else {
//         threeDigit = threeDigit * 10 + (charDigi - '0');
//         cout<<"FIVE DIGI: " << threeDigit <<endl;
//     }


//  THE MAIN FUNCTION THAT STORES ALL THE DIGITS 
// cout<<"enter as many digits: ";
// char inputDig = cin.get();
// int number = (inputDig - '0');

// inputDig = cin.get();
// while(inputDig !=10){
//     number = number *10 + (inputDig - '0');
//     inputDig = cin.get();
// }
// cout << "Number stored is : " <<number <<endl;



char digiCar;
do{
char digiCar = cin.get();
int number = (digiCar - '0');
digiCar = cin.get();

while((digiCar !=10)&&( digiCar != ',')){
    number = number *10 + (digiCar - '0');
    digiCar = cin.get();
} cout<<"number is: " <<number<<endl;
} while (digiCar!=10);

char inputDig = cin.get();
int number = (inputDig - '0');

inputDig = cin.get();
while(inputDig !=10){
    number = number *10 + (inputDig - '0');
    inputDig = cin.get();
}

return 0;

}
