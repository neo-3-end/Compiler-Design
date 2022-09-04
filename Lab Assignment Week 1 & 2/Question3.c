#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    char current, input[20];
    int state = 0, i = 0;
    printf("Enter a string :- ");
    scanf("%s", input);
    for(i = 0; input[i] != '\0'; i++)
    {
        current = input[i];
        switch(state)
        {
            case 0:
                if(current == 'i'){
                    state = 1;
                }
                else if(current >= 'a' && current <= 'h'){
                    state = 4;
                }
                else if(current >= 'j' && current <= 'z'){
                    state = 4;
                }
                else if(current >= '0' && current <= '9'){
                    state = 5;
                }
                else{
                    printf("Error\n");
                    exit(0);
                }
                break;
            case 1:
                if(current >= 'a' && current <= 'e'){
                    state = 3;
                }
                else if(current >= 'g' && current <= 'z'){
                    state = 3;
                }
                else if(current >= '0' && current <='9'){
                    state = 3;
                }
                else if(current == 'f'){
                    state = 2;
                }
                else{
                    printf("Error\n");
                    exit(0);
                }
                break;
            case 2:
                if((current >= 'a' && current <='z') || (current >= '0' && current <= '9')){
                    state = 3;
                }
                else{
                    printf("Error\n");
                    exit(0);
                }
                break;
            case 3:
                if((current >= 'a' && current <='z') || (current >= '0' && current <= '9')){
                    state = 3;
                }
                else{
                    printf("Error\n");
                    exit(0);
                }
                break;
            case 4:
                if((current >= 'a' && current <='z') || (current >= '0' && current <= '9')){
                    state = 3;
                }
                else{
                    printf("Error\n");
                    exit(0);
                }
                break;
            case 5:
                if(current >= '0' && current <='9'){
                    state = 6;
                }
                else{
                    printf("Error\n");
                    exit(0);
                }
                break;
            case 6:
                if(current >= '0' && current <='9'){
                    state = 6;
                }
                else{
                    printf("Error\n");
                    exit(0);
                }
                break;
        }
    }
    if(state == 2){
        printf("Keyword\n");
    }
    else if(state == 5 || state == 6){
        printf("Number\n");
    }
    else if(state == 1 || state == 3 || state == 4){
        printf("Identifier\n");
    }
}