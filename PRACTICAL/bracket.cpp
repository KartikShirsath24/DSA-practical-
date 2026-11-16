#include <iostream>
#include <stack>
using namespace std ;

int main(){
             
    string  str ;
    int i = 0 ;


    cout <<"enter  the expreession :" ;
    cin>>str ;
    while(i < str.length()){
    if(str[i] == '[' || str[i] == '{' || str[i] == '('){
        s.push(str[i]);

    } 
    else if(str[i] == ']' || str[i] == '}' ||  str[i] == ')'){
        if(s.empty()){
            cout<<"not well parennthesized " ;
            return 0 ;

        }
    
        char ch = s.top();
        s.pop();


        if( (str[i]== ']' && ch != '[') ||
            (str[i]== '}' && ch != '{') || 
            (str[i]== ')' && ch != '(') ){
            cout<<"not well parentesized " ;
            return 0 ;  
        }
        
      } 
      i++ ;
}
if(s.empty()){
    cout<<"well parenthesized" ;
}
else{
    cout<<"not parenthesized";
}
return 0 ;
}