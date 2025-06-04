#include <bits/stdc++.h>
using namespace std;

int main(){

    // storing an array (-1)
    int tenIntegerArray[10];
    for(int i =0; i<10;i++)
    tenIntegerArray[i]= -1 ;
    cout<<tenIntegerArray<<endl;   
    
    // copying an array

    int OgtenIntArray[10]={1,2,3,4,5,6,-10,9,7,8};
    int copyOgArray[10];
    
    for(int i=0;i<10;i++) copyOgArray[i]= OgtenIntArray[i];
    
    // Retrieval and Search 
    int num = copyOgArray[2];

    // Searching for a specific value
    const int arraySize= 10;
    int intArray[arraySize] = {4, 5, 9, 12, -4, 0, -57, 30987, -287, 1};
    int targetValue = 12;
    int positionValue =0;
    while((intArray[positionValue]!=targetValue) && (positionValue < arraySize))
    positionValue++;


    // Criterion based Search 
    // the value we are looking for isn’t a fixed value but a value based on the relationship with other values in the array
    // Highest value {KING OF THE HILL APPROACH}

    const int ArraySize = 10;
    int intarray[ArraySize] = {4, 5, 9, 12, -4, 0, -57, 30987, -287, 1};
    int highestval=intarray[0];
    
    for(int i = 1;i<ArraySize;i++){
        if(intarray[i]>highestval)
        highestval = intarray[i];
    }


    return 0;
}