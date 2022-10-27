#include<iostream>
using namespace  std;
int main (){
   int siz , count=0;
   double* limit;
   cout << "size=";cin >> siz;
   double*A = new double[siz];
   cout << "enter "<< siz <<"elements "<<"\n";
   for (int i =0;i< siz;i++){
      cin >> A[i] ;
   }
      for (int i =0;i< siz;i++){{
         if (A[i]<0)
         {
            for (int j = i;j > count; j--)
               swap(A[j],A[j-1]);
               count++;  
         }
      }
   }
   for (int i =0;i<siz;i++){
           cout << A[i]<<" ";
           //scout << endl;
   }
        delete[]A;                   
}
