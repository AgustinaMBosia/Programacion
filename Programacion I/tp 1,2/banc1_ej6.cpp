#include <iostream>
#include <cmath>

using namespace std;


int l1,l2,l3,s,area;

int main(){

cout<<"se calculará el area de in triángulo"<<endl;


cout << "ingrese el lado uno del triangulo"<< endl;

cin>>l1;


cout << "ingrese el lado dos del triangulo"<< endl;

cin>>l2;

cout << "ingrese el lado tres del triangulo"<< endl;

cin>>l3;

s=(l1+l2+l3)/2;

area=sqrt(s*(s-l1)*(s-l2)*(s-l3));

cout<<"el area es de: "<<area;

}