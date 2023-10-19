#include<stdio.h>
#include<string.h>
#define MAX_SONG 100
struct Song
{
    int song_id;
    char song_name[50];
    char artist[50];
    int duration;
};

void addSong(struct Song song[], int *numsong)
{
    if (*numsong>=100)
    {
        printf("The database is full");
        return;
    }
    printf("Song ID: ");
    scanf("%d",&song[*numsong].song_id);
    printf("Song Name: ");
    scanf("%s",song[*numsong].song_name);
    printf("Artist: ");
    scanf("%s",song[*numsong].artist);
    printf("Duration: ");
    scanf("%d",&song[*numsong].duration);
    (*numsong)++;
    printf("The song is successfully added!\n");
}


void displaySong(struct Song song[],int numsong)
{
    printf("Song Details: \n");
    int i;
    for(i=0; i<numsong; i++)
    {
        printf("Song ID: %d\n",song[i].song_id);
        printf("Song Name: %s\n",song[i].song_name);
        printf("Artist: %s\n",song[i].artist);
        printf("Duration: %d\n",song[i].duration);
    }
}

void deleteSong(struct Song song[],int *numsong,int targetID)
{
    int index=-1;
    int i;
    for(i=0; i<*numsong; i++)
    {
        if(song[i].song_id==targetID)
        {
            index=i;
            break;
        }
    }
    if (index==-1)
    {
        printf("Not found in the database to delete.");
    }
    else
    {
        int i;
        for( i=index; i<*numsong-1; i++)
        {
            song[i]=song[i+1];
        }
        (*numsong)--;
        printf("Song deleted successfully.");
    }
}

int main()
{
    struct Song song[MAX_SONG];
    int numsong=0;
    int choice;
    do
    {
        printf("Welcome to music playlist database.\n");
        printf("1. Add song\n");
        printf("2. Display All song\n");
        printf("3. Delete a song\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);
        if(choice==1)
        {
            addSong(song,&numsong);
            printf("\n");
        }
        else if (choice==2)
        {
            displaySong(song,numsong);
            printf("\n");
        }
        else if(choice==3)
        {
            int targetid;
            printf("Enter the song id to delete the song: ");
            scanf("%d",&targetid);
            deleteSong(song,&numsong,targetid);
            printf("\n");
        }
        else if (choice==4)
        {
            printf("Exit the program. Good Bye!");
            printf("\n");
        }
        else
        {
            printf("Invalid choice. Please try again.");
            printf("\n");
        }

    }
    while(choice!=4);
    return 0;
}
