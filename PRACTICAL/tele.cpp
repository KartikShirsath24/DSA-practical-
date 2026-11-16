#include <iostream>
#include <string> 
using namespace std;

struct record {
    string name;
    long long phone;
};

class hashtable {
public:
    record T1[10];
    record T2[10];

    hashtable() {
        for(int i = 0; i < 10; i++) {
            T1[i].name = "";
            T2[i].name = "";
        }
    }

    // Hash Function
    int hashfunction(string name) {
        int sum = 0;

    for(string::size_type i = 0; i < name.length(); i++){
            sum = sum + name[i];
        }

        return sum % 10;
    }

    // Insert Function
    void insert() {
        string name;
        long long phone;

        cout << "Enter name: ";
        cin >> name;

        cout << "Enter phone number: ";
        cin >> phone;

        int index = hashfunction(name);
        bool flag1 = false, flag2 = false;

        // Linear Probing
        for(int i = 0; i < 10; i++) {
            int nm = (index + i) % 10;

            if(T1[nm].name == "") {
                T1[nm].name = name;
                T1[nm].phone = phone;
                flag1 = true;
                break;
            }
        }

        // Quadratic Probing
        for(int i = 0; i < 10; i++) {
            int nm = (index + i*i) % 10;

            if(T2[nm].name == "") {
                T2[nm].name = name;
                T2[nm].phone = phone;
                flag2 = true;
                break;
            }
        }

        if(flag1 && flag2)
            cout << "Record inserted successfully";
        else
            cout << "Table is full or insertion failed";
    }

    // Display Function
    void display() {
        cout << "\nLinear Probing:\n";

        for(int i = 0; i < 10; i++) {
            if(T1[i].name != "")
                cout << i << " " << T1[i].name
                     << " " << T1[i].phone << endl;
        }

        cout << "\nQuadratic Probing:\n";

        for(int i = 0; i < 10; i++) {
            if(T2[i].name != "")
                cout << i << " " << T2[i].name
                     << " " << T2[i].phone << endl;
        }
    }

    void search(){
        string name ;
        int index = hashfunction(name) ;
        bool found = false ;
        bool found1 = false ;

        
        cout<<"enter the name to serach :";
        cin>>name ;

        //linear probing 
        for(int i = 0 ; i <10 ; i ++ ){
            int nm = (index +i) % 10 ;

        if(T1[nm].name == name){
            cout<<T1[nm].name<<" "
            <<T1[nm].phone<<endl ;
            found = true ;
            break ;
        }
        
        }
        if(!found){
            cout<<" not in linear probing ";
        }
        //quadratic probing 
        for(int i = 0 ; i <10 ; i++ ){
            int nm = (index + i*i)% 10 ;

            if(T2[nm].name == name ){
                cout<<T2[nm].name<<" "
                <<T2[nm].phone<<endl ;
                found1 = true ;
                break ;
            }
            
        }
        if(!found1){
            cout<<"not found in quadratic probing ";
        }
    }
};

int main() {
    hashtable h;
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

     






