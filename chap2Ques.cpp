
// Q 2.1) 
// ########
//  ######
//   ####
//    ##

// #include<bits/stdc++.h>

// using namespace std;

// int main(){

//     for(int i =0; i<4;i++){

//         for(int j= 0; j<8;j++){
//             if(j<i){
//                 cout<<" ";
//             }

//             else if( j < 8 - i)
//             cout<<"*";
//         }
//         cout<<endl;
//     } 

//     return 0;
// }


// Q2.2

#include<bits/stdc++.h>

using namespace std;

int main(){


    // for(int n=0; n<4;n++){

    //         int numstars = 2* (n+1); 
    //         int spaces = (8-numstars)/2;
            
    //     for(int m=0;m<spaces;m++){
    //         cout<<" ";
    //     }

    //     for(int m=0;m<numstars;m++){
    //         cout<<"*";
    //     }
        
    //     cout<<endl;
    // }

    // for(int i =0; i<4;i++){ 
 
    //     for(int j= 0; j<8;j++){
    //         if(j<i){
    //             cout<<" ";
    //         }

    //         else if( j < 8 - i)
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // } 




    // Top half
    for (int row = 1; row <= 4; row++)
    {
        for (int space = 1; space <= (row - 1); space++)
        {
            std::cout << ' ';
        }

        for (int hashNum = 1; hashNum <= row; hashNum++)
        {
            std::cout << '#';
        }

        for (int space = 1; space <= 14 - 2 * ((row - 1) + row); space++)
        {
            std::cout << ' ';
        }

        for (int hashNum = 1; hashNum <= row; hashNum++)
        {
            std::cout << '#';
        }
        std::cout << '\n';
    }

    // Bottom half
    for (int row = 1; row <= 4; row++)
    {
        for (int space = 1; space <= (4 - row); space++)
        {
            std::cout << ' ';
        }

        for (int hashNum = 1; hashNum <= (5 - row); hashNum++)
        {
            std::cout << '#';
        }

        for (int space = 1; space <=  14 - 2 * ((4 - row) + (5 - row)); space++)
        {
            std::cout << ' ';
        }

        for (int hashNum = 1; hashNum <= (5 - row); hashNum++)
        {
            std::cout << '#';
        }
        std::cout << '\n';
    }
return 0;
}