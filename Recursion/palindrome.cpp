#include<iostream> 
using namespace std;
bool ispalindrome(string input[], int size){
    if(size==0 || size==1){
        return true;
    }
    if(input[0]!=input[size-1]){
        return false;
    }
    bool isSmallerArrayPalindrome=ispalindrome(input+1,size-2);
    return isSmallerArrayPalindrome;
}
int main(){
    int n;
    cin >> n;
  
    string *input = new string[n];
    
    for(int i = 0; i < n; i++) {
        cin >> input[i];
    }
    if(ispalindrome(input,n)){
        cout<<"true"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }
}