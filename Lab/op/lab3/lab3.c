#include <stdio.h>
#include <math.h>

unsigned char n, k, symbol1 = '+', symbol2 = 'O';

void forLoop() {
  for (n = 0; n < 5; n++) {
    for (k = 0; k < 5; k++){
      if(n == 0 || n == 4) if(k == 2) { printf("%2c", symbol2); } else { printf("%2c", symbol1); }
      if(n == 1 || n == 3) if(k == 1 || k == 2 || k == 3) { printf("%2c", symbol2); } else { printf("%2c", symbol1); }
      if(n == 2) printf("%2c", symbol2);
    }
    printf("\n");
  }
}

void whileLoop(){
  n = 0; k = 0;
  while (n < 5) {
    while (k < 5){
      if(n == 0 || n == 4) if(k == 2) { printf("%2c", symbol2); } else { printf("%2c", symbol1); }
      if(n == 1 || n == 3) if(k == 1 || k == 2 || k == 3) { printf("%2c", symbol2); } else { printf("%2c", symbol1); }
      if(n == 2) { printf("%2c", symbol2); }
      k++;
    }
    printf("\n");
    n++;
    k = 0;
  }
}

void doWhileLoop(){
  n = 0; k = 0;
  do {
    do {
      if(n == 0 || n == 4) if(k == 2) { printf("%2c", symbol2); } else { printf("%2c", symbol1); }
      if(n == 1 || n == 3) if(k == 1 || k == 2 || k == 3) { printf("%2c", symbol2); } else { printf("%2c", symbol1); }
      if(n == 2) { printf("%2c", symbol2); }
      k++;
    } while(k < 5);
    printf("\n");
    n++;
    k = 0;
  } while(n < 5);
}

int main(){
  printf("\n Лабораторная работа №3 вариант №11");
  printf("\n\n Выполнил студент гр. ИСТбд-12 Ильмурзин П.А.\n");
  printf("\n Написать программу для распечатки указаного набора символов.\n");
  
  // forLoop();
  // whileLoop();
  doWhileLoop();

  return 0;
}
