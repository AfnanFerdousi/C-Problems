#include <stdio.h>
int func(int t)
{
    int num[t];
    int k, count = 0;
    for (int i = 0; i < t; i++)
        scanf("%d", &num[i]);

    scanf("%d", &k);

    for (int i = 0; i < t; i++)
        if (num[i] > k || num[i] < k)
            count++;

    printf("%d", count);
}
int main()
{
    int t;
    scanf("%d", &t);
    func(t);
    return 0;
}