// C++ program to demonstrate cin.get()
  
#include <iostream>
using namespace std;
  
int main()
{
    int siz, count =1;
    cout << "entr lenght in arr";
    cin >>siz;
    while (true){
     if (siz > 100){
    cout << "entr lenght in arr smol 100";
    cin >>siz;
    } else 
       break;
    }

   int a[siz];   
  for(int i =0;i < siz; i++){
      cin >> a[i];
    if (a[i] >a[i-1]){
      count++;
     // cout << count;
    }
 }
 cout << count;
    return 0;
}
