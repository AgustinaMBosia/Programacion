#include <iostream>
using namespace std;
 

 int main(){

//1
    int A=1,B=2,C=3,*p1,*p2;

//2
    p1=&A;
    p2=&C;

    
//3
    *p1=(*p2)++;

//4
    p1=p2;

    cout<<"A= "<<A<<endl;
    cout<<"B= "<<B<<endl;
    cout<<"C= "<<C<<endl;
    cout<<"*p1= "<<*p1<<endl;
    cout<<"*p2= "<<*p2<<endl;
    cout<<"p1= "<<p1<<endl;
    cout<<"p2= "<<p2<<endl;


    
//5
    p2=&B;

    
//6
    *p1-=*p2;

    
//7
    ++*p2;

    
//8
    *p1 *= *p2;

    

    A=++*p2 * *p1;

    

    p1=&A;
    *p2=(*p1/=*p2);

    
    

 }