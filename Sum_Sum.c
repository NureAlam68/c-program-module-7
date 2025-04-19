#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    int A[N];
    int pos_sum = 0;
    int neg_sum = 0;
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
        if (A[i] > 0)
        {
            pos_sum += A[i];
        }
        else if (A[i] < 0)
        {
            neg_sum += A[i];
        }
    }
    printf("%d %d", pos_sum, neg_sum);
    return 0;
}