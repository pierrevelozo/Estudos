#include <cs50.h>
#include <stdio.h>
#include <string.h>

typedef struct{
    string name;
    string number;
} person;

const int NUMBER = 2;

int main(void){
    person people[NUMBER];

    people[0].name = "Brian";
    people[0].number = "+1-617-495-1000";

    people[1].name = "David";
    people[1].number = "+1-949-468-2750";

    for (int i = 0; i < NUMBER; i++){
        people[i].name = get_string("Name: ");
        people[i].number = get_string("Phone Number: ");
    }

    string name = get_string("Search Name: ");

    for (int i = 0; i < NUMBER; i++){
        if (strcmp(people[i].name, name) == 0){
            printf("Found %s\n", people[i].number);
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}