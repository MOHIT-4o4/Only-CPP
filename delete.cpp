#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void checkidpass();
void addemployee();
void printlist();

struct Emp{
    char firstn[10],lastn[10];
    char address[35],email[15];
}e;

int main(){
    int choice;
    Emp e;
    printf("---------Login Page---------\n");
    checkidpass();

    while(1)
    {
        printf("\n\t\t*********WELCOME********\n");
        printf("\t1. Add Employee \n");
        printf("\t2. Print Employee List \n");
        printf("\t0. Exit Program \n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: addemployee();
                break;

            case 2 : printlist();
                break;
            case 3 : break;

            default:
                    exit(0);
                printf("\nEnter valid choice..\n");
        }
       printf("");
    }
}
void checkidpass(){

    char username[50];
    char password[50];
    char permanentpass[50]=("Malviya12"),permanentid[50]=("Mohit89");
    printf("Enter your username:");
    gets(username);

    printf("\nEnter your password:");
    gets(password);
    if(strcmp(username,permanentid)==0 && strcmp(password,permanentpass)==0){
        printf("\n\tLogin succesfull....\n");
    }
    else
    printf("\n\t'Login failed'\n");

}
void addemployee(){
   
    Emp e;
    printf("\nEnter First Name:");
    scanf("%s",&e.firstn);
    printf("\nEnter Last Name:");
    scanf("%s",&e.lastn);

    printf("\nEnter Adress:");
    gets(e.address);
    printf("\nEnter Email:");
    gets(e.email);
    printf("\n\tData Added succesfull...\n");
}
void printlist(){
    Emp e;
    printf("%s",e.firstn);
    printf("%s",e.lastn);
    printf("%s",e.address);
    printf("%s",e.email);

    // printf("data needed to be add...");
}