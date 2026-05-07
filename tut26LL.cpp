//time complesxity of linked list traversal is O(n) where n is the number of nodes in the linked list
#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node* next;
};
void linkedlistTraversal(struct node*ptr)
{
    while(ptr!=NULL)
    {
        cout<<"Element: "<<ptr->data<<endl;
        ptr=ptr->next;
    }
}
int main()
{
    struct node*head;
    struct node*second;
    struct node*third;
    struct node*fourth;
    struct node*fifth;
    struct node*sixth;
    struct node*seventh;
    struct node*eighth;
    struct node*ninth;
    struct node*tenth;
    
    //Allocate memory for nodes in the linked list in Heap
    head=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));
    fourth=(struct node*)malloc(sizeof(struct node));
    fifth=(struct node*)malloc(sizeof(struct node));
    sixth=(struct node*)malloc(sizeof(struct node));
    seventh=(struct node*)malloc(sizeof(struct node));
    eighth=(struct node*)malloc(sizeof(struct node));
    ninth=(struct node*)malloc(sizeof(struct node));
    tenth=(struct node*)malloc(sizeof(struct node));
   //link first and second node
    head->data=1;
    head->next=second;
    //link second and third node
    second->data=2;
    second->next=third;
    //terminate the list at the third node
    third->data=3;
    third->next=fourth;
    //link third and fourth node
    fourth->data=4;
    fourth->next=fifth;
    //link fourth and fifth node
    fifth->data=5;
    fifth->next=sixth;
    //link fifth and sixth node
    sixth->data=6;
    sixth->next=seventh;
    //link sixth and seventh node
    seventh->data=7;
    seventh->next=eighth;
    //link seventh and eighth node
    eighth->data=8;
    eighth->next=ninth;
    //link eighth and ninth node
    ninth->data=9;
    //link ninth and tenth node
    ninth->data=9;
    ninth->next=tenth;
    //terminate the list at the tenth node
    tenth->data=10;
    tenth->next=NULL;

    linkedlistTraversal(head);
    return 0;
}




