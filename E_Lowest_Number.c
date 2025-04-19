// Given a number N and an array A of N numbers. Print the lowest number and its position.
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int min = arr[0];
    int pos = 1;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
            pos = i + 1;
        }
    }
    printf("%d %d", min, pos);
    return 0;
}