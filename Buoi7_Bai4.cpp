#include <stdio.h>

int main()
{
    int n =0;
    
    while(n!=4)
    {             
        printf("1. Chon Mon An\n");
        printf("2. Goi Do Uong\n");
        printf("3. Thanh Toan\n");
        printf("4. Thoat Chuong Trinh\n");
        printf("Nhap Lua Chon Cua Ban:",n);
        scanf("%d",&n);
        
        if(n==1)
        {
        printf("Chon Mon An\n");
        printf("1. Com Ga\n");
        printf("2. Pho\n");
        printf("3. Bun\n");
        printf("4. Quay Lai\n");
        scanf("%d",&n);
        
        while(n>4 or n<0)
        {
        printf("Chon Mon An\n");
        printf("1. Com Ga\n");
        printf("2. Pho\n");
        printf("3. Bun\n");
        printf("4. Quay Lai\n");
        scanf("%d",&n);
        }
        printf("Cam On Ban\n");
        n=0;
        }
        
        if(n==2)
        {
        printf("Chon Do Uong\n");
        printf("1. Soda\n");
        printf("2. Pepsi\n");
        printf("3. Sting\n");
        printf("4. Coca\n");
        scanf("%d",&n);
        
        while(n>4 or n<0)
        {
        printf("Chon Do Uong\n");
        printf("1. Soda\n");
        printf("2. Pepsi\n");
        printf("3. Sting\n");
        printf("4. Coca\n");
        scanf("%d",&n);
        
        }
        printf("Cam On Ban\n");
        n=0;
        }
        
        if(n==3)
        {
        printf("So tien ban can thanh toan:\n");
        printf("Thank you\n");
        n=0;
        }      
    }
    return 0;
}
