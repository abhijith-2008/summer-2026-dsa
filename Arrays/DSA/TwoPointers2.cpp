#include <iostream>
using std::cout;
int main(){
int arr[5]={1,2,3,4,5};
int l=0;
int r=4;
while (l<r){
    int temp=arr[l];
    arr[l]=arr[r];
    arr[r]=temp;
    l++;
    r--;

}
for (int i=0;i<5;i++){
    cout << arr[i];
}

}