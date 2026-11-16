#include <iostream>
using namespace std ;
 
int main(){
    int n ;
    cout<<"Enter the size of array :" ;
    cin>>n ; 
    double   a[n];
    int i , j;
    
    for(i = 0 ; i < n ; i ++ ) {
      cout<<"enter the first year percentage  of student :" ;
    cin>>a[i] ;
 }    
    int temp ;
    int min;
    int ch ; 
    cout<< "Enter the choice : \n 1. bubble sort \n 2. selection sort \n " ;
    

    cin >>ch;
    switch(ch){
      case 1 :
      cout<<"Bubble sort : \n " ;
    
    for(i=0 ; i<n - 1 ; i ++ )
{
   for(  j = 0 ; j< n-i-1; j ++)
   {
     if (a[j] > a[j+1])
      {
         temp = a[j];
         a[j] = a[j+1];
         a[j+1] = temp ;

      }
   }
   
   }
   cout<<"sorted array  : \n" ;
   for (i=0 ; i < n ; i++){
      cout<<a[i] ;
}

break ;
   case 2 :
   cout<<"selection sort : \n" ;
   for(i = 0 ; i < n ; i++){
      min = i ;

      for(  j = i+1 ; j < n ; j ++){
         if(a[j]<a[min]){
            min = j;          }
      }
      temp = a[i];
      a[i] = a[min ] ;
    a[min] = temp ;

      }
   
   cout<<"sorted array  : \n" ;
   for (i=0 ; i < n ; i++){
      cout<<a[i]<<"  " ;
}
break ;
default :
cout <<"invalid choice :" ;
break ;
}
return 0 ;
}