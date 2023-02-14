#include <stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>


struct books
{
    int id;
    char bookn[50];
    char authorn[50];
    char date[12];
}b;

struct student
{
    int id;
    char sname[50];
    char sclass[50];
    int sroll;
    char bookn[50];
    char date[12];
}s;

FILE *fp;



void addbook()
{
    char mydate[12];
    time_t t = time(NULL);
    struct tm tm =*localtime(&t);
    sprintf(mydate,"%02d/%02d/%d",tm.tm_mday,tm.tm_mon+1,tm.tm_year + 1900);
    strcpy(b.date,mydate);
    fp = fopen("book.text","ab");

    printf("Enter Book ID: ");
    scanf("%d",&b.id);

    printf("Enter Book name: ");
    fflush(stdin);
    gets(b.bookn);

    printf("Enter Author Name: ");
    fflush(stdin);
    gets(b.authorn);

    printf("Book added Sucessfully !!!!");
    fwrite(&b , sizeof(b),1,fp);
    fclose(fp);

}

void booklist()
{
    system("cls");
    printf("*Available Books*\n\n");
    printf("%-10s %-30s %-20s %s\n\n","Book id", "Book Name", "Author", "Date");

    fp = fopen("book.text","rb");
    while(fread(&b , sizeof(b) , 1, fp)==1)
    {
         printf("%-10d %-30s %-20s %s\n\n",b.id,b.bookn,b.authorn,b.date);
    }
    fclose(fp);

}

void del()
{
    int id,f=0;
    system("cls");
    printf("*Remove Books*\n\n");
    printf("Enter Book Id to remove");
    scanf("%d",&id);

    FILE *ft;
    fp = fopen("book.txt","rb");
    ft = fopen("temp.txt","wb");

    while(fread(&b , sizeof(b) , 1, fp)==1)
    {
        if(id==b.id)
        f=1;
        else
        fwrite(&b,sizeof(b),1,ft);
    }
    if(f==1)
    {
        printf("\n\nDeleted Sucessfully!!!");
    }
    else
    {
        printf("\n\nRecord not found!!!");
    }
    fclose(fp);
    fclose(ft);
    remove("book.txt");
    rename("temp..txt","book.txt");
}

 void issueb()
 {
    char mydate[12];
    time_t t = time(NULL);
    struct tm tm =*localtime(&t);
    sprintf(mydate,"%02d/%02d/%d",tm.tm_mday,tm.tm_mon+1,tm.tm_year + 1900);
    strcpy(s.date,mydate);

    int f;
    system("cls");
    printf("**Issue Books**");
    printf("\nEnter Book Id to issue: ");
    scanf("%d",&s.id);

    fp = fopen("book.txt","rb");

     while(fread(&b, sizeof(b), 1, fp) == 1){
        if(b.id == s.id){
            strcpy(s.bookn, b.bookn);
            f=1;
            break;
        }
    }

    if(f==0){
        printf("No book found with this id\n");
        printf("Please try again...\n\n");
        return;
    }

    fp = fopen("issue.txt", "ab");

    printf("Enter Student Name: ");
    fflush(stdin);
    gets(s.sname);

    printf("Enter Student Class: ");
    fflush(stdin);
    gets(s.sclass);

    printf("Enter Book name:  ");
    fflush(stdin);
    gets(s.bookn);

    printf("Enter Student Roll: ");
    scanf("%d", &s.sroll);

    printf("Book Issued Successfully\n\n");

    fwrite(&s, sizeof(s), 1, fp);
    fclose(fp);
}

void issuel(){
    system("cls");
    printf("** Book Issue List **\n\n");

    printf("%-10s %-30s %-20s %-10s %-30s %s\n\n", "S.id", "Name", "Class", "Roll", "Book Name", "Date");

    fp = fopen("issue.txt", "rb");
    while(fread(&s, sizeof(s), 1, fp) == 1){
        printf("%-10d %-30s %-20s %-10d %-30s %s\n", s.id, s.sname, s.sclass, s.sroll, s.bookn, s.date);
    }

    fclose(fp);
}
int main()
{
    int ch;
    while(1)
    {
        system("cls");
        printf("**LIBRARY MANAGEMENT SYSTEM**\n\n");
        printf("ADD BOOK---> 1\n");
        printf("BOOK LIST--->2\n");
        printf("REMOVE BOOK--->3\n");
        printf("ISSUE BOOK--->4\n");
        printf("ISSUED BOOK LIST--->5\n");
        printf("Exit--->0\n\n\n");

        printf("Enter your choice : ");
        scanf("%d",&ch);

        switch (ch)
        {
        case 1 :
            addbook();
            break;

        case 2:
            booklist();
            break;

        case 3:
            del();
            break;

        case 4:
            issueb();
            break;

        case 5:
            issuel();
            break;
        case 6:
            exit(0);
        
        default:
            printf("\nINVALID CHOICE!!");
            break;
        }
        printf("\nPress Any key to continue");
        getch();


    }
}