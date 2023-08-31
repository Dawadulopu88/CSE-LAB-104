#include<stdio.h>
float calculateAverage(int grades[],int size)
{
    int i;
    int sum=0;
    for(i=0; i<size; i++)
    {
        sum+=grades[i];

    }
    return (float)sum/size;



}






int findHighest(int grades[],int size)
{
    int i,highest;
    highest=grades[0];
    for(i=1; i<size; i++)
    {
        if(grades[i]>highest)
        {
            highest=grades[i];
        }
    }
    return highest;
}





int findLowest(int grade[],int size)
{
    int i,lowest;
    lowest=grade[0];
    for(i=1; i<size; i++)
    {
        if(grade[i]<lowest)
        {
            lowest=grade[i];
        }
    }
    return lowest;
}




int main()
{
    printf("Welcome to Student Grade Analysis!\n\n");
    int n;
    printf("Enter the number of students: ");
    scanf("%d",&n);
    int grades[n],i;
    for(i=0; i<n; i++)
    {

        printf("Students %d: ",i+1);
        scanf("%d",&grades[i]);
    }


    while(1)
    {
        printf("\nMenu:\n1. Calculate average grade\n2. Find highest grade\n3. Find lowest grade\n4. Exit\n\n");

        printf("Enter your choice: ");
        int x;
        scanf("%d",&x);
        if(x==1)
        {
            printf("Average Grade:%f\n\n",calculateAverage(grades,n));
        }
        else if(x==2)
        {
            printf("Highest grade in the class: %d\n\n",findHighest(grades,n));
        }
        else if(x==3)
        {
            printf("Lowest grade in the class:%d\n\n",findLowest(grades,n));

        }
        else if(x==4)
        {
            printf("Thank you for using Student Grade Analysis!\n");
            exit(0);

        }
    }

    return 0;
}

