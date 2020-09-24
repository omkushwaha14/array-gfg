#include <iostream>
using namespace std;

 int  maxsum(int a[],int n){
     int max_total=0;
    int max_end=0;
    int start =0, end = 0, s=0;

     for(int i=0;i<n;i++){
      max_end= max_end+a[i];
      if(max_end<a[i]){
          max_end=0;
          s=i+1;
      }
      if(max_total<max_end){
          max_total=max_end;
          start = s;
          end = i;
      }

    }
     cout<<start<<" "<<end<<endl;
    return max_total;
}


int main() {
     int a[100];
     int n;
     cin>>n;
 for(int i=0;i<n;i++){
     cin>>a[i];
 }
   int max_sum= maxsum(a,n);
 cout<<max_sum;
}




////answers///
7
input:  -2 -3 4 -1 -2 1 5 -3

output:
2 6
7
Process finished with exit code 0
