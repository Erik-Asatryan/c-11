#include <iostream>
using namespace std;
int len(char  *text){
    int len=0;
    while (*text != '\0'){
        len++;
        *text++;
    }
    return len;
}
void revers(int l[] , int a,int b){
    while (a<b) {
        swap(l[a-1],l[b-1]);
        a++;
        b--;
    }
    

}

int main(){
    char str [100];
    int arr[100];
    cin.get(str,100);
    char *s = str;
    int k=0;
    int j=0;
    for (int i = 0; i < len(s); i++){
        while (!isspace(s[i]) && i<len(s)) {   
            k=k*10+int(s[i])-48;
            i++;
        }
        arr[j]=k;
        k=0;
        j++;
    }
    int rev[arr[0]];
    for (int i = 0; i < arr[0]; i++) {
        rev[i] = i+1;
    }
    revers(rev , arr[1],arr[2]);
    
    revers(rev , arr[3],arr[4]);
    for (int i = 0; i < arr[0]; i++) {
        cout<<rev[i]<<" ";
    }
    return 0;
}