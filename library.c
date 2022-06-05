#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include<unistd.h>
#include <stdbool.h>
#include <string.h>

typedef struct{
	char title[27]; // Title of the book
	char author[10]; // Author of the book
	char ISBN[13]; // International Standard Book Nummber (ISBN) of the book
	char category[11]; // Category of the book: history, science, literature...
	bool status; // The book is available or not
} book; 


void ViewApplicationTitle() // It is the title of the application to be printed before starting the application
{
    printf("\n\t\t\t        *********************************************");
    printf("\n\t\t\t        *                  CY-TECH                  *");
    printf("\n\t\t\t        *                  LIBRARY                  *");
    printf("\n\t\t\t        *               	 APPLICATION              *");
    printf("\n\t\t\t        *********************************************");
}


void Connection()
{
    int choice = 0;
    do
    {
        printf("\n\n\n\t\t\t1.Login");
        printf("\n\t\t\t2.New user");
        printf("\n\t\t\t3.Exit");
        printf("\n\n\n\t\t\tEnter choice => ");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            Login();
            break;
        case 2:
            AddUser();
            break;
        case 0:
            exit(1);
            break;
        default:
            printf("\n\n\n\t\t\tInvalid input!");
        }                                            
    }
    while(choice!=0);                                        
}

void main()
{
    int StudentOrProfessor // si Student
    if(user==Studient);
    int a=0;
  
    while(a!=7)
    {
        system("cls");
        printf("Select an Option:\n");
        printf("1.Add Student Record\n");
        printf("2.Update Student Record\n");
        printf("3.Delete Student Record\n");
        printf("4.Mark Attendence\n");
        printf("5.Enter Marks\n");
        printf("6.Search\n");
        printf("7.Exit\n");
        printf("Enter:");
         
        scanf("%d",&a);
 
        switch(a)
        {
            case 1:
                addStudentRecord();
                break;
             
            case 2:
                updateStudentRecord();
                break;
 
            case 3:
                deleteStudentRecord();
                break;
 
            case 4:
                markAttendence();
                break;
 
            case 5:
                enterMarks();
                break;
 
            case 6:
                search();
                break;
 
            case 7:
                exit(0);
                break;
 
            default:
                printf("Invalid Option\n");
                break;
        }
    }
}
void Connection()
{
    int choice = 0;
    do
    {
        headMessage("MAIN MENU");
        printf("\n\n\n\t\t\t1.Add Student");
        printf("\n\t\t\t2.Search Student");
        printf("\n\t\t\t3.View Student");
        printf("\n\t\t\t4.Delete Student");
        printf("\n\t\t\t5.Update Password");
        printf("\n\t\t\t0.Exit");
        printf("\n\n\n\t\t\tEnter choice => ");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            addStudentInDataBase();
            break;
        case 2:
            searchStudent();
            break;
        case 3:
            viewStudent();
            break;
        case 4:
            deleteStudent();
            break;
        case 5:
            updateCredential();
            break;
        case 0:
            printf("\n\n\n\t\t\t\tThank you!!!\n\n\n\n\n");
            exit(1);
            break;
        default:
            printf("\n\n\n\t\t\tINVALID INPUT!!! Try again...");
        }                                            //Switch Ended
    }
    while(choice!=0);                                        //Loop Ended
}
