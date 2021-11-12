#include <stdio.h>
//Test bai 2
float average(int s[],int n)
{
    int sum = 0;
     for(int i = 0; i <n;i++)
    	{
      	 sum  = sum + s[i];
   		}
   	return (float) sum/n;   
}

int main()
{
    int n;
    printf("\nEnter array: ");  
    scanf("%d",&n);
    int a[n];
    for(int i = 0; i <n;i++)
    {
		scanf("%d",&a[i]);
    }
    printf("Average: %f",average(a,n));  
    return 0;
}
