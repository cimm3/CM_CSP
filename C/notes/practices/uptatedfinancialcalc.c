#include <stdio.h>
#include <math.h>

float percent( float cost, float income){
    return (cost/income) *100;
  
}
  float income;
    float rent;
    float utilities;
    float groceries;
    float transportation;
    float savings;
    float spending;
float question(char* question){
    float total;
    printf("What is your monthly on %s: $", question);
    scanf("%f", &total);
    return total;
}


int main(){
    question("income");
    printf("%.2f\n", income);
    question("rent/mortage");
    question("utilitities");
    question("groceries");
    question("transpottaion");
    savings = income * 0.10;
    spending = income - (rent + utilities + groceries + transportation + savings);

     printf("Your rent is %.f%% of your income.\n", percent(rent, income));
    printf("Your utilities is %.f%% of your income.\n", percent(utilities, income));
    printf("Your groceries is %.f%% of your income.\n", percent(groceries, income));
    printf("Your transportation is %.f%% of your income.\n", percent(transportation, income));
    printf("You should save $%.2f a month, that is 10%% of your income.\n", savings);
    printf("You have $%.2f of spending money each month!\n", spending);


return 0;
}
