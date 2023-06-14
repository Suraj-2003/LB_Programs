#include<iostream>
using namespace std;

#define TRUE 1
#define FALSE 0

typedef int BOOL;

struct node
{
    int Data;
    node *Next;
};

typedef struct node NODE;
typedef struct node* PNODE;

class Singly_linkedList
{
    private:
       PNODE Head;

    public:
        Singly_linkedList();
       ~Singly_linkedList();
        BOOL InsertFirst(int);
        BOOL InsertLast(int);
        BOOL InsertAtPosition(int, int);
        inline void Display();
        inline int Count();
        BOOL DeleteFirst();
        BOOL DeleteAtPosition(int);
        BOOL DeleteLast();
};

Singly_linkedList::Singly_linkedList()
{
    Head = NULL;
}

Singly_linkedList::~Singly_linkedList()
{
    PNODE Temp, Navigate;

    if(Head!=NULL)
    {
        Navigate = Head;

        while(Navigate != NULL)
        {
            Temp = Navigate->Next;
            delete Navigate;
            Navigate = Temp;
        }
    }
}

BOOL Singly_linkedList::InsertFirst(int no)
{
    PNODE newn = NULL;

    newn = new NODE;
    if(newn == NULL)
    {
      return FALSE;
      }
      newn->Next = NULL;
      newn->Data = no;
      if(Head == NULL)
      {
          Head = newn;
      }
    else
    {
        newn->Next = Head;
        Head = newn;
    }
    return TRUE;
}

BOOL Singly_linkedList::InsertLast(int no)
{
    PNODE newn = NULL;
    PNODE temp = Head;

    newn = new NODE;

    if(newn == NULL)
    {
        return FALSE;
    }

    newn -> Next = NULL;
    newn -> Data = no;

    if(Head == NULL)
    {
        Head = newn;
    }
    else
    {
        while(temp->Next != NULL)
        {
            temp = temp->Next;
        }
        temp->Next = newn;
    }
    return TRUE;
}

BOOL Singly_linkedList::InsertAtPosition(int no, int pos)
{
    if((Head == NULL) || (pos>Count()+1) || (pos <= 0))
    {
        return FALSE;
    }
    if(pos == 1)
    {
        return(InsertFirst(no));
    }
    else
    {
        PNODE newn = NULL, temp = Head;

        newn = new NODE;
        if(newn == NULL)
        {
            return FALSE;
        }

        newn -> Next = NULL;
        newn -> Data = no;

        for(int i = 1; i<=(pos-2); i++)
        {
            temp = temp -> Next;
        }

        newn -> Next = temp -> Next;
        temp -> Next = newn;
    }

    return TRUE;
}

BOOL Singly_linkedList::DeleteFirst()
{
    PNODE temp = Head;

    if(Head == NULL)
    {
        return FALSE;
    }
    else
    {
        Head = Head -> Next;
        free(temp);
    }
    return TRUE;
}

BOOL Singly_linkedList::DeleteLast()
{
    if(Head == NULL)
    {
        return FALSE;
    }
    else if(Head->Next == NULL)
    {
        delete Head;
        Head = NULL;
    }
    else
    {
        PNODE temp1 = Head, temp2 = NULL;

        while(temp1->Next->Next!=NULL)
        {
            temp1 = temp1 -> Next;
        }

        temp2 = temp1 -> Next;
        temp1->Next = NULL;
        free(temp2);
    }
     return TRUE;

}

BOOL Singly_linkedList::DeleteAtPosition(int pos)
{
    if((Head == NULL) || (pos > Count()) || (pos <= 0))
    {
        return FALSE;
    }
    else if(pos == 1)
    {
        DeleteFirst();
    }
    else if(pos == (Count()))
    {
        DeleteLast();
    }
    else
    {
        PNODE temp1 = Head, temp2 = NULL;

        for(int i = 1; i<=(pos-2); i++)
        {
            temp1 = temp1 -> Next;
            ++i;
        }

        temp2 = temp1 -> Next;
        temp1->Next = temp2 -> Next;

        delete temp2;
    }
    return TRUE;
}

void Singly_linkedList::Display()
{
    PNODE Temp = Head;

    while(Temp != NULL)
    {
        cout<<Temp->Data<<"->";
        Temp = Temp -> Next;
    }
    cout<<"NULL\n";
}

int Singly_linkedList::Count()
{
    PNODE Temp = Head;
    int iCnt = 0;

    while(Temp != NULL)
    {
        iCnt++;
        Temp = Temp -> Next;
    }
    return iCnt;
}

int main()
{
    int iChoice = 1;
    Singly_linkedList obj;
    int iValue = 0, ipos = 0, iRet = 0;

    while(iChoice != 0)
    {
        cout<<"Enter your choice : "<<endl;
        cout<<"1 : Insert First"<<endl;
        cout<<"2 : Insert Last"<<endl;
        cout<<"3 : Insert at position"<<endl;
        cout<<"4 : Delete First"<<endl;
        cout<<"5 : Delete Last"<<endl;
        cout<<"6 : Delete at position"<<endl;
        cout<<"7 : Display the data"<<endl;
        cout<<"8 : Count number of elements"<<endl;
        cout<<"9 : Terminate the application"<<endl;
        cin>>iChoice;

        switch(iChoice)
        {
            case 1:
                cout<<"Enter the value to insert"<<endl;
                cin>>iValue;
                obj.InsertFirst(iValue);
                break;

             case 2:
                cout<<"Enter the value to insert"<<endl;
                cin>>iValue;
                obj.InsertLast(iValue);
                break;

             case 3:
                cout<<"Enter the value to insert"<<endl;
                cin>>iValue;
                cout<<"Enter the position : "<<endl;
                cin>>ipos;
                obj.InsertAtPosition(iValue,ipos);
                break;

            case 4:
                obj.DeleteFirst();
               break;

           case 5:
                obj.DeleteLast();
               break;

            case 6:
                cout<<"Enter the position : "<<endl;
                cin>>ipos;
                obj.DeleteAtPosition(ipos);
                break;

            case 7:
                obj.Display();
                break;

            case 8:
                iRet = obj.Count();
                cout<<"Number of elements are : "<<iRet<<endl;
                break;

            case 9:
                cout<<"Thank you for using the application"<<endl;
                iChoice = 0;
                break;

                default:
                    cout<<"Please enter proper choice\n";
                    break;
        }   // End of switch
    }// End of while

    return 0;
}
