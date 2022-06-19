#include<stdio.h>

int main(){
    int n=0;
    int arr[n];
    int a=1;

    while(a){
        int cmd;
        printf("SELECT NUMBER : insert-1/delete-2/update-3/search-4/traverse-5/end-6:");
        scanf("%d",&cmd);
        switch (cmd)
        {
        case 1:
            n++; 
            arr[n];
            int num1;
            printf("Enter number: ");
            scanf("%d",&num1);
            arr[n-1] = num1;
            break;

        case 2:
            int num2;
            printf("Enter index: ");
            scanf("%d",&num2);
            if(num2<n){
            for(int i=num2; i<n-1; i++){
            arr[i] = arr[i+1];
            }
            n--;
            arr[n];
            }
            else{
                printf("Index doesn't exist.\n");
            }
            break;

        case 3:
            int num3, x;
            printf("Enter index: ");
            scanf("%d",&num3);
            printf("Enter number: ");
            scanf("%d",&x);
            arr[num3] = x;
            break;

        case 4:
            {int num4;
            int t=1;
            printf("Enter number: ");
            scanf("%d",&num4);
            for(int i=0; i<n; i++){
                if(arr[i]==num4){
                    printf("Number found\nINDEX = %d\nNUMBER = %d\n",i,arr[i]);
                    t=0;
                }
            }
            if(t){
                printf("Number doesn't exist in array.\n");
            }
            break;
            }
        case 5:
            for(int i=0; i<n; i++){
                printf("%d - %d\n",i,arr[i]);
            }
            break;

        case 6:
            a=0;
            break;
    
        default:
            printf("Please enter a valid command.\n");
        }
    }
    return 0;
}