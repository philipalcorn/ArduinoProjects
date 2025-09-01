/* 
Template for aruduino projects
is a blinking light code


*/
void setup() { 
	//Initialize builtin led as input 
	pinMode(LED_BUILTIN, OUTPUT); 

}

//This loop repeats continuously
void loop() 
{
	digitalWrite(LED_BUILTIN, HIGH);
	delay(1000);
	digitalWrite(LED_BUILTIN, LOW);
	delay(1000);
}


