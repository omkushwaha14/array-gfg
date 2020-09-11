#include <bits/stdc++.h> 
using namespace std; 
  
 
void findNumbers(int A[], int n, int sum) 
{ 
    int l, r; 
  
     sort(A, A + n); 
   
    for (int i = 0; i <n - 2; i++) { 
  
       l = i + 1;  
       r = n-1;  
        while (l < r) { 
            if (A[i] + A[l] + A[r] == sum) { 
                cout<<A[i]<<" "<<A[l]<<" "<<A[r]; 
                return; 
            } 
            else if (A[i] + A[l] + A[r] < sum){ 
                l++;
                }

            else { 
                if(A[i] + A[l] + A[r] > sum){ 
                r--; 
                }
            }
        } 
    } 
   
 
} 
  
 
int main() 
{ 
    int A[100];
     int n;
     cin>>n;
     int sum;
     cin>>sum;
      for(int i=0;i<n;i++){
          cin>>A[i];
      }
  
    findNumbers(A,n, sum); 
  
    return 0; 
} 
