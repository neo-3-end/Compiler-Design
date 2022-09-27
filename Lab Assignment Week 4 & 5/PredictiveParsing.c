#include<stdio.h>
#include<string.h>
#include<ctype.h>

char input[10];
int i, error;
void S();
void L();
void Lprime();

int main(void){
    i = 0;
    error = 0;
    printf("Enter an arithmetic expression: ");
    gets(input);
    S();
    if(strlen(input) == i && error == 0)
        printf("\nAccepted...!!\n");
    else
        printf("\nRejected..!!\n");
}
void L(){
    S();
    Lprime();
}
void Lprime(){
    if(input[i] == ','){
        i++;
        S();
        Lprime();
    }
}
void S(){
    if(input[i] == 'a'){
        i++;
    }
    else if(input[i] == '('){
        i++;
        L();
        if(input[i] == ')')
            i++;
        else
            error = 1;
    }
    else{
        error = 1;
    }
}