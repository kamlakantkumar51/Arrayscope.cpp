#include<iostream>
using namespace std;
void update(int arr[],int n){
     arr[0]=120;
     for(int i=0;i<3;i++){
        cout<<arr[i]<<" ";
     }cout <<endl;
}
int main(){
    int arr[3]={2,4,6};
    update(arr,3);
    return 0;
}
