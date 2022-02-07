#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int passwordgenerator(int pl){
char list[]="1234567890abcdefghijklmnopqrstuvwxydABCDEFGHIJKLMNOPQRSTUVWXYZ!@#$^&*()<>?";
printf("\t");
printf("\n\t");
srand(time(NULL));
for(int i=0;i<pl; i++) {
    printf("%c", list[rand() % (sizeof list - 1)]);
}
printf("\n\t");
}
int main(){
int pl,p;
printf("\n\t*********************************\n\n");
printf("\tWelcome to the Password Generator \n\n");
printf("\t*********************************\n");
printf("\n\tEnter length of the Password (Ideal length of Password is 12)= ");
scanf("%d", &pl);
while(pl<5||pl>20){
    if(pl<5){
        printf("\n\tPassword length is too small to use");
        printf("\n\tEnter length of the Password (It should be between 5 to 20)= ");
        scanf("%d", &pl);
    }
    else if(pl>20){
        printf("\n\tPassword length is too big to use");
        printf("\n\tEnter length of the Password (It should be between 5 to 20)= ");
        scanf("%d", &pl);
    }
}
if(pl>=5&&pl<=20){
    printf("\n\tRequest Accepted");
    printf("\n\tPassword Generated\n");
    passwordgenerator(pl);
    scanf("%d", &p);
}

return 0;
}