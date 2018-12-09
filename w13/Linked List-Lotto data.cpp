#include<time.h>
#include <stdio.h>
#include <stdlib.h>

struct Date
{
    int year;
    int month;
    int day;
};

struct listNode
{
    int id;
    Date date;
    int num[6];
    struct listNode *nextPtr;
};

typedef struct listNode ListNode;
typedef ListNode *ListNodePtr;
void insert( ListNodePtr *sPtr);
int del( ListNodePtr *sPtr, char id );
int isEmpty( ListNodePtr sPtr );
void printList( ListNodePtr currentPtr );
void listOne(ListNodePtr currentPtr);
void instructions( void );

int main()
{
    ListNodePtr startPtr = NULL;
    int choice;
    char item;
    int id;
    instructions();
    printf( "? " );
    scanf( "%d", &choice );
    while ( choice != 3 )
    {
        switch ( choice )
        {
        case 1:
            insert( &startPtr);
            printList( startPtr );
            break;
        case 2:
            if ( !isEmpty( startPtr ) )
            {
                printf( "Enter character to be deleted: " );
                scanf( "%d", &id );
                if ( del( &startPtr,id ) )
                {
                    printf( "%c deleted.\n",id );
                    printList( startPtr );
                }
                else
                {
                    printf( "%c not found.\n\n", id );
                }
            }
            else
            {
                printf( "List is empty.\n\n" );
            }
            break;
        default:
            printf( "Invalid choice.\n\n" );
            instructions();
            break;
        }
        printf( "? " );
        scanf( "%d", &choice );
    }
    printf( "End of run.\n" );
    return 0;
}

void instructions()
{
    printf( "Enter your choice:\n"
            "   1 to insert an element into the list.\n"
            "   2 to delete an element from the list.\n"
            "   3 to end.\n" );
}
int duplicate(int num[],int pos)
{

    for(int i=0; i<pos; i++)
    {
        if(num[i]==num[pos])
            return 1;
    }
    return 0;
}

void insert( ListNodePtr *sPtr)
{
    int k;
    ListNodePtr newPtr;
    ListNodePtr previousPtr;
    ListNodePtr currentPtr;
    newPtr = (ListNodePtr)malloc( sizeof( ListNode ) );
    if ( newPtr != NULL )
    {
        srand(time(NULL));
        printf("\nEnter ID: ");
        scanf("%d",&newPtr->id);
        printf("Enter the year: ");
        scanf("%d",&newPtr->date.year);
        printf("Enter the month: ");
        scanf("%d",&newPtr->date.month);
        printf("Enter the day: ");
        scanf("%d",&newPtr->date.day);
        printf("Random generating 6 lotto number ...\n");
        for(int i=0; i<6; i++)
        {
            k=rand()%49+1;
            do
            {
                k=rand()%49+1;
            }
            while(duplicate(newPtr->num,i));
            newPtr->num[i]=k;
        }
        newPtr->nextPtr=NULL;
        previousPtr=NULL;
        currentPtr=*sPtr;
        while(currentPtr!=NULL&&newPtr->id>currentPtr->id)
        {
            previousPtr=currentPtr;
            currentPtr=currentPtr->nextPtr;
        }
        if(previousPtr==NULL)
        {
            newPtr->nextPtr=*sPtr;
            *sPtr=newPtr;
        }
        else
        {
            previousPtr->nextPtr=newPtr;
            newPtr->nextPtr=currentPtr;
        }
    }
    else
    {
        printf("Not inserted. No memory available.\n");
    }
}

int del( ListNodePtr *sPtr, char id )
{
    ListNodePtr previousPtr;
    ListNodePtr currentPtr;
    ListNodePtr tempPtr;
    if ( id == ( *sPtr )->id )
    {
        tempPtr = *sPtr;
        *sPtr = ( *sPtr )->nextPtr;
        free( tempPtr );
        return id;
    }
    else
    {
        previousPtr = *sPtr;
        currentPtr = ( *sPtr )->nextPtr;
        while ( currentPtr != NULL && currentPtr->id != id )
        {
            previousPtr = currentPtr;
            currentPtr = currentPtr->nextPtr;
        }
        if ( currentPtr != NULL )
        {
            tempPtr = currentPtr;
            previousPtr->nextPtr = currentPtr->nextPtr;
            free( tempPtr );
            return id;
        }
    }
    return 0;
}

int isEmpty( ListNodePtr sPtr )
{
    return sPtr == NULL;
}

void printList( ListNodePtr currentPtr )
{
    if ( currentPtr == NULL )
    {
        printf( "List is empty.\n\n" );
    }
    else
    {
        printf( "The list is:\n" );
        while ( currentPtr != NULL )
        {
            listOne(currentPtr);
            currentPtr = currentPtr->nextPtr;
        }
        printf( "NULL\n\n" );
    }
}

void listOne(ListNodePtr currentPtr)
{
    printf("\nLotto ID: %d \n",currentPtr->id);
    printf("     Date: %d/%d/%d\n",currentPtr->date.year,currentPtr->date.month,currentPtr->date.day);
    printf("Six winning numbers: ");
    for(int i=0; i<6; i++)
    {
        printf("%d ",currentPtr->num[i]);
    }
    printf("\n");
}
