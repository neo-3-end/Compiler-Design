#include<stdio.h>
#include<string.h>


void main(){
    char input[20];
    printf("Enter input string : ");
    scanf("%s", input);
    int i = 0, count = 0;
    while(input[i] != '\0'){
        count = count + 1;
        i++;
    }
    if(input[count - 1] == input[count - 2]){
        printf("String Accepted\n");
    }
    else{
        printf("String not Accepted\n");
    }
}