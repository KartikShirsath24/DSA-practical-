#include <iostream>
#include <stack>
#include <string>
using namespace std ; 

int main(){
    stack<char> s ;
string str ; 
size_t i = 0 ;
cout<<" Enter the expreesion :";
cin>>str ;


while( i < str.length()){
    if(str[i] == '[' || str[i] == '(' || str[i] == ' {'){
        s.push(str[i]);
    }
    else if(str[i] == ']' || str[i] == ')' || str[i] == '}'){
    if(s.empty()){
       cout<<" NOt well parenthesized " ;
        return 0  ; 
    }
    char ch = s.top();
    s.pop();

    if((str[i]==']' && ch != '[' )||
       (str[i]==')' && ch != '(' )||
       (str[i]== '}' && ch != '{')) {
        cout<<"not well parenthesized " ;
        return 0 ; 
       }
    }
i ++ ;       
}


if(s.empty()){
    cout<<" well parenthesized ";

}
else{
    cout<<"not well parenthesized " ;
}
return  0 ;
} 