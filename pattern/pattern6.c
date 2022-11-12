 #include<stdio.h>
 int main()
 {
    int i,j,n,m;
    printf("enter the number : ");
    scanf("%d",&n);
    m=(n*2)/2;
    for(i=0;i<n;i++)
    {
        for(j=(2*n+1);j>=0;j--)
        {
            if(m-i<=j && m+i>=j)
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