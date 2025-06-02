
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


    for(int n=0; n<4;n++){

            int numstars = 2* (n+1); 
            int spaces = (8-numstars)/2;
            
        for(int m=0;m<spaces;m++){
            cout<<" ";
        }

        for(int m=0;m<numstars;m++){
            cout<<"*";
        }
        
        cout<<endl;
    }

    for(int i =0; i<4;i++){ 
 
        for(int j= 0; j<8;j++){
            if(j<i){
                cout<<" ";
            }

            else if( j < 8 - i)
            cout<<"*";
        }
        cout<<endl;
    } 

    return 0;
}