#include<iostream>
using namespace std;
/*Given a sequence of non-negative integers 1,2,3,...,N. You must
 first reverse part of this sequence from element number A to element 
 number B, and then from C to D.
Input
In the input stream, a single line contains space-separated numbers 
N (1≤N≤1000), A, B, C, D (A<B; C<D; 1≤A, B, C, D≤N).*/
int main(){
int size ;
int  arr[5];
for (int i = 0 ; i < 5;i++){
cin >> arr[i];  
}
int N=arr[0],A=arr[1]-1,B=arr[2]-1,C=arr[3]-1,D=arr[4]-1;
int arr2[N];
for (int i =0 ; i < N; i++){
     arr2[i]= i+1;
}
for (int i =0; i <((B - A +1)/2);i++){ //1 2 6 5 8 7 3 4 9 c
      swap(arr2[A+i],arr2[B-i]);
}
for (int i =0; i <((D - C +1)/2);i++){
      swap(arr2[C+i],arr2[D-i]);
}
for (int i =0 ; i < N; i++)
   cout << arr2[i]<<" ";
return 0;
}