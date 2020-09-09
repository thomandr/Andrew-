#include <stdio.h>
#include <stdlib.h>
#include <time.h> //
int creditfun();
int betfun(int bank);
int rollfun(int wager);
int endfun(int remaining);
int main()
{
    int bank, wager, payout;
    int keep = 0;

    bank = creditfun();

    while(keep == 0){
    wager = betfun(bank);
    bank = bank - wager;

    payout = rollfun(wager);
    bank = bank + payout;

    keep = endfun(bank);
    if (keep == 1){
        break;}
    }
    return 0;
}
int creditfun(){
int credits = 0;
int cont = 0;

    printf("Welcome to The Dice Game \n please insert credits\n");
    while(cont == 0){
    scanf("%d", &credits);
    if(credits > 0){
    printf("Credits entered = %d\n", credits);
    cont = 1;
    }
    else
        printf("incorrect entry, Please enter the correct entry\n");
    }
    fflush(stdin);
        return credits;
}
int betfun(int bank){
    int wager = 0;
    int cont = 0;

    printf("please enter wager\n");
    while(cont == 0){
          scanf("%d", &wager);
    if(wager <= 0 || wager > bank)
        printf("incorrect entry, Please enter the correct entry\n");
    else{
        printf("Wager made is = %d\n", wager);
        cont = 1;
    }
    }
    return wager;
}
int rollfun(int wager){
    int playerroll = 0, comroll = 0;

srand(time(NULL));
 playerroll = 1 + rand()%6;
 comroll = 1 + rand()%6;
 printf("computer rolled a %d\nyou rolled a %d\n", comroll, playerroll);

 if(comroll == playerroll)
        return wager;
    else if(comroll > playerroll)
        return 0;
    else
        return (wager * 2);

}
int endfun(int remaining){
    int game = 0;
if (remaining == 0){
        printf("Insufficient funds game over!");
        return 1;
}
    printf("Remaining credits %d\nEnter 0 to keep playing or 1 to cash out\n", remaining);
    scanf("%d", &game);
    if (game == 1){
        printf("Money kept = %d", remaining);
        return 1;
    }

        else
            return 0;

}
