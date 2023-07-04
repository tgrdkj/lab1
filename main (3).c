#include <stdio.h>

int main() {
  
    int x, y, z;
  
    printf("Введiть x: ");
    scanf("%d", &x);
    printf("Введiть y: ");
    scanf("%d", &y);
    printf("Введiть z: ");
    scanf("%d", &z);

  if (x == y && y == z) {
      printf("1");
    } else {
      printf("0"); 
    }
    
    return 0;
}