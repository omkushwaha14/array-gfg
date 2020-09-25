#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];

        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int maxsum=0;
        int totalsum=0;

        for(int i=0;i<n;i++){
           maxsum=maxsum+a[i];
           if(maxsum<a[i]){
               maxsum=0;
           }
           if(totalsum<maxsum){
               totalsum=maxsum;

           }

        }
        cout<<"output:"<<totalsum;


    }

}

////output//
2
4
1 2 -4 -3
output:3
4
1 2 -4 -3
output:3
Process finished with exit code 0
