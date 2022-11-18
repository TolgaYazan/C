#include <iostream>
using namespace std;

void diagonal(int a){
      for(int i =1; i<=a; i++){
            for(int j=1; j<=a; j++){
               if(j==i){
                   cout<<j<<" " ;  
               } else{
                     cout<<"*"<<" ";
               }
               
            }
      cout<<"\n";
            
            
      }
}
      void unionArray(int a[],int size1, int b[],int size2){
            
            for(int i=0; i<size1; i++){
                  for(int j=0; j<size2; j++){
                       /* if(a[i] ==b[j]){
                        cout<<a[i]<<" ";
                        }*/
                         if(a[i]!=b[j]){
                              cout<<b[j]<<" ";
                        }
                  
            } 
      }
      } 
      
      void interSecitonArray(int a[],int size1, int b[],int size2){
            for(int i=0; i<size1;i++){
                  for(int j=0; j<size2; j++){
                        if(a[i]==b[j]){
                              cout<<a[i]<<" ";
                        }
                  }
            }
      }
int main() {
	cout<<"Hello cpp""\n";
	
	diagonal(6);
	
	int k[]= {6 , 3 , 5 ,7 ,9};
	int c[]= { 1 , 5 , 6 ,4,7};
	cout<<"Testing unionArray""\n";
	unionArray(c,5,k,5);
	cout<<"\n""Testing interSecitonArray""\n";
	interSecitonArray(k,5,c,5);
	return 0;


}

