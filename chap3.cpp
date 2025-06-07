#include <bits/stdc++.h>
using namespace std;

int main(){

    // // storing an array (-1)
    // int tenIntegerArray[10];
    // for(int i =0; i<10;i++)
    // tenIntegerArray[i]= -1 ;
    // cout<<tenIntegerArray<<endl;   
    
    // // copying an array

    // int OgtenIntArray[10]={1,2,3,4,5,6,-10,9,7,8};
    // int copyOgArray[10];
    
    // for(int i=0;i<10;i++) copyOgArray[i]= OgtenIntArray[i];
    
    // // Retrieval and Search 
    // int num = copyOgArray[2];

    // // Searching for a specific value
    // const int arraySize= 10;
    // int intArray[arraySize] = {4, 5, 9, 12, -4, 0, -57, 30987, -287, 1};
    // int targetValue = 12;
    // int positionValue =0;
    // while((intArray[positionValue]!=targetValue) &&         
    //  (positionValue < arraySize))
    // positionValue++;


    // // Criterion based Search 
    // // the value we are looking for isn’t a fixed value but a value based on the relationship with other values in the array
    // // Highest value {KING OF THE HILL APPROACH}

    // const int ArraySize = 10;
    // int intarray[ArraySize] = {4, 5, 9, 12, -4, 0, -57, 30987, -287, 1};
    // int highestval=intarray[0];
    
    // for(int i = 1;i<ArraySize;i++){
    //     if(intarray[i]>highestval)
    //     highestval = intarray[i];
    // }

    // // qsort 
    // int compareFunc(const void * voidA, const void * voidB)
    // {
    //     int * intA = (int *)(voidA);
    //     int * intB = (int *)(voidB);
    //     return *intA - *intB;
    // };

    // const int sizeofArray = 10;
    // int intARRAY[sizeofArray] = {87, 28, 100, 78, 84, 98, 75, 70, 81, 68};
    // qsort(intARRAY, sizeofArray, sizeof(int), compareFunc); //qsort(array to be sorted, sizeofarray, size of one element, comparator function)

    // // insertion sort

    // int start = 0; //first element
    // int end = sizeofArray -1;   //last element
    // for(int i = start+1; i <= end; i++){    //outerloop - selects the next card to be selected in th everincreasing sorted hand
    //     for(int j =i; j > start && intARRAY[j-1] > intARRAY[j];j--){ //innerloop - puts current value in correct position by swapping the value with its predecessor(j-1) until it reaches correct location.
    //         int temp = intARRAY[j-1];
    //         intARRAY[j-1] = intARRAY[j];
    //         intARRAY[j]= temp;
    //     }
    // }

    // // compute statistics

    // const int arraySizE= 10;
    // int gradeArray[arraySizE]= {87, 76, 100, 97, 64, 83, 88, 92, 74, 95};
    // double sum =0;
    // for(int i=0; i<arraySizE;i++){
    //     sum += gradeArray[i];
    // }
    // double average = sum/arraySizE;

    // // vendor payment valdiation

    // const int ArrAySize = 10;
    // int negativePayments=0;
    // for(int i=0; i<ArrAySize;i++){
    //     if(vendorPayments[i]<0) negativePayments++;
    // }

    // finding the mode 

    // In statistics, the mode of a set of values is the value that appears most often. Write
    // code that processes an array of survey data, where survey takers have responded to
    // a question with a number in the range 1–10, to determine the mode of the data set.
    // For our purpose, if multiple modes exist, any may be chosen.

    // psuedocode
    // int mostFrequent =?;
    // int highestFrequent = ?;
    // int currentFrequency=0;
    // for(int i=0;i<array_size;i++){
    //     currentFrequency++;
    //     if(surveydata[i] is the last occucrence){
    //         if(surveydata[i]>highestFrequent){
    //             highestFrequent = currentFrequency;
    //             mostFrequent = surveydata[i];
    //         }
    //         currentFrequency =0;
    //     }
    // }


    // qsort(surveydata, array_size, sizeof(int), compareFunction);
    // int mostFrequent =?;
    // int highestFrequent = ?;
    // int currentFrequency=0;
    // for(int i=0;i<array_size;i++){
    //     currentFrequency++;
    //     // if(surveydata[i] is the last occucrence){
    //         if(i== array_size || surveydata[i] != surveydata[i+1]){  if(the index reaches the end of array || current element and next element are not same)
    //             if(currentFrequency>highestFrequent){
    //                 highestFrequent = currentFrequency;
    //                 mostFrequent = surveydata[i];
    //             }

    //             currentFrequency =0;
    //         }
    //     }
    // }
    
    const int MAX_RESPONSE = 10;
    int histogram[MAX_RESPONSE];

    for(int i=0; i<MAX_RESPONSE;i++){
        histogram[i]=0;
    }

    for(int i=0; i<ArraySize; i++){
        histogram[surveryData[i]-1]++;
    }
    
    int mostFerquent =0;
    for(int i=1; i< MAX_RESPONSE;i++){
        if(histogram[i]> histogram[mostFerquent]) mostFerquent =i;
        mostFerquent++;
    }


    // DECODE PUNCTUATION FIX USING ARRAY
    // const char punctuation[8] = {'!', '?', ',', '.', ' ', ';', '"', '\'', };

    // outputCharacter = punctuation[number - 1];

    // const int ARRAY_SIZE = 8;
    // int targetPos =0;
    // while(punctuation[targetPos] != targetValue && targetPos < ARRAY_SIZE)
    // targetPos++;
    // int punctuationCode = targetPos + 1;



    return 0;
}