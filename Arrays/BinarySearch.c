#include <stdio.h>

int main() {
    int arr[]={1,2,3,4,5,6,7};
    int n=7;
    int low=0;
    int high=n-1;
    
    int target=10;
    while(low<=high){
        int mid=(low+high)/2;
        if(target==arr[mid]){
            printf("element found at index %d",mid);
            return 0;
        }
        else if(target>arr[mid]){
            low=mid+1;
            
        }
        else if(target<arr[mid]){
            high=mid-1;
            
        }
        
    }
    printf("Not Found");

    return 0;
}