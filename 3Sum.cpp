#include<iostream>
using namespace std;
int main(){
    int K;
    cout<<"Enter the Value of K"<< " " << endl;
    cin>>K;
    int arr[7] = { 4,5,6,3,2,8,9};
    int size = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0 ; i<size; i++){
        for(int j=i+1; j<size; j++){
            for(int k= j+1; k<size;k++){
                if(arr[i]+arr[j]+arr[k] == K)
                cout<<"The Triplet is " << arr[i] << " ," << arr[j] << " ," << arr[k] << endl; 
            }
        }
    }
    return 0;
}