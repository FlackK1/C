#include <stdio.h>
#include <string.h>

struct Person {
    char name[50];
    int age;
    int num1;
    int num2;
};

int main() {
    struct Person person;
    
    printf("Anna nimi:");
    scanf("%s", person.name);
    
    printf("Anna ikä:");
    scanf("%d", &person.age);
    
    printf("Anna opiskelijanumero:");
    scanf("%d", &person.num1);
    
    printf("Anna keskiarvo:");
    scanf("%d", &person.num2);
    
    printf("Nimesi on %s. Olet %d vuotias ja opiskelijanumerosi on %d. Keskiarvo %d", person.name, person.age, person.num1, person.num2);

    return 0;
}