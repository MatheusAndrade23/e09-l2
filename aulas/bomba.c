int main(){

  // Direcionamento dos pinos de saída (DDRB, DDRC, DDRD)
  DDRB = 0x01; // 0 0 0 0 0 0 0 1 (PB0 - Trembo)

  PORTC = 0x02; // 0 0 0 0 0 1 0 0 (PC1 - Desliga)

  PORTB = 0x00; // 0 0 0 0 0 0 0 0 (PB0 - Bomba)

  while(1){
    unsigned short int chave, baixo, alto, liga, desliga;

    // Entradas do Portal C
    desliga = PINC & 0x02; // 0 0 0 0 0 1 0 0 (PC1 - Desliga)
    liga = PINC & 0x01; // 0 0 0 0 0 0 0 1 (PC0 - Liga)

    // Entradas do Portal D
    chave = PIND & 0x08; // 0 0 0 0 1 0 0 0 (PD3 - Chave)
    baixo = PIND & 0x10; // 0 0 0 1 0 0 0 0 (PD4 - Baixo)
    alto = PIND & 0x20; // 0 0 1 0 0 0 0 0 (PD5 - Alto)

    if(chave == 0) {
      if(!(alto == 0)){
        PORTB = 0; // 0 0 0 0 0 0 0 0 (PB0 - Bomba)
      }

      if(!(baixo == 0)){
        PORTB = 1; // 0 0 0 0 0 0 0 1 (PB0 - Bomba)
      }

    } else {
      if(!(alto == 0)){
        PORTB = 1; // 0 0 0 0 0 0 0 1 (PB0 - Bomba)
      }

      if(!(baixo == 0)){
        PORTB = 0; // 0 0 0 0 0 0 0 0 (PB0 - Bomba)
      }
    }
  }
}