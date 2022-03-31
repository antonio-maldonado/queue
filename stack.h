#ifndef _STACK_HPP
#define _STACK_HPP
typedef int TIPO;
// define elementos del stack
const int STACKSIZE = 10;

struct Stack
{
  int top;
  TIPO items[STACKSIZE];
  Stack ()  {  top = -1;  }
};
bool empty (Stack* );         // true si esta vacio
bool pop (Stack*, TIPO* );    // true si hay problemas 
bool push (Stack*, TIPO );     // true si hay problemas 


#endif 

