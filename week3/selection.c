#include<stdio.h>
void selection_sort(int a[100],int n)
{
           int i,j,t,min;
           for(i=0;i<n;i++)
          { 
                       min=i;
                       for(j=i+1;j<n;j++)
                       {
                                   if(a[j]<a[min])
                                   min=j
                        }
                         t=a[i];
                         a[i]=a[i+1];
                         a[min]=t;                                                         
           }
}
int main()
{
           int n,i,res;
           scanf("%d",&n);
           int a[n];
           for(i=0;i<n;i++)
           {
                       scanf("%d",&a[i]);
            }
            selection_sort(a,n);
            printf("Elements after sorting:");
            for(i=0;i<n;i++)
            {
                        printf("%d\n",a[i]);
             }
}
  