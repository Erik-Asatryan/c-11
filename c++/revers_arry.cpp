#include <iostream>
using namespace std;
 
void reverse(int* A, int n, int k)
{
    for (int i = 0; i < n; i += k)
    {
        int left = i;
        int right = min(i + k - 1, n - 1);
        while (left < right)
            swap(A[left++], A[right--]);
    }
}
 
// Driver code
int main()
{
    int siz;
    cin >> siz;
    int arr[siz] ;
    for (int i =0;i < siz; i++)
         cin >>arr[i];

    int k = 3;
    int n = sizeof(arr) / sizeof(arr[0]);
    reverse(arr, n, k);
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
                 arr[i]= arr[n-1];
         n --;
    }
    return 0;
}