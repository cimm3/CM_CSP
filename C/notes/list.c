#include <stdio.h>
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



    return 0;
}