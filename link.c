#include<stdio.h>

struct person{
    char name[50];
    int no;
    int age;

    struct person *next_node;
};

int count = 0;

typedef struct person person_type;

person_type *start_ptr;
person_type *last_ptr;

int menu()
{
    int choice = 0;
    printf("Menu\n1.AddName\n2.Setting\n3.Search\n4.Exit\nEnter Choice >> ");
    scanf("%d", &choice);

    return choice;
}



int main()
{

}