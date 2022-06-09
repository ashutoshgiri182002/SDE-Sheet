/*
Sort two merge sorted array without using extra space

*/

#include<iostream>
#include<cmath>
#include<vector>
using namespace std;

void merge(int array1[], int array2[], int n, int m){
  //code here
  int gap = ceil((float)(n + m)/2);
  while(gap > 0){
    int i = 0;
    int j = gap;
    while(j < (n+m)){
      if(j < n and array1[i] > array1[j]){
        swap(array1[i],array1[j]);
      }
      else if(j >= n and i < n and array1[i] > array2[j-n]){
        swap(array1[i],array2[j-n]);
      }
      else if(j >= n and i >= n and array2[i-n] > array2[j-n]){
        swap(array2[i-n],array2[j-n]);
      }
      j++;
      i++;
    }
    if(gap == 1){
      gap = 0;
    }
    else{
      gap = ceil((float) gap / 2);
    }
  }
}


int main(){

 int arr1[] = {1,4,7,8,10};
 int arr2[] = {2,3,9};

 cout<<"Before merge :"<<endl;
 for(int i = 0;i<5;i++){
   cout<<arr1[i]<<" ";
 }
 cout<<endl;

 for(int i = 0;i<3;i++){
   cout<<arr2[i]<<" ";
 }
 cout<<endl;
 cout<<"After merge :"<<endl;

 merge(arr1,arr2,5,3);

 for(int i = 0;i<5;i++){
   cout<<arr1[i]<<" ";
 }
 cout<<endl;

 for(int i = 0;i<3;i++){
   cout<<arr2[i]<<" ";
 }


return 0;
}
