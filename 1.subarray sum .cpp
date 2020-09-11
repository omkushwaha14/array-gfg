#include <iostream>
using namespace std;
void subarray(int arr[],int n,int sum){

    int subsum=0;
    int start=0;
    int i=0;
    while(i<=n){

        if(subsum==sum){
            cout<<start+1<<" "<<i<<endl;
            break;

        }
        else if(subsum>sum){
            subsum=subsum-arr[start];
            start++;
        }
        else{
            subsum=subsum+arr[i];
            i++;
        }
    }
}

int main() {

    int n;
    int sum;
    cin>>n;
    cin>>sum;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    subarray(arr,n,sum);


}
