// CM, time of day C
#include <stdio.h>
#include <strings.h>
#include <stdbool.h>
int main(){
    int time;

printf("What time is it in military time: ");
scanf("%d", time);
if (time >= 6){
    printf("Why are you awakeeeee! Go to sleep!");
}else if (time <= 12){
    printf("Good morning twin!");
}else if(time <= 20){
    printf("Good afternoon!");
}else{
    printf("You should get some sleep good night gang!");
} 
return 0;
}


