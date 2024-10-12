#include<iostream>
using namespace std;
int sum_arr(int arr[],int size){
  int sum=0;
  for (int i=0;i<size;i++){
    sum+=arr[i];
  }
  return sum;
}
int pro_arr(int arr[],int size){
  int pro=1;
  for (int i=0;i<size;i++){
    pro*=arr[i];
  }
  return pro;
}
int main(){
  int arr[]={1,2,3,4};
  int size=4;
   cout<<sum_arr(arr,size)<<endl;
   cout<<pro_arr(arr,size)<<endl;
 
}
