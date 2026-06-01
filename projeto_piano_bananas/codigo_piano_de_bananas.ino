/* ******************* Piano de Bananas do Manual do Mundo *******************
   
   Criado por: Anderson Harayashiki Moreira
   Rev.: 01
   Data: 20.03.2019

   Guia de conexão:
   Ligar cada uma das entradas analógicas ao fio que vai ser conectado à banana e também a um resistor de 10M Ohm
   Ligar cada resistor de 10M Ohm ao 5V do Arduino
   Ligar o GND à pulseira

   Esse projeto foi inspirado pelo projeto da Makey Makey e se baseou no código publicado em: https://www.instructables.com/id/DIY-Makey-Makey-With-Arduino-Leonardo/
   
 ***************************************************************************** */

#include <Keyboard.h>
#include <movingAvg.h>


// Ajustar esses valores de acordo com a leitura feita pelo Arduino
const int limiarPressionado = 400;
const int limiarSolto = 500;
const byte numPinos = 6;


const byte pinosEntrada[numPinos] = {A0, A1, A2, A3, A4, A5};
const char teclas[numPinos] = {'t', 'y', 'u', 'i', 'o', 'p'};


struct estruturaEntrada
{
  byte pinoAnalogico;
  char tecla;
  movingAvg filtro = movingAvg(20);
  boolean pressionado = false;
};


estruturaEntrada pinos[numPinos];


void setup()
{
  Serial.begin(115200);


  for (int i = 0; i < numPinos; i++)
  {
    pinos[i].pinoAnalogico = pinosEntrada[i];
    pinos[i].tecla = teclas[i];
    pinos[i].filtro.begin();
  }
}




void loop()
{
  for (int i = 0; i < numPinos; i++)
  {
    float mediaAtual = pinos[i].filtro.reading(analogRead(pinos[i].pinoAnalogico));
    boolean estadoAnterior = pinos[i].pressionado;
    boolean estadoAtual = estadoAnterior;
    Serial.print(mediaAtual);
    Serial.print("\t");

    if (mediaAtual < limiarPressionado)
    {
      estadoAtual = true;      // Tecla pressionada
    }
    else if  (mediaAtual > limiarSolto)
    {
      estadoAtual = false;      // Tecla solta
    }


    if (estadoAtual != estadoAnterior)
    {
      if (estadoAtual)
        Keyboard.press(pinos[i].tecla);
      else
        Keyboard.release(pinos[i].tecla);
    }
    pinos[i].pressionado = estadoAtual;
  }
  Serial.println();
}