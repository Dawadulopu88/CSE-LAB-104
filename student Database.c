#include<stdio.h>
#include<string.h>
#define MAX_STUDENT 50
struct Student{
int id;
char name[50];
int age;
};
void addStudent(struct Student student[],int *numstudent){
if(*numstudent>=50){
    printf("The database is full");
    return;
}
printf("Enter ID: ");
scanf("%d",&student[*numstudent].id);
printf("Enter Name: ");
scanf("%s",student[*numstudent].name);
printf("Enter Age: ");
scanf("%d",&student[*numstudent].age);
(*numstudent)++;
printf("Student Added Successfully!");
}
void displayStudent(struct Student student[],int numstudent){
printf("Details of All Students:\n");
for (int i=0;i<numstudent;i++){
    printf("ID: %d\n",student[i].id);
     printf("Name: %s\n",student[i].name);
      printf("Age: %d\n",student[i].age);
}
}
void searchbyid(struct Student student[],int numstudent,int targetID){
int found=0;
for(int i=0;i<numstudent;i++){
    if(student[i].id==targetID){
            printf("Student Details:\n");
      printf("ID: %d\n",student[i].id);
     printf("Name: %s\n",student[i].name);
      printf("Age: %d\n",student[i].age);
      found=1;
      break;
    }
}
if(!found){
    printf("Student not found with this id.");
}
}
void searchbyname(struct Student student[],int numstudent,char targetname[]){
int found =0;
for(int i=0;i<numstudent;i++){
    if(strcmp(student[i].name,targetname)==0){
           printf("Student Details:\n");
      printf("ID: %d\n",student[i].id);
     printf("Name: %s\n",student[i].name);
      printf("Age: %d\n",student[i].age);
      found=1;
      break;
    }
}
if(!found){
    printf("No student found in this name.");
}
}
void deletebyid(struct Student student[],int *numstudent,int targetID){
int index=-1;
for(int i=0;i<*numstudent;i++){
    if(student[i].id==targetID){
        index=i;
        break;
    }
}
if (index==-1){
    printf("Not found in the database to delete.");
}
else{
   for(int i=index;i<*numstudent-1;i++){
    student[i]=student[i+1];
   }
  (*numstudent)--;
  printf("Student deleted successfully.");
}
}
void deletebyname(struct Student student[],int *numstudent,const char *targetname){
int index=-1;
for(int i=0;i < *numstudent;i++){
    if(strcmp(student[i].name,targetname)==0){
        index=i;
        break;
    }
}
if (index==-1){
    printf("Not found in the database to delete.");
}
else{
   for(int i=index;i <* numstudent - 1 ;i++){
    student[i]=student[i+1];
   }
  (*numstudent)--;
  printf("Student deleted successfully.");
}
}
int main(){
struct Student student[MAX_STUDENT];
int numstudent=0;
int choice;
do{
    printf("Student Database Menu:\n");
    printf("1.Add Student: \n");
    printf("2.Display Student: \n");
    printf("3.Search Student by ID: \n");
    printf("4.Search Student by Name: \n");
    printf("5.Delete Student by ID: \n");
    printf("6.Delete Student by Name: \n");
    printf("7.Exit\n");
    printf("Enter the choice: ");
    scanf("%d",&choice);
    if(choice==1){
      addStudent(student,&numstudent);
      printf("\n");
    }
  else if (choice==2){
    displayStudent(student,numstudent);
    printf("\n");
  }
  else if (choice==3){
    int targetid;
    printf("Enter the id to search: ");
    scanf("%d",&targetid);
    searchbyid(student,numstudent,targetid);
     printf("\n");
  }
  else if(choice==4){
    char targetname[50];
    printf("Enter the name to search: ");
    scanf("%s",&targetname);
    searchbyname(student,numstudent,targetname);
     printf("\n");
  }
  else if (choice==5){
    int targetid;
    printf("Enter the id to delete: ");
    scanf("%d",&targetid);
    deletebyid(student,&numstudent,targetid);
     printf("\n");
  }
   else if (choice==6){
     char targetname[50];
    printf("Enter the name to delete: ");
    scanf("%s",&targetname);
    deletebyname(student,&numstudent,targetname);
     printf("\n");
   }
   else if(choice==7){
        printf("Exit the program. GoodBye!");
     printf("\n");
   }
   else{
    printf("Invalid Choice. Please Choose Again.");
    printf("\n");
   }
}while(choice!=7);
return 0;
}

