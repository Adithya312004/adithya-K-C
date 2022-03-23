#include<stdio.h>
int main()
{
int a[20],n,i,j,temp,key,first,last,mid;
printf("enter n");
scanf("%d",&n);
printf("enter %d no of elements\n",n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("unsorted array\n");
for(i=0;i<n;i++)
{
printf("%d\n",a[i]);
}
for(i=0;i<n-1;i++)
{
for(j=0;j<n-i-1;j++)
{
if(a[j]>a[j+1])
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}
}
printf("sorted array\n");
for(i=0;i<n;i++)
{
printf("%d\n",a[i]);
} 
first=0;
last=n-1;
printf("enter key\n");
scanf("%d",&key);
while(first<=last)
{
mid=(first+last)/2;
if(key==a[mid])
{
printf("%d found at %d",key,mid+1);
return 1;
}
else if(key<a[mid])
{last=mid-1;
}
else
{
first=mid+1;
}
}
printf("%d not found\n",key);
return 0;
}
