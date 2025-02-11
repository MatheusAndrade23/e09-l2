#include <stdio.h>
#include <stdbool.h>

int main() {
  int number = 0;
    
  while(true) {
        
    printf("Digite um número entre 0 e 50: ");
    scanf("%d", &number);

    bool tippedNumberIsBetween0and50 = number > 0 && number <= 50;
    
    if(tippedNumberIsBetween0and50) {
      break;
    }
  }

  for(int i = number - 1; i > 0; i--){
    float divisionRest = number % i; 
    printf("Resto da divisao de %d por %d: %0.f\n", number, i, divisionRest);
  }
    
  return 0;
}