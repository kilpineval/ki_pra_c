#Protocolo RS22 con el compilador PCW, los pasos son los siguientes:
.Definir el tipo de compilador (PCW, PCM, PCH) y que tipo de contolador se ha de utilizar:
.Definir la frecuencia del oscilador 
.Cargar el protocolo RS-232 utilizando la directiva  RS-2322 #USE RS-232 (BAUD = bits por segundo, XMIT=pin, RCV=pin)
.mandarin dato utilizado instruccon printf(Funcion cadena valor)
En el ejemplo se utilizo u PIC16F887A que contiene en su arquitectura USART(modulo de comunicacione seriales) para la comunicacion con otros dispositivos en la fig  se muestran las conexiones.
Se transmite por el puerto C pi 6 y se recibe por el puerto C pin 7.usando elci ma2224
.El programa es el siguiente
#si esta definido(__PCM__)
#incluir<16F887A>
#use retrazo (relog=40000000)
#use rs22(baudios=2400, xmit=PIN_C&, rev=PIN_C7)
#usa standar_io(c)

vacio principal()
{
  hacer()
  {
    printf("/n PIC MICROCONTROLADORES");
  }
  mientras (verdadero)
}
editaremos el nombre del fichero 




