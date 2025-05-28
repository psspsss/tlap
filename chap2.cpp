Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n=5;
    // Write C++ code here
    
    for(int i=1;i<=n;i++){
     for(int j=1; j<i;j++){
         cout<<"#";
     }   cout<<endl;
    }
    
    for(int i=1; i<=n;i++){
        for(int j=1; j<n-i;j++){
            cout<<"#";
        } cout<<endl;
          }
     
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
int main() {
    int n=7;
    // Write C++ code here
    for(int i=1; i<=n;i++){
        int hashes = 4-abs(4-i);
        for(int j=0; j<hashes;j++){
            cout<<"#";
        } cout<<endl;
          }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
int main() {
    int n=7;
    // Write C++ code here
    for(int row=1;row<=n;row++){
        
    cout<< abs(4-row) <<endl;
    }
    return 0;
}






// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main() {
    // Write C++ code here
    for(int i=1; i<=5;i++){

        cout<< 6-i <<endl;
        }
     
    return 0;
}

