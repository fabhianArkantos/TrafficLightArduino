#include "Led.h"

Led _greenLight(3);
Led _redLight(5);
Led _yellowLight(4);


void setup() {

}

void loop() {

	//Encendemos led verde
	_greenLight.turnOn();
	//Esperar 10 segundos
	delay(10000);
	//Apagar Led verde
	_greenLight.turnOff();
	//Encendemos led amarillo
	_yellowLight.turnOn();
	//Esperamos 5 segundos
	delay(5000);
	//Apagamos led amarillo
	_yellowLight.turnOff();
	//encendemos led rojo
	_redLight.turnOn();
	//esperamos 10 segundos
	delay(10000);
	//apagamos led rojo
	_redLight.turnOff();


}
