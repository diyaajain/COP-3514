#include<stdio.h>
void find_parity(int *a, int n, int *all_even, int *all_odd);
int main()
{
    int n;
    int even=0;
    int odd=0;
    int i;
    printf("Enter the length of the input array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the array elements: ");
    for (i = 0; i<n; i++)
    {
    scanf("%d", &arr[i]);
    }

    find_parity(arr,n, &even, &odd);
 
    if (even == 1 && odd == 0 )
    {
        printf("Output: good, all elements are even \n");
    }
    if (even == 0 && odd == 1)
    {
        printf("Output: good, all lements are odd \n");
    }
    if (even == 1 && odd == 1)
    {
        printf("Output: not good \n");
    }
return 0;
}
void find_parity(int *a, int n, int *all_even, int *all_odd)
{
    int *p;   
    for (p = a; p < a+n; p++)
    {
        if((*p % 2) == 0)
        {   
            *all_even = 1;
        }
        if ((*p % 2) != 0){
            *all_odd = 1;
        }
    }
    if (*all_even == 1 && *all_odd == 0 )
    {
        printf("Output: good, all elements are even \n");
    }
    if (*all_even == 0 && *all_odd == 1)
    {
        printf("Output: good, all lements are odd \n");
    }
    if (*all_even == 1 && *all_odd == 1)
    {
        printf("Output: not good \n");
    }
}