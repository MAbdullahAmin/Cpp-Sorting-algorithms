#include <iostream>
using namespace std;
int main (){
    int arr[10]={7,4,9,10,2,1,3,5,6,8};
    int size=10;
    for (int i=0;i<size-1;i++){
        int minindex=i;
        for(int j=i+1;j<size;j++){
            if(arr[minindex]>arr[j]){
                minindex=j;
            }
            int temp=arr[i];
            arr[i]=arr[minindex];
            arr[minindex]=temp;
        }
    }
cout<<"SELECTION SORTING"<<endl;
for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
}
return 0;
}