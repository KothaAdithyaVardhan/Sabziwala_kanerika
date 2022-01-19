#include <stdio.h>

int main()
{
    int n,i,max_weight,temp1=0,temp2;
    int weight[100],profit[100];
    float ppk[100]; //ppk - profit per kg

    //Input for number of Items
    printf("No. of items: ");
    scanf("%d",&n);
    printf("\n");

    //Input for weight of each item
    for(i=0;i<n;i++)
    {
        printf("Weight of item-%d: ",i+1);
        scanf("%d",&weight[i]);
    }
    printf("\n");

    //Input for maximum weight of items he can carry
    printf("Maximum weight that he can carry: ");
    scanf("%d",&max_weight);
    printf("\n");

    //Input for profit for each item
    for(i=0;i<n;i++)
    {
        printf("Profit in Rs. of item-%d: ",i+1);
        scanf("%d",&profit[i]);
    }
    printf("\n");

    //To find profit of each item for one kg
    for(i=0;i<n;i++)
    {
        ppk[i]=profit[i]/weight[i];
    }

    //To find which item will fetch him maximum profit
    temp2=ppk[0];
    for(i=0;i<n;i++)
    {
        if(temp2<ppk[i])
        {
            temp2=ppk[i];
            temp1=i;
        }
    }

    //To find the required output
    printf("%0.2f quantity of item-%d will fetch him the maximum profit which is equal to Rs.%0.2f/-",
            (float)max_weight/(float)weight[temp1],
            temp1+1,
            ((float)max_weight/(float)weight[temp1])*(float)profit[temp1]
            );

    return 0;
}
