/*
 *hello.c by Ben
 *9/6/24
 *Greets the world
 */

#include <stdio.h>
#include <cs50.h>
int main(void)
{
    string name = get_string("Name: ");
    int age = get_int("Age: ");
    string phone = get_string("Phone Number: ");
    printf("Hello, %s!\nYou are %i years old\nYour phone number is %s\n" , name , age , phone);
}
