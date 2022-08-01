#include <stdio.h>
#include <stdlib.h>
int getrandom(int,int);
int main(){
    char name[100];
    printf("Who are you?\n");
    scanf("%s",name);
    printf("Hello,%s!\n",name);
    int num;
    int head = 0, tail = 0;
    for(int i = 1; i < 4; i++){
        num = getrandom(0,2);
        if(num == 0){
            printf("Round %d:Heads\n",i);
            head++;
        }else{
            printf("Round %d:Tails\n",i);
            tail++;
        }
    }
    printf("Heads:%d Tails:%d\n",head,tail);
    if(head > tail){
        printf("You won\n");
    }else{
        printf("You lost");
    }
    return 0;
}

int getrandom(int min, int max){
    return min + rand() % max;
}
