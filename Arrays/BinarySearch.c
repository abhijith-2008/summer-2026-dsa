#include <stdio.h>

int main()
{
    int n;

    printf("Enter size of array: ");
    scanf("%d",&n);

    int arr[n];

    printf("Enter elements in sorted order:\n");

    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    int target;

    printf("Enter element to search: ");
    scanf("%d",&target);

    int low=0;
    int high=n-1;
    int found=0;

    while(low<=high)
    {
        int mid=(low+high)/2;

        if(arr[mid]==target)
        {
            printf("Element found at index %d",mid);

            found=1;

            break;
        }

        else if(target > arr[mid])
        {
            low=mid+1;
        }

        else
        {
            high=mid-1;
        }
    }

    if(found==0)
    {
        printf("Element not found");
    }

    return 0;
}