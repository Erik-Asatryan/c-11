// CPP program to find the most frequent element
// in an array.
#include <bits/stdc++.h>
using namespace std;
 
int mostFrequent(int* arr, int n)
{
    // code here
    int maxcount = 0;
    int popul_elem,f=0;
    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j]){
              count++;
            }
        }
        if (count > maxcount) {
            maxcount = count;
            popul_elem = arr[i];
        }
    }
    return popul_elem;
}
int main()
{   
    int n;
    cin >> n;
    int arr[n] ;
   for (int i =0;i < n; i++)
     cin >> arr[i];
    cout << mostFrequent(arr, n);
    return 0;
}