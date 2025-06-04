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
    while((intArray[positionValue]!=targetValue) &&         
     (positionValue < arraySize))
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

    // qsort 
    int compareFunc(const void * voidA, const void * voidB)
    {
        int * intA = (int *)(voidA);
        int * intB = (int *)(voidB);
        return *intA - *intB;
    };

    const int sizeofArray = 10;
    int intARRAY[sizeofArray] = {87, 28, 100, 78, 84, 98, 75, 70, 81, 68};
    qsort(intARRAY, sizeofArray, sizeof(int), compareFunc); //qsort(array to be sorted, sizeofarray, size of one element, comparator function)

    // insertion sort

    int start = 0; //first element
    int end = sizeofArray -1;   //last element
    for(int i = start+1; i <= end; i++){    //outerloop - selects the next card to be selected in th everincreasing sorted hand
        for(int j =i; j > start && intARRAY[j-1] > intARRAY[j];j--){ //innerloop - puts current value in correct position by swapping the value with its predecessor(j-1) until it reaches correct location.
            int temp = intARRAY[j-1];
            intARRAY[j-1] = intARRAY[j];
            intARRAY[j]= temp;
        }
    }

    // compute statistics

    const int arraySizE= 10;
    int gradeArray[arraySizE]= {87, 76, 100, 97, 64, 83, 88, 92, 74, 95};
    double sum =0;
    for(int i=0; i<arraySizE;i++){
        sum += gradeArray[i];
    }
    double average = sum/arraySizE;

    // vendor payment valdiation

    const int ArrAySize = 10;
    int negativePayments=0;
    for(int i=0; i<ArrAySize;i++){
        if(vendorPayments[i]<0) negativePayments++;
    }

    return 0;
}