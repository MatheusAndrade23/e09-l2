#include <stdio.h>
#include <stdbool.h>

int main() {
  float priceWhenBuyMoreOrEqualThan12 = 0.65;
  float priceWhenBuyLessThan12 = 0.80;

  int numberOfFruitsBought = 0;
  bool boughtMoreOrEqualThan12 = false;

  printf("Digite o número de frutas que deseja comprar: ");
  scanf("%d", &numberOfFruitsBought);

  if (numberOfFruitsBought >= 12) {
    boughtMoreOrEqualThan12 = true;
  }

  if (boughtMoreOrEqualThan12) {
    printf("Preco da unidade: R$%.2f\n", priceWhenBuyMoreOrEqualThan12);
    printf("Preco total: R$%.2f\n", priceWhenBuyMoreOrEqualThan12 * numberOfFruitsBought);
  } else {
    printf("Preco da unidade: R$%.2f\n", priceWhenBuyLessThan12);
     printf("Preco total: R$%.2f\n", priceWhenBuyLessThan12 * numberOfFruitsBought);
  }

  return 0;
}
