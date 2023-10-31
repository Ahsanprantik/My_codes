 #include <stdio.h>
 int main()
{
    int ara[]={1, 4, 6, 8, 9, 11, 14, 15, 20, 25, 33, 83, 87, 97, 99, 100};
    int mid_index, low_index=0, high_index=15, num;
    scanf("%d", &num);
    while(low_index<=high_index)    {
            mid_index=(low_index+high_index)/2;
        if(num==ara[mid_index]) {
            break;
        }
        else if(num<ara[mid_index]) {
            high_index=mid_index-1;
        }
        else {
            low_index=mid_index+1;
        }
    }
    if(low_index>mid_index) {
        printf("The number is not in the array");
    }
    else if(mid_index==0)    {
        printf("The number is in the %dst entry in the array", mid_index+1);
    }
    else if(mid_index==1)    {
        printf("The number is in the %dnd entry in the array", mid_index+1);
    }
    else {
        printf("The number is in the %dth entry in the array", mid_index+1);
    }
}
