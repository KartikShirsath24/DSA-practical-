#include <iostream>
using namespace std ;

int main(){
    
    int n ;
    cout<<"\n_________________________" ;
     cout<<"\n enter the size of array :" ;
    cin>>n ;
    int a[n];
    int i ;
   

    int key ;
    
   
   
    for(i=0 ; i<n ; i++){
         
        cout<<"\n enter the roll no. who attenend the session  :" ;
        cin>>a[i] ;
    }
    cout<<"\n enter the roll no. to search :\n" ;
    cin>>key ;


    int low =0 ;
    int high = n-1 ;
    int mid ;
    int found = 0 ;
    int ch ;
    cout<<" \n ----------enter the choice : -----------\n" ;
    cout<<" \n -------1. linear search-------- \n-------2. BInary search ------\n" ;
    cin>>ch ;
     switch(ch){
        case 1 :
        for ( i= 0 ; i < n ; i++ ){
            if(key==a[i]){
                cout<<"roll  no. found " ;
                break;
            }
        }
        if(key!=a[i]){
            cout<<"roll no. doesn't found " ;
        }
        break ;
        case 2 : 
     
   while(low<=high){ 
    mid = (low+high)/2 ;

    if(a[mid]==key){
        cout<< " roll no. found" ;
        found = 1 ;
        break ;

    } 
    else if(a[mid]>key){
        high = mid - 1 ;

    }
    else{
       low = mid  + 1 ;
    }
   }
   if(found == 0 ){
    cout<<" roll no.  not found ";
   } 
}
    return 0 ;


}