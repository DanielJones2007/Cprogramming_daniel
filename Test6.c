#include<stdio.h>
void remote (char action){
if (action=='a'){
printf("volume up\n");
}
else if (action=='b'){
printf("volume down\n");
}
else if (action=='c'){
printf("volume down\n");
}
else if (action=='d'){
printf("channal up\n");
}
else if (action=='c'){
printf("channal up\n");
}
else if (action=='e'){
printf("power on\n");
}
else if (action=='f'){
printf("power off\n");
}
}
int  main()  
{
    char action;
    printf("Enter the action");
    scanf("%c",&action);
    remote(action);
    return 0;
}
