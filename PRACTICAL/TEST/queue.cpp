#include <iostream>
using namespace std ;

class Jobqueue{
   int  queue[10] ;
   int front , rear ; 

   public : 

   Jobqueue(){
    front = -1 ;
    rear = -1 ;
   }

   //add job 
   void add(int job ){
    if(rear == 9 ){
        cout<<"queue full" ;
        return ;
    }
    if(front==-1){
        front = 0 ;
    }

    rear ++ ;
    queue[rear] = job ;

    cout<<" job added ";

   }

   //remove job 
   void remove( ){
    if(front == -1 || front > rear ){
        cout<<"queue is empty ";
        front = -1 ;
        rear = -1 ;
        return ;
    }
    cout<<"job removed :"<<queue[front]<<" "<<endl ;

    if(front > rear ){
        front = -1 ;
        rear = -1 ;
    }
   }
   // dispaly 
   void display( ){
    if(front ==-1 || front > rear ){
        cout << " queue is empty ";
        front = -1 ;
        rear = -1 ;
         }
       cout<<"job in queue :";
       for( int i = front ; i <=rear ; i ++){
        cout<<queue[i];       }

   }
};
int main(){
    Jobqueue j ;
    int ch ;
    int job ;
do{
    cout<<" Enter the choice : \n 1.add job \n2.delete job \n 3. display \n 4. exist " ;
    cin>>ch ;
   switch(ch){
    case 1:
    cout<<"Enter the job :" ;
    cin>>job ;
    j.add(job);
    break ;

    case 2 :
    j.remove();
    break ;

    case 3 :
    j.display() ;
    break ;

    case 4 :
    break ;

    default :
    cout<<"invalid choice " ;
   }}
   while(ch!= 4);
   return 0 ;
     }
