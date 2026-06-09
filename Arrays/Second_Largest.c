#include <stdio.h>
#include <limits.h>

int main()
{
    int arr[] = {1,4,3,6,5};
    int n = 5;

    int max = INT_MIN;
    int sec_max = INT_MIN;

    for(int i=0;i<n;i++)
    {
        if(arr[i] > max)
        {
            sec_max = max;
            max = arr[i];
        }
        else if(arr[i] > sec_max && arr[i] != max)
        {
            sec_max = arr[i];
        }
    }

    printf("Largest = %d\n", max);
    printf("Second Largest = %d\n", sec_max);

    return 0;
}