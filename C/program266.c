#include<stdio.h>
#include<stdlib.h>

typedef struct Node 
{
    int data;
    struct Node *next;
}NODE, *PNODE, **PPNODE;

void InsertFirst(PPNODE Head, int no)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));         

    newn -> data = no;                          
    newn -> next = NULL;

    if(*Head == NULL)                           
    {
        *Head = newn;                           
    }

    else
    {
        newn -> next = *Head;                   
        *Head = newn;                           
    }
}

void InsertLast(PPNODE Head, int no)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));         

    PNODE temp = *Head;

    newn -> data = no;                          
    newn -> next = NULL;

    if(*Head == NULL)                           
    {
        *Head = newn;                           
    }

    else
    {
        while(temp -> next != NULL)
        {
            temp = temp -> next;
        }
        temp -> next = newn;
    }
}

void Display(PNODE Head)
{
    printf("Elements of Linked List are : \n");

    while(Head != NULL)
    {
        printf("| %d | -> ", Head -> data);
        Head = Head -> next;
    }
    printf("NULL\n");
}

int Count(PNODE Head)
{
    int iCount = 0;

    while(Head != NULL)
    {
        iCount++;
        Head = Head -> next;
    }
    return iCount;
}

void DeleteFirst(PPNODE Head)
{
    PNODE temp = *Head;

    if(*Head == NULL)                   // LL is empty
    {
        return;
    }

    else if((*Head) -> next == NULL)    // LL contains 1 node
    {
        free(*Head);                    // Dangling pointer is a pointer which points to a memory which currently does not exist but previously did hold some value(node)
        *Head = NULL;
    }

    else                                // LL contains more than one node
    {
        *Head = (*Head) -> next;
        free(temp);
    }
}

void DeleteLast(PPNODE Head)
{
    PNODE temp = *Head;

    if(*Head == NULL)                   // LL is empty
    {
        return;
    }

    else if((*Head) -> next == NULL)    // LL contains 1 node
    {
        free(*Head);                    // Dangling pointer is a pointer which points to a memory which currently does not exist but previously did hold some value(node)
        *Head = NULL;
    }

    else                                // LL contains more than one node
    {
        while(temp -> next -> next != NULL)
        {
            temp = temp -> next;
        }
        free(temp -> next);
        temp -> next = NULL;
    }
}

void InsertAtPos(PPNODE Head, int no, int ipos)
{
    int iLength = 0;
    iLength = Count(*Head);             // Calculate Length of LL

    // Filter
    if((ipos < 1) || (ipos > iLength + 1))      // Invalid Position
    {
        printf("Invalid position \n");
        return;
    }

    if(ipos == 1)
    {
        InsertFirst(Head, no);
    }

    else if(ipos == iLength + 1)
    {
        InsertLast(Head, no);
    }

    else
    {

    }
}


int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertLast(&First, 11);
    InsertLast(&First, 21);
    InsertLast(&First, 51);
    InsertLast(&First, 101);

    Display(First);
    
    iRet = Count(First);
    printf("Number of nodes are : %d\n", iRet);

    InsertFirst(&First, 10);
    InsertFirst(&First, 20);

    Display(First);
    
    iRet = Count(First);
    printf("Number of nodes are : %d\n", iRet);

    DeleteFirst(&First);
    DeleteFirst(&First);

    Display(First);
    
    iRet = Count(First);
    printf("Number of nodes are : %d\n", iRet);

    DeleteLast(&First);

    Display(First);
    
    iRet = Count(First);
    printf("Number of nodes are : %d\n", iRet);

    return 0;
}