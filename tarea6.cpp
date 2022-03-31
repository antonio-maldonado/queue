//Antonio Maldonado
//Tarea 6
#include<iostream>
#include"stack.h"
using namespace std;

int main(){
Stack S,nueva;
int a=1;
cout<<"Ingrese elementos a la pila"<<endl;
cout<<"Entrada: ";
while(a!=0){
cin>>a;
if(a==0)
break;
else
!push(&S,a);
}
while(!empty(&S)){
!pop(&S,&a);
!push(&nueva,a);
}
cout<<endl<<"Salida: ";
while(!empty(&nueva)){
!pop(&nueva,&a);
cout<<a<<" ";
}
cout<<endl;
return 0;
}
