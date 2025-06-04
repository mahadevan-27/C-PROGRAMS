//To check whether the given number is palindrome number or not;

#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,m;
    char a[10],b[10];
    scanf("%s",a);
    for(i=0;a[i]!='\0';++i)
    m=i;
    for(i=m,j=0;i>=0;i--,j++)
    {
        b[j]=a[i];
    }
    for(i=0;i<=m;i++)
    {
        if(a[i]!=b[i])
        {
          break;   
        }
      }  if(i-1==m)
        printf("the  given number is palindrome");
        else
        printf("the given number is not a palindrome");
    
}