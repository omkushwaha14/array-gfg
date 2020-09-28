 #include <iostream>
using namespace std;
int main() {
int t;
cin>>t;


 while(t--) {
     int n;
     cin>>n;
     int temp[n];
     int a[n];
     for(int i=0;i<n;i++){
         cin>>a[i];
     }

     int start=0;
     int end=n-1;
     int flag=true;

     for (int i = 0; i < n; i++) {
         if (flag) {
             temp[n] = a[end--];
             cout << temp[n] << " ";
         } else {
             temp[n] = a[start++];
             cout << temp[n] << " ";
             
         }

         flag = !flag;

     }
     cout<<endl;
 }



}

/////answerr///
Input:
2
6
1 2 3 4 5 6
11 
10 20 30 40 50 60 70 80 90 100 110

Output:
6 1 5 2 4 3
110 10 100 20 90 30 80 40 70 50 60
