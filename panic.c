#include <stdio.h>
int main()
{
    int item_price;
    int units;
    int mon_amount;
    int dif;
    int i;
    int mon_2pay = 0;
    printf("Enter item price: ");
    scanf("%d", &item_price);
    if(item_price<=0){
        printf("Invalid item price %d \n",item_price);
        printf("Item price should be greater than 0.");
        return 1;
    }
    printf("Enter number of units: ");
    scanf("%d", &units);
    if (units <=0 ){
        printf("Invalid number of units %d \n",units);
        printf("Number of units should be greater than 0.");
        return 1;
    }
    printf("Enter money amount: ");
    scanf("%d", &mon_amount);
    if (mon_amount<0){
        printf("Invalid money amount %d\n",mon_amount);
        printf("Money amount must be greater than or equal to 0");
        return 1;
    }
    if (units >=1){
        for(i=0; i<=units ; i++){
            mon_2pay = mon_2pay + (item_price*i);
        }
        dif = mon_2pay - mon_amount;
    if (dif<=0) {
        printf("Has enough money.");
    }
    else if (dif<= mon_2pay ){
        printf("Needs %d dollar(s) to complete the purchase!", dif);
    }
    

    }

return 0;
}