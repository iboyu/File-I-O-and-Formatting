#include<stdio.h>
#include<stdlib.h>
#define SIZE 50
char getChar(char);

int main(){
    int input,index;
    char inBuf[SIZE],answer[SIZE];

    do{
    printf("——————Encoding an integer——————\n");
    printf("Please, enter an integer ranging from [1-99999]: ");
    fgets(inBuf, SIZE, stdin);
    sscanf(inBuf,"%d",&input);
    if(input < 1 || input > 99999){
        printf("Out of range.\n");
    }
    }while(input < 1 || input > 99999);

    sprintf(inBuf,"%d",input);

    for(index = 0; inBuf[index] != '\0'; index++){
        char result = getChar(inBuf[index]);
        printf("%c",result);
    }
        printf("\n");

    return 0;
}

char getChar(char digit){
    char answer;
    if(digit == '0'){
        answer = 'A';
    }
    else if(digit == '1'){
        answer = 'E';
    }
    else if(digit == '2'){
        answer = 'I';
    }
    else if(digit == '3'){
        answer = 'O';
    }
    else if(digit == '4'){
        answer = 'U';
    }
    else if(digit == '5'){
        answer = 'Z';
    }
    else if(digit == '6'){
        answer = 'P';
    }
    else if(digit == '7'){
        answer = 'T';
    }
    else if(digit == '8'){
        answer = 'B';
    }
    else if(digit == '9'){
        answer = 'Q';
    }
    return answer;
}