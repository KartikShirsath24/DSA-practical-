#include <iostream>
#include <string>
using namespace std ;

struct node {
string name ;
long long phone ;

};

class tele{
    public :
    node T1[10];
    node T2[10];
 
   tele(){
    for(int i = 0 ; i <10 ; i++){
        T1[i].name = " ";
        T2[i].name = " ";
    }
}
    // hash functrion 
    int hashfunction(string name){
        int sum = 0 ;
        for(string::size_type i = 0 ; i < name.length() ; i ++){
            sum = sum + name[i] ;        }
            return sum % 10 ;
    }
    
   

   //insert
   void insert(){
    string name ;
    long long phone ;
    cout<<" Enter the name :" ;
    cin>>name ;

    cout<<"\n Enter the phone no. :";
    cin>>phone ;
    

    int index =  hashfunction(name);
    int flag1 = false ; int flag2 = false ;
    //linear 
    for(int i = 0 ; i <10 ; i ++){
        int nm = (index + i )%10;
       
       if(T1[nm].name ==" "){
        T1[nm].name = name;
        T1[nm].phone = phone;
        flag1 = 1 ;
        break ;
       }

    }

    for(int i = 0 ; i <10 ; i ++){
        int nm = (index + i*i )%10;
       
       if(T2[nm].name ==" "){
        T2[nm].name = name ;
        T2[nm].phone = phone;
        flag2 = 1 ;
        break ;
       }

    }
    if(flag1 && flag2){
        cout<<"\n record inserted ";
    
    }
    else {
        cout<<"\n not record inserted ";
    }
   }

   //display 
   void display(){
    cout<<"\n linear probing :";
    for(int i = 0 ; i < 10 ; i ++){
        if(T1[i].name != " "){
            cout<<i<<" "<<T1[i].name 

            <<" "<<T1[i].phone<<endl ; 
        }
    }
    
     cout<<"\n quadratic probing :";
    for(int i = 0 ; i < 10 ; i ++){
        if(T2[i].name != " "){
            cout<< i<<" "<<T2[i].name 
           << " "<<T2[i].phone<<endl ; 
        }
    }

   }
   void search(){
    string name ;
    cout<<"\n enter the name to search :";
    cin>>name; 

    int index = hashfunction(name) ;
    bool found = false ;
    bool found1 = false ;

    //lianer
    for(int i = 0 ; i <10 ; i ++){
        int nm = (index + i )% 10 ;

        if(T1[nm].name==  name ){
            cout<<"\n"<<T1[nm].name <<" ";
            cout<<"\n "<<T1[nm].phone<<" ";
           found = true ;
        }
        

    }
    if (!found){
            cout<<"\n not found in linaer probing ";

        }

    for(int i = 0 ; i <10 ; i ++){
        int nm = (index + i*i )% 10 ;

        if(T2[nm].name==  name ){
            cout<<"\n"<<T2[nm].name <<" ";
            cout<<"\n "<<T2[nm].phone<<" ";
           found1 = true ;
        }
        
        
    }
    if (!found1){
            cout<<"\n not found in quadraticprobing ";

        }
   }
};
int main() {
    tele h;
    int ch;

    do {
        cout << "\n\n1. Insert";
        cout << "\n2. Display";
        cout<<"\n3. search " ;
        cout << "\n4. Exit";
        cout << "\nEnter choice: ";
        cin >> ch;

        switch(ch) {
            case 1:
                h.insert();
                break;

            case 2:
                h.display();
                break;

            case 3:
                h.search();
                break;

            case 4:
                cout << "Exit";
                break;
        
        default:
        cout<<"invalid choice ";
        }
    } 
    while(ch!= 4);
return 0 ;
           
        }
