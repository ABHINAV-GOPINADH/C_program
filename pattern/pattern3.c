 #include<stdio.h>
 int main()
 {
    int i,j,n;
    printf("enter the number : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=n;j>=0;j--)
        {
            if(i<j)
            {
                printf("  ");
            }
            else
            {
                printf("* ");
            }
        }
        printf("\n");
    }
 }