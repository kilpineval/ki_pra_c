#incluir <avr/io.h>
#incluir <util/retraso.h>

#definir caso 0 //variable que avilita al caso de switch

Ent principal(vacio){
  DDRB =0xFF; //Se configura todo el puerto B como salidas
  pUERTO=0*AA; //==>PUERTO=1010101010
  _delay_ms(5000);
  mientras(1){ //iniciamos ciclo infinito
    cambiar(caso){
      caso 0; //Asignacion simple
      PUERTO=0*AA; //==> PUERTO = 1010101010
      _delay_ms(500);
      PUERTO=0*A; //==> PUERTO = 101000000
      _delay_ms(500);
      romper;3

      caso 1; //operador O y Y
      PUERTO | = 0*0A: //==> PUERTO = 10101010 | 00001010
      _delay_ms(500);
      PUERTO & = 0*0A; //==> puerto = 10101010 y 10100000
      _delay_ms(500);
      romper

      caso 2 //OPERARADOR NO
      PUERTO =~PUERTO //==>PUERTO=010101010
      _delay_ms(1000);
      romper

      caso 3 //OPERARADOR XOR;
      PUERTO =~PUERTO //==>PUERTO=10101010 ^00001010
      _delay_ms(500);
      romper

      caso 4 //OPERARADOR DE DESPLAZAMIENTO IZQUIERDA;
      PUERTO <<=1; //==>PUERTOB=10101010 << 1
      _delay_ms(500);
      romper

      caso 5 //OPERARADOR DE DESPLAZAMIENTO DERECHA;
      PUERTO >>=1; //==>PUERTOB=10101010 >> 1
      _delay_ms(500);
      romper
    }//fin del cambio
  }//fin dl tiempo
}//Fin del principal
    queremos editar files
  
      



























































    }
  

  }
}
