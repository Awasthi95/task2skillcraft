#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int number_to_guess,guess;
    srand(time(0));
    number_to_guess=rand()%100+1;
    printf("Guess the number\n");
    printf("try to guess number between 1 and 100 which i have think");
    do {
        printf("enter your guess");
        scanf("%d", &guess);
        if(guess<number_to_guess){
            printf("incorrect guess try again");
        }
        else if(guess>number_to_guess){
            printf("incorrect guess try again");
        }
        else {
        printf("congratulatios correct guess");
    }}
    while(guess!=number_to_guess);
    return 0;
}