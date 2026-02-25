// CM #3 silly sentences

# include <stdio.h>
#include <string.h>
int main(){
 char person[60]; 

 char person2[100];

 char thing[60]; 

 char noun[60];

 char noun2[60];

 char noun3[60];
printf("Give me a name \n");
scanf("%s", person);

printf("Give me another name \n");
scanf ("%s", person2);

printf("Give me a thing \n");
scanf("%s", thing); 

printf("Give me a noun \n");
scanf("%s", noun);

printf("Give me a noun \n");
scanf("%s", noun2);

printf("Give me a noun \n");
scanf("%s", noun3);
char persons[50];
strcat(person, " ");
strcat(person, person2);
printf("%s", person);
printf(" decided to go to the beach. Firts, they swam in their %s. Then, they saw %s and %s. Lastly, they built a snadcastle out of %s.", person2 ,thing, noun, noun2, noun3);

return 0;
}