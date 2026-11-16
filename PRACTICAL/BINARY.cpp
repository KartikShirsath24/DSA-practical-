#include <iostream>
using namespace std ;

struct node {
    node*prev ;
    node*next ;
    int bit ;

};

class Binary{
    node*head ;
    node*tail ;

    public:

    Binary(){
        head = tail = NULL ;

    }
    void store();
    void display();
    void one();
    void twos();
    void add(Binary b1);


};
void Binary::store(){
 int n;
 cout<<"enter the number of bits : ";
 cin>>n ;
 
for(int i = 0 ; i <n ; i ++){
    node*nn = new node ;

    nn->prev = NULL ;
    nn->next = NULL ;
    cout<<"enter the bit in 1 or 0 : ";
    cin>>nn->bit ;
    if(head == NULL){
        head = tail = nn ;
    }
    else{
        tail->next = nn ;
        nn->prev = tail ;
        tail = nn ;
    }
}


}
void Binary::display(){
    node*temp =head ;
    while(temp!= NULL){
        cout<<temp->bit ;
        temp=temp->next ;
    }
}
void Binary::one(){

    cout<<"\nOne's complementary_____________ :";
    node*temp = tail ;
    while(temp!=NULL){
        if(temp->bit== 0){
            cout<<"1" ;
        }
        else {
            cout<<"0";
        }
       temp = temp->prev;
    }
}
void Binary::twos(){
    node*temp = tail ;
    int flag = 0 ;
    cout<<"\ntwos complementary :" ;
    while(temp!= NULL){
        if(flag == 0){
            cout<<temp->bit ;
            if(temp->bit== 1)
               
            flag = 1;
                    }
        else {
            if(temp->bit ==0)
            cout<<"1";
            else
           cout<<"0";
        }
    
    temp= temp->prev ;
    }
}

void Binary::add(Binary b1){
    cout<<"\n addition of binary no. :" ;
    node*temp1 = tail ;
    node*temp2 = b1.tail ;

    int carry = 0, sum = 0;
    int a[200] , k=0;
    while(temp1 != NULL || temp2 != NULL || carry != 0){
        sum = carry;

        if(temp1!=NULL){
            sum = sum+temp1->bit ;
            temp1 = temp1->prev ;

        }
        if (temp2!=NULL){
            sum = sum+temp2->bit ;
            temp2= temp2->prev ;
        }

        a[k++] =sum%2 ;
        carry = sum/2 ;

    }
    cout<<"addition of binary no :";
    for( int i = k-1 ; i >= 0 ; i--){
        cout<<a[i]; 
    }
}
int main(){
        Binary b , b1;
    b.store();
    b1.store();
    b.display();
    b1.display();
    cout<<"\nones complementary\n";
    b.one();
    
    b.twos();
    b.add(b1);

    return 0 ;
}