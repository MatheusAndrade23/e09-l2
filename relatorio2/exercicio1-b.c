#include <stdio.h>

void delay(int time){
    printf("Delay %d miliseconds.\n", time);
}

int main()
{   
    int estado = 1;
    
    int led_verde = 0;
    int led_amarelo = 0;
    int led_vermelho = 0;
    
    while(1){
      switch (estado) {
            
          case 1:
          
            led_vermelho = 0;
            led_verde = 1;

            delay(12000);
                
            estado = 2;
            break;
            
          case 2:

            led_verde = 0;
            led_amarelo = 1;
            
            delay(3000);
                
            estado = 3;
            break;
        
          case 3:
            
            led_vermelho = 0;
            led_vermelho = 1;

            delay(3000);
                
            estado = 1;
            break;
                
          default:
            break;
        }
            
    }

    return 0;
}