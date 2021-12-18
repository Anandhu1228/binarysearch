#include<stdio.h>
int readnumbers(int [],int);
int sort(int [],int);
int swapnumber(int *,int *);
int printaftersort(int [],int);
int binarysearch(int [],int);




int main()
{
    int a[100],n;
    printf("\nEnter the no: of numbers : \t");
    scanf("%d",&n);
    
    readnumbers(a,n);
    sort(a,n);
    printaftersort(a,n);
    binarysearch(a,n);
}

int readnumbers(int a[],int n)
{
    int i;
    printf("\nEnter %d numbers :\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
}

int sort(int a[],int n)
{
    int i,j;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                swapnumber(&a[j],&a[j+1]);
            }
        }
    }
}

int swapnumber(int *a,int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int printaftersort(int a[],int n)
{
    int i;
    printf("\nThe order of %d number after getting sorted is: \t",n);
    for(i=0;i<n;i++)
    printf("\n%d",a[i]);
    
    
}

int binarysearch(int a[],int n)
{
    int first,last,mid,key;
    first = 0;
    last = n-1;
    mid = (first+last)/2;
    printf("\nEnter the number to be searched: \t");
    scanf("%d",&key);
    while(first<=last)
    {
        if(key>a[mid])
        first = mid+1;
        else if(a[mid]==key)
        {
            printf("\n%d is found at %d position among the sorted list",key,mid+1);
            break;
        }
         else
         last = mid-1;
         mid = (first+last)/2;
    }   
    if(first>last)
    printf("\n%d is not found among the sorted list",key);
    return 0;
}
