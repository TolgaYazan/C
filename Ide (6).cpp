#include <iostream>
using namespace std;

void FindSmalnumber(int a, int b, int c){
    int min = a;
    if(a<b && a<c){
        cout<<min<<endl;
    }else if(b<a && b<c){
        min = b;
        cout<<min<<endl;
    }else{
        min =c;
        cout<<min<<endl;
        
    }
}

int main() {
	FindSmalnumber(6,5,3);
	return 0;
}
