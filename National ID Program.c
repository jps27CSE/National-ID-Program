#include<stdio.h>
#include<string.h>

typedef struct
{
    char first[30];
    char middle[30];
    char last[30];
}nametype;


typedef struct
{
    char first[30];
    char middle[30];
    char last[30];
}fathernNametype;

typedef struct
{
    char first[30];
    char middle[30];
    char last[30];
}motherNametype;

typedef struct
{
    int date;
    char month[30];
    int year;
    int IDno;
    nametype name;
    fathernNametype fathername;
    motherNametype mothername;
}Datatype;

int main()
{   
    Datatype  main;

    printf("Enter your First Name: ");
    scanf("%s",main.name.first);
    
    printf("Enter your Middle Name: ");
    scanf("%s",main.name.middle);

    printf("Enter your Last Name: ");
    scanf("%s",main.name.last);

    printf("\n\nEnter your Father's First Name: ");
    scanf("%s",main.fathername.first);

    printf("Enter your Father's Middle Name: ");
    scanf("%s",main.fathername.middle);

    printf("Enter your Father's Last Name: ");
    scanf("%s",main.fathername.last);


    printf("\n\nEnter your Moher's First Name: ");
    scanf("%s",main.mothername.first);

    printf("Enter your Mother Middle Name: ");
    scanf("%s",main.mothername.middle);

    printf("Enter your Mother's Last Name: ");
    scanf("%s",main.mothername.last);

    printf("\n\nEnter your Birthday Date: ");
    scanf("%d",&main.date);


    printf("Enter your Birth Month: ");
    scanf("%s",main.month);

    printf("Enter your Birth Year: ");
    scanf("%d",&main.year);

    printf("\n\nEnter your National ID No: ");
    scanf("%d",&main.IDno);


    printf("\n\nName:%s %s %s",main.name.first,main.name.middle,main.name.last);
    
    printf("\n\nFather's Name: %s %s %s",main.fathername.first,main.fathername.middle,main.fathername.last);
    
    printf("\n\nMother's Name: %s %s %s",main.mothername.first,main.mothername.middle,main.mothername.last);
    
    printf("\n\nDate of Birth: %d %s %d",main.date,main.month,main.year);

    printf("\n\nID NO: %d",main.IDno);


}

