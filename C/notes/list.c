#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// arrays = list
int main(){
    // example 1
    int grades[] = { 74, 88, 95, 87, 98};
    printf("%d\n", grades[2]);
    // exapmle 2
    float sizes[] = {3.57, 24.95, 36.1, 5.99};
    // change item in list
    printf("%.2f\n", sizes[0]); 
    sizes [0] = 10.45;
    printf("%.f\n", sizes[0]);
// example 3 strings
    char names[][20] = {"alex", "katie", "andrew", "vienna", "tia", "Treyson" "Xavier", "jake"}; // second bracket is max characters in string
   
    printf("%s\n", names [5]);

 // for lopop exple 1
    for (int i = 20; i >= 0; i--){
        printf("%d ", i);
    }

    // for loop exapmle ; guessing a random nmber
    srand(time(NULL));
    int guess = 0;
    for(int num = rand() %20 +1;num != guess; num = num ){
        printf("Guess a number from 1 and 20: ");
        scanf("%d", &guess);
        if(guess == num){
            printf("Ypu won\n");
        }else if (guess < num){
            printf("Guess is too lowe! \n");
        }else{
            printf("Your guess is too high\n");
        }

    }
    printf("Game over\n");

    // for loop example 3
    int lenght = sizeof(names)/ sizeof(names[0]);
    
    for(int x = 0; x < lenght ; x++){
        printf("%s Larose \n", names[x]);
    }




    return 0;
}