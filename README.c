# power2
#include<stdio.h> 
void main() 
{ 
int num, rem, temp=0; 
printf("\n Enter a Number: "); 
scanf("%d",&num); 
while(num>2) 
{ 
 rem=num%2; 
 if(rem==1) 
 { 
 temp=1; 
 break; 
 } 
else 
 num=num/2; 
} 
if(temp==1) 
 printf("\nNo is not Power of two."); 
else 
 printf("\nNo is Power of two"); 
} 
