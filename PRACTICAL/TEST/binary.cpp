#include <iostream>
using namespace std ;

struct node {
    node*prev ;
    node*next ;
    int bit ;
};

class binary {
    node*head ;
    node*tail;

    public :

    binary(){
        head = tail = NULL ;
    }

    void store();
    void display();
    void ones();
    void two();
    void add(binary b1);
};

void binary::store(){
    int n;
     cout<<"Enter the no. of bit :" ;
     cin >> n ;

     for(int i = 0 ; i < n ; i ++ ){
        node*nn = new node ;

        nn->prev = NULL;
        nn->next = NULL ;
        cout<<"enter the bits :";
        cin>>nn->bit ;

        if(head == NULL){
            head= tail = nn ;
        }
        else {
            tail->next = nn;
            nn->prev = tail ;
            tail = nn ;
        }
     }
}
void binary::display(){
    node*temp = head ;
    while(temp != NULL){
        cout<<temp->bit ;
        temp = temp->next ;
    }
    
}
void binary::ones(){
   
   cout<<"----ones comp ----";
    node*temp = tail ;
   
   while(temp!= NULL ){
    if(temp->bit== 0 ){
        cout<<"1";
    }
    else {
        cout<<"0";    
    }
    temp = temp ->prev ;
   }
}
void binary::two(){
  cout<<"\n ----two copm ----";
 int flag = 0 ;
  node*temp = tail ; 
  while(temp!= NULL){
    if(flag == 0 ){
        cout<<temp->bit ;
        if(temp->bit == 1)

            flag = 1 ;
    }
        else{
            if(temp->bit == 0)
              cout<<"1";

           else
                cout<<"0";
            
        }
    
    temp = temp->prev ;
  }
}
void binary::add(binary b1 ){
    cout<<"---add of twp comp ---" ;

    node*temp1 = tail ;
    node*temp2 = b1.tail ;
    
    int a[200], k = 0 ;
    int carry = 0  ,sum =0 ;
    while(temp1 != NULL || temp2 != NULL || carry != 0){
        if(temp1 != NULL ){
            sum = sum + temp1->bit ;
            temp1 = temp1->prev  ;

        }
        if(temp2 != NULL){
            sum = sum +temp2->bit ;
            temp2 = temp2->prev ;
        }
        a[k++] = sum % 2 ;
        carry = sum / 2 ;
    }
    for(int i = k -1 ; i >= 0 ; i --){
        cout<<a[i];
    }
}
int main(){
    binary b, b1;
    b.store();
    b.display();
    b1.store();
    b1.display();
    b.ones();
    b.two();
    b.add(b1);
    return 0 ;

}