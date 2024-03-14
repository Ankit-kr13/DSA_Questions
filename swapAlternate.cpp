#include<iostream>
using namespace std;

void printArray(int arr[] , int n ){
    for( int i = 0; i <n; i++ ){
        cout<<arr[i]<<" ";
}cout<<endl;
}

void swapAlternate(int arr[], int size){
    for(int i=0; i<size; i=i+2){
        if( i+1<size){
        swap(arr[i], arr[i+1]);}
}
}
int main()
{
    int evenArr[8]={2,5,6,7,8,3,9,5};
    int oddArr[5]={5,8,1,4,3};
    
    swapAlternate(evenArr,8);
    printArray(evenArr,8);

    cout<<endl;

    swapAlternate(oddArr,5);
    printArray(oddArr,5);



 return 0;
}