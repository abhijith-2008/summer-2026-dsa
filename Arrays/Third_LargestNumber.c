#include <stdio.h>
#include <limits.h>

int main()
{
    int arr[] = {7, 2, 9, 1, 5, 8, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    int m1 = INT_MIN;
    int m2 = INT_MIN;
    int m3 = INT_MIN;

    for(int i = 0; i < n; i++)
    {
        if(arr[i] > m1)
        {
            m3 = m2;
            m2 = m1;
            m1 = arr[i];
        }
        else if(arr[i] > m2 && arr[i] != m1)
        {
            m3 = m2;
            m2 = arr[i];
        }
        else if(arr[i] > m3 && arr[i] != m2 && arr[i] != m1)
        {
            m3 = arr[i];
        }
    }

    printf("Largest = %d\n", m1);
    printf("Second Largest = %d\n", m2);
    printf("Third Largest = %d\n", m3);

    return 0;
}