#include <stdio.h>
#include <cs50.h>

int main(void){
    float bill = get_float("how much is your bill?\n");
    int party = get_int("how many people are in your party?\n");
    float owed = bill/party;
    printf("each person owes $%.2f\n", owed);
}
