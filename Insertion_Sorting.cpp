#include <iostream>
using namespace std;
int main (){
    int arr[10]={7,4,9,10,2,1,3,5,6,8};
    int size=10;
    for (int i=1;i<size;i++){
        int key=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
}
cout<<"INSERTION SORTING"<<endl;
for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
}
return 0;
}