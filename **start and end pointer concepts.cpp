#include <iostream>
using namespace std;
int main() {
    int target;
    cin>>target;
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
int start=0;
int end=a[n-1];
int result=0;
while(start<end){
    int sum=a[start]+a[end];
    if(sum==target){
        cout<<a[start]<<" "<<a[end]<<endl;
        cout<<start<<" "<<end;
        break;
    }
    else if(sum<target){
        start++;
    }
    else{
        end--;
    }

}



}

///output////
7
5
1 2 5 3 2
2 5
1 2
Process finished with exit code 0
