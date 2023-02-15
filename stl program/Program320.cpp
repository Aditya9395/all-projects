#include<iostream>
using namespace std;

template <class T>
struct node
{
    T data;
    struct node *next;
};

template <class T>
class SinglyLL
{
    public:
        struct node<T> * First;
        int iCount;
        SinglyLL();
        void InsertFirst(T no);
        void InsertLast(T no);
        void InsertAtPosition(T no,int ipos);
        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPosition(int ipos);
        void Display();
        //int Count();
};

template <class T>
SinglyLL<T> :: SinglyLL()
{
    First = NULL;
    iCount = 0;
}

template <class T>
void SinglyLL<T> :: InsertFirst(T no)
{
    struct node<T> * newn = new node<T>;  

    newn -> data = no;
    newn->next = NULL;

    if(First == NULL)
    {
        First = newn;
        iCount++;
    }
    else
    {
        newn->next = First;
        First = newn;
        iCount++;
    }
}

template <class T>
void SinglyLL<T> :: InsertLast(T no)
{
    struct node<T> * newn = new node<T>;
    
    newn-> data = no;
    newn-> next = NULL;

    if(First == NULL)
    {
        First=newn;
        iCount++;
    }
    else
    {
        struct node<T>* temp = First;
        while(temp -> next != NULL)
        {
            temp = temp -> next;
        }
        temp->next= newn;
        iCount++;
    }
}

template <class T>
void SinglyLL<T> :: InsertAtPosition(T no,int ipos)
{
    if((ipos < 1) || (ipos > iCount + 1))
    {
        cout<<"Invalid Position"<<"\n";
        return;
    }

    if(ipos == 1)
    {
        InsertFirst(no);
    }
    else if(ipos == iCount + 1)
    {
        InsertLast(no);
    }
    else
    {
        struct node<T>* newn = new node<T>;

        newn -> data = no;
        newn-> next =NULL;
        struct node<T>* temp = First;

        for(int iCnt = 1; iCnt < ipos -1; iCnt++)
        {
            temp = temp ->next;
        }
        newn-> next = temp ->next;
        temp-> next = newn;
        iCount++;
    }
}

template <class T>
void SinglyLL<T> :: DeleteFirst()
{
    if(First == NULL)
    {
        return;
    }
    else if(First -> next == NULL)
    {
        delete First;
        First = NULL;
        iCount--;
    }
    else
    {
        struct node<T>* temp = First;
        First = First -> next;
        delete temp;
        iCount--;
        
    }
}

template <class T>
void SinglyLL<T> ::DeleteLast()
{
    if(First == NULL)
    {
        return;
    }
    else if(First -> next == NULL)
    {
        delete First;
        First = NULL;
        iCount--;
    }
    else
    {
         struct node<T>* temp = First;
         while (temp -> next != NULL)
         {
            temp = temp -> next;
         }
         delete temp -> next ;
         temp -> next = NULL;
         iCount--;
    }
}

template <class T>
void SinglyLL<T> :: DeleteAtPosition(int ipos)
{
    if((ipos < 1) || (ipos > iCount))
    {
        cout<<"Invalid Position"<<"\n";
        return;
    }

    if(ipos == 1)
    {
        DeleteFirst();
    }
    else if(ipos == iCount)
    {
        DeleteLast();
    }
    else
    {
        struct node<T>* temp1 = First;
        struct node<T>* temp2 = temp1 -> next;
        for(int iCnt = 1; iCnt < ipos - 1; iCnt++)
        {
            temp1= temp2->next;
        }
        temp1-> next = temp2-> next;
        delete temp2;

        iCount--;
    }

}
template <class T>
void SinglyLL<T> :: Display()
{
    struct node<T> * temp = First;

    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp -> next;
    }
    cout<<"\n";
}
/*
template <class T>
int SinglyLL<T> :: Count()
{
    struct node<T> *  temp = First;
    int iCnt = 0;

    while(temp != NULL)
    {
        iCnt++;
        temp = temp -> next;
    }
    return iCnt;
}
*/

int main()
{
    int iRet = 0;
    
    SinglyLL <char>cobj;
    cobj.InsertFirst('b');
    cobj.InsertFirst('a');
    cobj.InsertLast('c');
    cobj.InsertAtPosition('s',4);
    cobj.DeleteFirst();
    cobj.DeleteLast();
    cobj.DeleteAtPosition(2);
    cobj.Display();
    //iRet = cobj.Count();
    cout<<"Number of nodes are : "<<iRet<<"\n";

    SinglyLL <int>iobj;
    iobj.InsertFirst(21);
    iobj.InsertFirst(11);
    cobj.InsertLast(51);
    cobj.InsertAtPosition(101,4);
    cobj.DeleteFirst();
    cobj.DeleteLast();
    cobj.DeleteAtPosition(2);
    iobj.Display();
   // iRet = iobj.Count();
    cout<<"Number of nodes are : "<<iRet<<"\n";

    SinglyLL <float>fobj;
    fobj.InsertFirst(21.10f);
    fobj.InsertFirst(11.10f);
    cobj.InsertLast(51.10f);
    cobj.InsertAtPosition(101.10f,4);
    cobj.DeleteFirst();
    cobj.DeleteLast();
    cobj.DeleteAtPosition(2);
    fobj.Display();
   // iRet = fobj.Count();
    cout<<"Number of nodes are : "<<iRet<<"\n";

    SinglyLL <double>dobj;
    dobj.InsertFirst(21.10);
    dobj.InsertFirst(11.10);
    cobj.InsertLast(51.10);
    cobj.InsertAtPosition(101.10,4);
    cobj.DeleteFirst();
    cobj.DeleteLast();
    cobj.DeleteAtPosition(2);
    dobj.Display();
   // iRet = dobj.Count();
    cout<<"Number of nodes are : "<<iRet<<"\n";

    return 0;
}