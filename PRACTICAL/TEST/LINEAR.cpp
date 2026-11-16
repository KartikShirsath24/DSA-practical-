#include <iostream>
#include <algorithm>
using namespace std ;


int main(){
    int n ;
    cout<<"Enter the size of array :";
    cin>>n ;

    int a[n];
    int key ;
    int high = n-1 ;
    int low = 0 ;
    int mid ;
    int i ;
    int found = 0;
    int ch ;
    int count = 0 ;

    for(i = 0 ; i <n ; i ++){
        cout<<"ENter the roll no : ";
        cin>>a[i] ;
    }

    //linaer
    cout<<"ENterthe roll no to search :" ;
    cin>>key ;

    cout<<"ENter the choice \n 1.linear \n 2.binary ";
    cin>>ch ;
   switch(ch){
    case 1 :
   
    for(i = 0 ; i < n ; i ++){
        count ++ ;
        if(key==a[i]){
            cout<<"key found ";
            break ;
        }

    }
    if(key!=a[i]){
        cout<<"key not found";
        
    }
    cout<<"\ncomparisions :"<<count ;

break ;


case 2 :
 sort(a,a+n) ;
 
while(low<=high){

    mid = (low+high)/2 ;
    count ++ ;
    if(a[mid]==key ){
        cout<<"key found ";
        found = 1 ;
        break ;
    }
    else if(a[mid]>key){
        high = mid - 1 ;
    }
    else {
        low = mid + 1;
    }
}
if(found == 0 ){
    cout<<"key not found ";
}
cout<<"\n comparision :"<<count ;
 break ;
}
return 0 ;
}