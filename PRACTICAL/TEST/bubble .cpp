#include <iostream>
using namespace std ; 

int main(){
    int n ;
    cout<<"Enter the size of array :";
    cin >> n ;

    float a[n];
    for(int i = 0 ; i < n ; i++){
        cout<<"Enter the marks of students :";
        cin>>a[i];
        }

    float temp ;
    int j , i ;
    int min ;
    // for( i = 0 ; i < n -1 ; i ++){
    //     for( j = 0 ; j < n - i - 1 ; j ++ ){
    //         if(a[j] > a[j + 1 ]){
    //             temp = a[j];
    //             a[j] = a[j+1] ;
    //             a[j+1] = temp ;
    //                     }
    //                 }
    //     }
    //     cout<<"\n sorted array :";
    //     for( i = 0 ; i <n ; i ++){
    //        cout<<a[i]<<" ";
    //     }  
    //      cout<<"\n top 5 :";
    //      for(int i = n-1 ; i >= n - 5 ; i --){
    //          cout<<a[i]<<" ";

    //      }
     
    for(i= 0 ; i < n ; i ++){
        min = i ;
        for(j=i+1 ; j < n ; j ++){
            if(a[j] < a[min]){
                min = j ;
           }
            
        }
        temp = a[i] ;
                a[i] = a[min] ;
                a[min] = temp ;
    }
    cout<<"\nsorted array :";
    for( i = 0 ; i < n ; i ++){
        cout<<a[i]<<" ";
    }

    cout<<"\ntop 5 : " ;
    for(i=n-1 ; i>= n-5 ; i -- ){ 
        cout << a[i]<<" "; 
    }
}