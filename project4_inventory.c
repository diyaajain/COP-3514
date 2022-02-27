#include <stdio.h>
int find_minimum(int *a, int n);

int find_minimum(int *a, int n)
{
    int *p;  
    int minimum = a
    *minimum = *a;
    for (p = a; p < a+n; p++)
    {
        if (*p(a+n) <= *p(a+n+1))
        {
            printf("working");
            minimum = *p;
        }
        else
        {
            continue;
        }
    }
    return minimum;
}

int main(){
    int N;
    int K;
    int i,j;
    int freq[10000]={0};
    int size, count;
    printf("Enter number of parts (N): ");
    scanf("%d", &N);
    if (N<1 || N>1000000){
        printf("Must be in the range [1,1000000] \n");
        return 1;
    }
    printf("Enter number of part types (K): ");
    scanf("%d", &K);
    if (K<1 || K>10000){
        printf("Invalid number of part types %d \n", K);
        printf("Must be in the range [1,10000]\n");
        return 1;
    }
    int part_list[N];
    printf("Enter part list: \n");
    for (i = 0; i<N; i++)
    {
    scanf("%d", &part_list[i]);
    for(i=0; i<N; i++)
    {
        count = 1;
        for(j=i+1; j<N; j++)
        {
            if(part_list[i] == part_list[j]){
                count++;
                freq[j] = 0;
            }
        }
        if(freq[i] != 0)
        {
            freq[i] = count;
        }
        printf("\nFrequency of all elements of array : \n");
    for(i=0; i<N; i++)
    {
        if(freq[i] != 0)
        {   
            printf("woring");
            printf("%d occurs %d times\n", part_list[i], freq[i]);
        }
    }
    }
    }
    printf("The factory can build %d computer(s)",find_minimum (freq,K));
    return 0; 
}