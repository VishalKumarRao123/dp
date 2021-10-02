#include<bits/stdc++.h>
using namespace std;
void subsetSum(int arr[],int n,int sum){
 bool t[n+1][sum+1];
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
 for(int i=0;i<n+1;i++){
  for(int j=0;j<sum+1;j++){
   cout<<t[i][j]<<" ";
  }
  cout<<endl;
 }
 for(int i=sum/2;i>=0;i--){
    if(t[n][i]==1){
     cout<<"Ans : "<<sum-(2*i);
     return ;
    }
 }
}
int main(int argc, char const *argv[])
{
 int n;
 cin>>n;
 int arr[n];
 int sum=0;
 for(int i=0;i<n;i++){
    cin>>arr[i];
    sum+=arr[i];
 }
   cout<<"Sum : "<<sum<<endl;
    subsetSum(arr,n,sum);
 return 0;
}
