#include <stdio.h>
#include <stdlib.h>
int getrandom(int,int);
int main(){
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
    return 0;
}

int getrandom(int min, int max){
    return min + rand() % max;
}
