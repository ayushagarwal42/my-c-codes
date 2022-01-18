#include<stdio.h>
int a[10],b[10],c[10],d[10],i,j,k=0,n,m,f=0;
void Union()
{
for(i=0;i<n;i++)
{
c[k]=a[i];
k++; }
for(i=0;i<m;i++)
{
f=0;
for(j=0;j<n;j++)
{
if(b[i]==a[j])
{
f=1;
break;
}
}
if(f==0)
{
c[k]=b[i];
k++;
}
}
printf("\nUnion of sets:\n");
for(i=0;i<k;i++)
{
printf("%d ",c[i]);
}
}
void intersection()
{
printf("\nIntersection of sets:\n");
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
if(a[i]==b[j])
printf("%d ",a[i]);
}
}
}
void difference()
{
printf("\n(A-B):\n");
for(i=0;i<n;i++)
{
f=0;
for(j=0;j<m;j++)
{
if(a[i]==b[j])
{
f=1;
break;
}
}
if(f==0)
printf("%d ",a[i]);
}
printf("\n\n(B-A):\n");
for(i=0;i<m;i++)
{
f=0;
for(j=0;j<n;j++)
{
if(b[i]==a[j])
{
f=1;
break;
}
}
if(f==0)
printf("%d ",b[i]);
}
}
void symmetric_difference()
{
k=0;
for(i=0;i<n;i++)
{
f=0;
for(j=0;j<m;j++)
{
if(a[i]==b[j])
{
f=1;
break;
}
}
if(f==0)
{
d[k]=a[i];
k++;
}
}
for(i=0;i<m;i++)
{
f=0;
for(j=0;j<n;j++)
{
if(b[i]==a[j])
{
f=1;
break;
}
}
if(f==0)
{
d[k]=b[i];
k++;
}
}
printf("Symmetric difference of sets:");
printf("\n{(A-B)U(B-A)}:\n");
for(i=0;i<k;i++)
{
printf("%d ",d[i]);
}
}
int main()
{


printf("................................................................................<<<DISCRETE MATHEMATICS LAB>>>...................................................................................\n");
printf("Programmed by : AYUSH AGARWAL\n                CSE-1\n                         ROLL NO: 1901430100051\n");


printf ("................................PROGRAM TO PERFORM SETS OPERATIONS...................................\n");
printf("Enter the no. of elements in set A:\n");
scanf("%d",&n);
printf("Enter the elements of set A:\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("Enter the no. of elements in set B:\n");
scanf("%d",&m);
printf("Enter the elements of set B:\n");
for(j=0;j<m;j++)
{
scanf("%d",&b[j]);
}
Union();
printf("\n");
intersection();
printf("\n");
printf("Difference of sets:\n");
difference();
printf("\n");
symmetric_difference();
printf("\n");
return 0;
}
