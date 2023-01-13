#include<stdio.h>
#define max 30
struct bitmap
{
 int free;
 int bit_vector;
}page[max];
int main()
{
 int i,n,m,j,allocated[max];
 printf("Enter the number of pages:");
 scanf("%d",&n);
 printf("Enter the pages:");
 for(i=0;i<n;i++)
 {
 scanf("%d",&page[i].free);
 page[i].bit_vector=0;
 }
 printf("Enter the number of occupied pages:");
 scanf("%d",&m);
 printf("Enter the page number of occupied pages:");
 for(i=0;i<m;i++)
 {
 scanf("%d",&allocated[i]);
 }
 for(i=0;i<m;i++)
 {
 for(j=0;j<n;j++)
 {
 if(page[j].free==allocated[i])
 {
 page[j].bit_vector=1;
 }
 }
 }
 printf("\n");
 for(i=0;i<n;i++)
 {
 printf("%d ",page[i].bit_vector);
 } }
