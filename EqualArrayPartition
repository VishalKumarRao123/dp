#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
 int n,sum=0;
 cin>>n;
 int arr[n];
 for(int i=0;i<n;i++){
cin>>arr[i];
sum+=arr[i];
 }
 if(sum&1){
  cout<<"false";
  return 0;
 }
 sum=sum/2;
   int t[n+1][sum+1];
 for(int i=0;i<n+1;i++){
  for(int j=0;j<sum+1;j++){
   if(i==0)
      t[i][j]=false;
   if(j==0)
      t[i][j]=true;
  }
 }
 for(int i=1;i<n+1;i++){
  for(int j=1;j<sum+1;j++){
     if(arr[i-1]<=j)
       t[i][j]=t[i-1][j-arr[i-1]]||t[i-1][j];
     else
       t[i][j]=t[i-1][j];
  }
 }
 cout<<"true";
 return 0;
}
