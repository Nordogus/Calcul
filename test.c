#include <stdio.h>
#include <stdbool.h>
#include "operation.h"


bool result(int retour, int solution){
  if(retour == solution){
    printf("Tester passer\n");
    return true;
  }
  else
    printf("Tester echouer\n");
  
  return false;
}

int main(){

  printf("Addition:\n");

  int val = addition(1, 2);
  printf("1 + 2 = %d\n",val);
  if(!result(val, 3)) return 1;

  val = addition(0, 4);
  printf("0 + 4 = %d\n",val);
  if(!result(val, 4)) return 1;

  val = addition(-7, 5);
  printf("-7 + 5 = %d\n",val);
  if(!result(val, -2)) return 1;


  printf("Addition:\n");

  val = soustraction(8, 5);
  printf("8 - 5 = %d\n",val);
  if(!result(val, 3)) return 1;

  val = soustraction(0, 2);
  printf("0 - 2 = %d\n",val);
  if(!result(val, -2)) return 1;

  val = soustraction(-26, 32);
  printf("-26 - 32 = %d\n",val);
  if(!result(val, -58)) return 1;


  printf("\nMultiplication:\n");

  val = multiplication(8, 5);
  printf("8 x 5 = %d\n",val);
  if(!result(val, 40)) return 1;

  val = multiplication(0, 5);
  printf("0 x 5 = %d\n",val);
  if(!result(val, 0)) return 1;

  val = multiplication(-8, 5);
  printf("-8 x 5 = %d\n",val);
  if(!result(val, -40)) return 1;


  printf("\nDivision:\n");

  float val2 = division(8, 5);
  printf("8 / 5 = %f\n",val2);
  if(!result(val, 1.6)) return 1;

  val2 = division(-8, 5);
  printf("-8 / 5 = %f\n",val2);
  if(!result(val, -1.6)) return 1;

  val2 = division(8.2, 5);
  printf("8 / 5 = %f\n",val2);
  if(!result(val, 41)) return 1;

  float x = 5.2f;
}