#include <stdio.h>
//Test bai 1
int main()
{
    int n;
    printf("Enter Numbers: ");  
    scanf("%d",&n);
    int a[n];
    for(int i = 0; i <n;i++)
  	{    
		printf("Phan tu %d:",i);
		scanf("%d",&a[i]);
    }
    int sochan = 0;
    for(int i = n-1; i >= 0;i--)
    {
    	if(a[i]%2==0)
    	{
        	sochan=a[i];
			printf("\nLast Even Number is:%d",sochan);
        	break;
    	}
    	if(i==0)
    	{
        printf("No Even Number");
        break;
    	}
    } 
    return 0;
}
