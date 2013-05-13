#include<stdio.h> 
int main() 
{ 
int a[500],i; 
for(i=0;i<100;i++) 
scanf("%d",&a[i]); 
for(i=0;i<100;i++) 
{ 
if(a[i]==42) 
break; 
else printf("%d\n",a[i]); 
} 
return 0;}





