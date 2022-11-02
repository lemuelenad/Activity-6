/*
Lemuel Jay B. Enad BSCPE 4A
First IN First OUT
*/

int time[6] = {10000, 8000, 7000, 1000, 5000, 3000};
int count = 0; //used to identifies the element of time array.
  
void setup()
{
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
}

void loop()
{
  first_come_first_serve();  //calling the function.
  exit(0);
}

void first_come_first_serve(){
  for (int i=13; i>=8; i--){
  	digitalWrite(i, HIGH);	 //Turn the LED On
    delay(time[count]); 	 //Delay.
    digitalWrite(i, LOW);    //Turn the LED Off
    count++;                 //Increment count.
  }
}
