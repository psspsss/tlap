// A message has been encoded as a text stream that is to be read character by charac-
// ter. The stream contains a series of comma-delimited integers, each a positive number
// capable of being represented by a C++ int. However, the character represented by
// a particular integer depends on the current decoding mode. There are three modes:
// uppercase, lowercase, and punctuation.
// In uppercase mode, each integer represents an uppercase letter: The integer
// modulo 27 indicates the letter of the alphabet (where 1 = A and so on). So an input
// value of 143 in uppercase mode would yield the letter H because 143 modulo 27 is
// 8 and H is the eighth letter in the alphabet.
// The lowercase mode works the same but with lowercase letters; the remainder of
// dividing the integer by 27 represents the lowercase letter (1 = a and so on). So an
// input value of 56 in lowercase mode would yield the letter b because 57 modulo 27
// is 2 and b is the second letter in the alphabet.
// In punctuation mode, the integer is instead considered modulo 9, with the inter-
// pretation given by Table 2-3 below. So 19 would yield an exclamation point because
// 19 modulo 9 is 1.
// At the beginning of each message, the decoding mode is uppercase letters. Each
// time the modulo operation (by 27 or 9, depending on mode) results in 0, the decod-
// ing mode switches. If the current mode is uppercase, the mode switches to lowercase
// letters. If the current mode is lowercase, the mode switches to punctuation, and if it is
// punctuation, it switches back to uppercase.


// Original input:
// 18,12312,171,763,98423,1208,216,11,500,18,241,0,32,20620,27,10

// OUTPUT
// Right? Yes!



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


//FINAL ANSWER 

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
