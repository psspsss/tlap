// make the 7 column 4 star pattern
// find the number relation and try to achieve the number pattern first to find the expression needed
// apply the expression to the print loop condition

//4-row gives the empty space pattern
// subtracting from 4 as it is in the middle;


#include <iostream>
using namespace std;

int main() {
    
    for(int row=1;row<=7;row++){
    for(int i=1; i<=4-abs(4-row);i++){
        cout<<"#";
        } cout<<"\n";    
    }
    
    cout<<endl;
    cout<<"Number pattern: "<<endl;
    
    for(int row=1;row<=7;row++){
        cout<<4- abs(4-row)<<endl;  
    } 
    

    return 0;
}