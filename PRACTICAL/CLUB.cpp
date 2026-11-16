#include <iostream>
using namespace std ; 

struct node {
int prn ;
string name ;
node*next ;
};
class club{
  node*head ;
  node*peon ;

public : 

 club(){
    head = NULL ;
    peon = NULL ;

 }

//add member 
void add(int p , string n){
    if(head!=NULL){
        cout<<"President present ";
        return ;
    }
    node*temp = new node ;
    temp->prn = p ;
    temp->name = n ;
    temp->next = head ;

    head = temp ;
    cout<<"president is added ";
}
//addmember 
void member(int p , string n ){
    node*temp = new node ;
    temp->prn = p ;
    temp->name = n ;
    temp->next = NULL ;
    
    if(head == NULL){
    head = temp ;}
    
  else
    if(peon==NULL){
        node*t = head;

        while(t->next!=NULL)
           t = t->next ;

           t->next = temp ;
        
    }
    else {
    node*t = head ;
    while(t->next != peon )
        t = t->next ;

     t->next = peon ;
     t->next = temp ;    

}
cout<<"member added "; 
}
//secatory 
void peon(int p , string n){
    if(peon!=NULL){
        cout<<"peon exists ";
        return ;
    }

    node*temp = new node ;
    temp->prn = p ;
    temp->name = n ;
    temp->next = NULL;
if(head==NULL){
    head = temp ;
}    else {
        node*t = head ;
        while(t->next != NULL)
            t = t->next ;
        
            t->next = temp ;
    }
peon = temp ;

cout<<"peon is added" ;

}


//delete member 
void remove(int p ){
    if(head==NULL){
      cout<<"club is empty";
      return ;
    }

    node*temp = head ;
   node*prev = NULL; 
    
   while(temp!=NULL && temp->prn!= p){
       prev = temp ;
       temp = temp->next ;
   }
   if(temp== NULL){
    cout<<"member not found " ;
return ;}

    if(prev==NULL)
    head = temp->next ;
    else 
    prev->next = temp->next ;

    if(temp == peon )
    peon = NULL ;

    delete temp ;

    cout<<"member deleted ";
}

///diplay 
void display(){
    if(head== NULL){
        cout<<"club is empty ";
        return ;
    }

    node*temp = head ;

    cout<<"club members :";

    while(temp!=NULL){
        cout<<"prn :"<<temp->prn<<" " ;
        cout<<"name :"<<temp->name<<" ";

        temp = temp->next ;
    }
}
};

int main(){
    club c ;
    int ch ;
    
}