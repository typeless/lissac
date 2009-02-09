// C code generated by Lisaac compiler (www.isaacOS.com) //
int arg_count;
char **arg_vector;

//==========================//
// EXTERNAL                 //
//==========================//

// SYSTEM_IO

#include <stdio.h>
#include <stdlib.h>
  
// Hardware 'print_char'
void print_char(char car)
{
  fputc(car,stdout);
}

// Hardware 'exit'
int die_with_code(int code)
{
  exit(code);
}


// SYSTEM
#include <time.h>

//==========================//
// TYPE                     //
//==========================//

// Generic Object
struct ___OBJ {
  unsigned long __id;
};

// NULL
#ifndef NULL
#define NULL ((void *)0)
#endif

// INTEGER
typedef int __INTEGER;

// TRUE
#define TRUE__ 1

// FALSE
#define FALSE__ 0

// BOOLEAN
typedef char __BOOLEAN;

// CHARACTER
typedef char __CHARACTER;

// INTEGER_8
typedef signed char __INTEGER_8;


void *table_type[0];

//==========================//
// GLOBAL                   //
//==========================//


//==========================//
// FUNCTION HEADER          //
//==========================//

// Debug Manager
void print_string(char *str);
// Source code
static __INTEGER ack__FB(__INTEGER x__HB,__INTEGER y__IB);
static void print_positif__FI(__INTEGER Self__GI);

//==========================//
// SOURCE CODE              //
//==========================//

int main(int argc,char **argv)
{
  __INTEGER Self__QC;
  __BOOLEAN __tmp__XC;
  arg_count  = argc;
  arg_vector = argv;
  Self__QC=ack__FB( 3, 4);
  if ((Self__QC ==  0)) {
    fputc((int)('0'),stdout);
    __tmp__XC=TRUE__;
  } else {
    __tmp__XC=FALSE__;
  };
  if ((! __tmp__XC)) {
    if ((Self__QC <  0)) {
      fputc((int)('-'),stdout);
      print_positif__FI((__INTEGER)(- Self__QC));
    } else {
      print_positif__FI(Self__QC);
    };
  };
  fputc((int)('\n'),stdout);
  fputc((int)('\n'),stdout);
  return( 0);
}

static __INTEGER ack__FB(__INTEGER x__HB,__INTEGER y__IB)
// ({INTEGER},{INTEGER}) With resultRecursive, No inlinable.
{
  __INTEGER result__KB;
  __BOOLEAN __tmp__SB;
  result__KB= 0;
  if ((x__HB ==  0)) {
    result__KB=(__INTEGER)(y__IB +  1);
    __tmp__SB=TRUE__;
  } else {
    __tmp__SB=FALSE__;
  };
  if ((! __tmp__SB)) {
    if ((y__IB ==  0)) {
      result__KB=ack__FB((__INTEGER)(x__HB -  1), 1);
    } else {
      result__KB=ack__FB((__INTEGER)(x__HB -  1),ack__FB(x__HB,(__INTEGER)(y__IB -  1)));
    };
  };
  return(result__KB);
}

static void print_positif__FI(__INTEGER Self__GI)
// ({INTEGER}) VoidRecursive, No inlinable.
{
  __INTEGER val__PI;
  __CHARACTER Result__4J;
  Result__4J=((__CHARACTER )(((__INTEGER_8)(((__INTEGER_8 )(__INTEGER)(Self__GI %  10)) + ((__INTEGER_8 )'0')))));
  val__PI=(__INTEGER)(Self__GI /  10);
  if ((val__PI !=  0)) {
    print_positif__FI(val__PI);
  };
  fputc((int)(Result__4J),stdout);
}

//==========================//
// DEBUG MANAGER            //
//==========================//

void print_string(char *str) 
{ 
  while (*str!=0) {
    print_char(*str); 
    str++; 
  };
}  

