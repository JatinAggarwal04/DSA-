#include<iostream>
using namespace std;
int first_index(int arr[],int x, int size){
    if(size==0){
        return -1;
    }
    
    if(arr[0]==x){
        return 0;
    }
        int k=first_index(arr+1,x,size-1);
            if(k==-1){
                return -1;
            }
            else{
                return k+1;
            }
    }

int main(){
    int n;
    cin >> n;
  
    int *input = new int[n];
    
    for(int i = 0; i < n; i++) {
        cin >> input[i];
    }
    
    int x;
    
    cin >> x;
    
    int k=first_index(input,x,n);
    cout<<k;

}
