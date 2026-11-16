#include <iostream>
#include <string>
using namespace std ;

struct node {
    int key ;
    string name ;
    node*next ;
};
class chain{
    node* T[10];
public :

    chain(){
        
        for(int i = 0 ; i<10 ; i ++)
        T[i] = NULL ;
    }
 
    int hashfunction(int key ){
        return key % 10 ;
    }

    void insert(){

    int key ;

    cout<<"enter the key :" ;
    cin>>key;

    string name ;
    cout<<"enter the name : " ;
    cin>>name ;                        
    int index = hashfunction( key );
    node*nn = new node ;
    nn->key = key ;
    nn->name = name ;
    nn->next = NULL ;
     if(T[index] == NULL){
        T[index] = nn ;
     }
     else{
        node*temp = T[index];
        while(temp->next != NULL){
            temp = temp->next ;

        }
        temp->next = nn ;


     }
cout<<"record inserted " ;



} 

 void display(){
    cout <<"\n HAshtable :\n" ;

    for (int i = 0; i < 10; i++)
    {
        cout<<i<<":" ;
        node*temp = T[i];

        while(temp!=NULL){
            cout<<"["<<temp->key<<" , "
        <<temp->name<<"]" ;
    
    temp=temp->next;
}
cout<<"NULL"<<endl ;


    }
    
 }
void search(){
    int key ;
    cout<<" enter the key to find :";
    cin>>key;
     
    int index = hashfunction(key);

    node*temp =T[index];
    while(temp!=NULL){
        if(temp->key == key){
            cout<<"record found :" ;
            cout<<"key :"<<temp->key<<endl ;
            cout<<"name :"<<temp->name<<endl ;

            return ;
        }
        temp = temp->next ;
    }
    cout<<"record not found ";
}};

int main(){
    chain c ;
    int ch ;
    do{
    cout<<"\n1. Insert\n2. Display\n3. Search\n4. Exit\nenter the choice :" ;
    cin>>ch;
    switch(ch){
        case 1:
       cout<<"\n1.insert :" ;
        c.insert();
        break;

        case 2 :
        cout<<"\n2.Dispaly :" ;
        c.display();
        break ;


        case 3 :
        cout<<"\n3. search :" ;
        c.search();
        break ;

        case 4 :
        cout<<"\n4. Exit :" ;
        break ;

        default :
        cout<<"invalid choice ";
        break ;
    }
}
    while(ch!=4);
    
    
    return 0 ;
}