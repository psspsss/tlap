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



// char digiCar;
// do{
// char digiCar = cin.get();
// int number = (digiCar - '0');
// digiCar = cin.get();

// while((digiCar !=10)&&( digiCar != ',')){
//     number = number *10 + (digiCar - '0');
//     digiCar = cin.get();
// } cout<<"number is: " <<number<<endl;
// } while (digiCar!=10);

// char inputDig = cin.get();
// int number = (inputDig - '0');

// inputDig = cin.get();
// while(inputDig !=10){
//     number = number *10 + (inputDig - '0');
//     inputDig = cin.get();
// }

// from int to char output
// cout<< "enter num: ";
// int nuMBer;
// cin >>nuMBer;
// char outputChar;

// outputChar = nuMBer + 'A' - 1;
// cout<< "output char: " <<outputChar <<endl;



// cout<<"Enter num 1 - 9: ";
// int inputspecial;
// cin >> inputspecial;
// char outputspecial;
// switch (inputspecial)
// {
// case 1:
//     outputspecial = '!';
//     break;
// case 2:
//     outputspecial = '?';
//     break;
// case 3:
//     outputspecial = ',';
//     break;
// case 4:
//     outputspecial = '.';
//     break;
// case 5:
//     outputspecial = ' ';
//     break;
// case 6:
//     outputspecial = ';';
//     break;
// case 7:
//     outputspecial = '"';
//     break;
// case 9:
//     outputspecial = '\'';
//     break;
// }

// cout<<"equivalent symbol: " << outputspecial <<endl; 



// MODE SWITCHING of UPPER LOWER AND SYMBOLS
// enum modeType {UPPERCASE, LOWERCASE, SYMBOLS};
// int numbs;
// modeType mode = UPPERCASE;
// cout<< "Enter some numbers, follow by an -1 in the end: ";

// do
// {   
//     cin>>numbs;
//     cout<<"NUMBERS READ: " <<numbs;
    
//     switch (mode){
    
//         case UPPERCASE:
//         numbs = numbs % 27;
//         cout<< ". Modulus 27: "<<numbs <<" .";
//         if(numbs==0){
//             cout<<"Switching to LOWERCASE ";
//             mode = LOWERCASE;
//         }
//         break;
    

//         case LOWERCASE:
//         numbs = numbs % 27;
//         cout<<". Modulus 27: " <<numbs <<" .";
//         if(numbs == 0){
//             cout<<"Switching to SYMBOLS";
//             mode = SYMBOLS;
//         } 
//         break;

//         case SYMBOLS:
//         numbs = numbs % 9;
//         cout <<". Modulus 9: " <<numbs <<" .";
//         if(numbs == 0){
//             cout<<"Switching Back to UPPERCASE";
//             mode = UPPERCASE;
//         } 
//         break;
//     } cout<<endl;
    
// } while (numbs != -1);

cout<<"Enter a series of char to decode (,) to break: ";
char outputCharacter;
enum modeType {UPPERCASE , LOWERCASE , SYMBOLS };

modeType mode = UPPERCASE;
char digitChar;
do {   
    digitChar = cin.get();
    int number = (digitChar - '0');
    digitChar = cin.get();
    while((digitChar != 10) && (digitChar != ',')){
        number = number * 10 + (digitChar - '0');
        digitChar = cin.get();
    }

switch (mode)
{

    case UPPERCASE: 
    number = number % 27;
    outputCharacter = number + 'A' - 1; 
    if(number == 0){
        mode = LOWERCASE;
        continue;
    }
    break;

    case LOWERCASE:
    number = number % 27;
    outputCharacter = number + 'a' - 1;
    if(number == 0){
        mode = SYMBOLS;
        continue;
    }
    break;

    case SYMBOLS:
    number = number % 9;
   
    switch (number){
case 1: outputCharacter = '!'; break;
case 2: outputCharacter = '?'; break;
case 3: outputCharacter = ','; break;
case 4: outputCharacter = '.'; break;
case 5: outputCharacter = ' '; break;
case 6: outputCharacter = ';'; break;
case 7: outputCharacter = '"'; break;
case 9: outputCharacter = '\''; break;

    } if (number ==0){
    mode = UPPERCASE;
    continue;
            } break;
        } 
    cout<< outputCharacter;

} while (digitChar !=10);
    cout<<endl;
    
return 0;
}
