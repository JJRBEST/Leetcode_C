#include <stdio.h>
#include <stdbool.h>
int numb(int n) {
    int r = 0;
    while(n) {
         int number = n % 10;
         n /= 10;
         r += number * number;
    }
    return r;
}

bool isHappy(int n){
  int fast = n;
  int slow = n;
  
  do {
        slow = numb(slow);
        fast = numb(numb(fast));
  }while(slow != fast);
  
  return fast == 1;
}
void main() {
}
