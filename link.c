#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct person
{
    char name[50];
    int age;
    int no;

    struct person *next_node;
};

int count = 0;

typedef struct person person_type;

person_type *start_ptr;
person_type *last_ptr;

int menu()
{
    int choice;
    printf("MENU\n1.Add_person\n2.Display_person\n3.Exit\nEnter Choice >> ");
    scanf("%d", &choice);
    return choice;
}

void add_person()
{
    char name[50];
    int age;
    int no = count;
    printf("Enter Name >> ");
    scanf("%s", name);
    printf("Enter Age >> ");
    scanf("%d", &age);
    count++;

    person_type *node = malloc(sizeof(person_type));
    strcpy(node->name,name);
    node->age = age;
    node->no = no;
    node->next_node = NULL;

    if(last_ptr == 0){
        start_ptr = node;
        last_ptr = node;
    }else{
        last_ptr->next_node=node;
        last_ptr=node;
    }
}

void display_person(person_type *p)
{
    printf("\nNumber >> %d\n", p->no);
    printf("Name >> %s\n", p->name);
    printf("Age >> %d\n", p->age);
}

void display_all()
{
    if(last_ptr == 0) return; //display nothing

    person_type *current_node_ptr = start_ptr;
    while(current_node_ptr != 0){
        display_person(current_node_ptr);
        current_node_ptr = current_node_ptr->next_node;
    }
}

int main(){

    start_ptr = NULL;
    last_ptr = NULL;

    int choice;

    do{
        choice = menu();

        if(choice == 1){
            add_person();
        }
        else if(choice == 2){
            display_all();
        }
        else if(choice == 3){
            printf("Exit!!");
        }
        else{
            printf("Invalid key EIEI");
        }
    }while(choice != 3);

    return 0;
}