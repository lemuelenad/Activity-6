/*
Lemuel Jay B. Enad BSCPE 4A
Round Robin
*/

//Declaring variables for the LEDs globally
int RED1 = 13;
int RED2 = 11;
int RED3 = 9;
int RED4 = 7;
int RED5 = 5;
int RED6 = 3;
int BLUE1 = 12;
int BLUE2 = 10;
int BLUE3 = 8;
int BLUE4 = 6;
int BLUE5 = 4;
int BLUE6 = 2;

//Setup
void setup()
{
  //Setting up pins to output to light up LEDs
  pinMode(RED1, OUTPUT);
  pinMode(RED2, OUTPUT);
  pinMode(RED3, OUTPUT);
  pinMode(RED4, OUTPUT);
  pinMode(RED5, OUTPUT);
  pinMode(RED6, OUTPUT);
  pinMode(BLUE1, OUTPUT);
  pinMode(BLUE2, OUTPUT);
  pinMode(BLUE3, OUTPUT);
  pinMode(BLUE4, OUTPUT);
  pinMode(BLUE5, OUTPUT);
  pinMode(BLUE6, OUTPUT);
}

//Loop executes repeatedly
void loop(){
  // first round
  analogWrite (RED1, 255);
  analogWrite (BLUE1, 0);
  analogWrite (RED2, 255);
  analogWrite (BLUE2, 0);
  delay(1000);
  analogWrite (RED1, 0);
  analogWrite (BLUE1, 0);
  analogWrite (RED2, 0);
  analogWrite (BLUE2, 0);
  delay(1000);
  analogWrite (RED3, 255);
  analogWrite (BLUE3, 0);
  analogWrite (RED6, 255);
  analogWrite (BLUE6, 0);
  delay(1000);
  analogWrite (RED3, 0);
  analogWrite (BLUE3, 0);
  analogWrite (RED6, 0);
  analogWrite (BLUE6, 0);
  delay(1000);
  analogWrite (RED4, 255);
  analogWrite (BLUE4, 0);
  analogWrite (RED5, 255);
  analogWrite (BLUE5, 0);
  delay(1000);
  analogWrite (RED4, 0);
  analogWrite (BLUE4, 0);
  analogWrite (RED5, 0);
  analogWrite (BLUE5, 0);
  delay(1000);
  // second round
  analogWrite (RED3, 0);
  analogWrite (BLUE3, 128);
  analogWrite (RED4, 0);
  analogWrite (BLUE4, 128);
  delay(1000);
  analogWrite (RED3, 0);
  analogWrite (BLUE3, 0);
  analogWrite (RED4, 0);
  analogWrite (BLUE4, 0);
  delay(1000);
  analogWrite (RED6, 0);
  analogWrite (BLUE6, 128);
  analogWrite (RED1, 0);
  analogWrite (BLUE1, 128);
  delay(1000);
  analogWrite (RED6, 0);
  analogWrite (BLUE6, 0);
  analogWrite (RED1, 0);
  analogWrite (BLUE1, 0);
  delay(1000);
  analogWrite (RED2, 0);
  analogWrite (BLUE2, 128);
  analogWrite (RED5, 0);
  analogWrite (BLUE5, 128);
  delay(1000);
  analogWrite (RED2, 0);
  analogWrite (BLUE2, 0);
  analogWrite (RED5, 0);
  analogWrite (BLUE5, 0);
  delay(1000);
  //third round
  analogWrite (RED6, 128);
  analogWrite (BLUE6, 128);
  analogWrite (RED4, 128);
  analogWrite (BLUE4, 128);
  delay(1000);
  analogWrite (RED6, 0);
  analogWrite (BLUE6, 0);
  analogWrite (RED4, 0);
  analogWrite (BLUE4, 0);
  delay(1000);
  analogWrite (RED2, 128);
  analogWrite (BLUE2, 128);
  analogWrite (RED3, 128);
  analogWrite (BLUE3, 128);
  delay(1000);
  analogWrite (RED2, 0);
  analogWrite (BLUE2, 0);
  analogWrite (RED3, 0);
  analogWrite (BLUE3, 0);
  delay(1000);
  analogWrite (RED1, 128);
  analogWrite (BLUE1, 128);
  analogWrite (RED5, 128);
  analogWrite (BLUE5, 128);
  delay(1000);
  analogWrite (RED1, 0);
  analogWrite (BLUE1, 0);
  analogWrite (RED5, 0);
  analogWrite (BLUE5, 0);
  delay(1000);
  // fourth round
  analogWrite (RED4, 192);
  analogWrite (BLUE4, 0);
  analogWrite (RED1, 192);
  analogWrite (BLUE1, 0);
  delay(1000);
  analogWrite (RED4, 0);
  analogWrite (BLUE4, 0);
  analogWrite (RED1, 0);
  analogWrite (BLUE1, 0);
  delay(1000);
  analogWrite (RED5, 192);
  analogWrite (BLUE5, 0);
  analogWrite (RED3, 192);
  analogWrite (BLUE3, 0);
  delay(1000);
  analogWrite (RED5, 0);
  analogWrite (BLUE5, 0);
  analogWrite (RED3, 0);
  analogWrite (BLUE3, 0);
  delay(1000);
  analogWrite (RED6, 192);
  analogWrite (BLUE6, 0);
  analogWrite (RED2, 192);
  analogWrite (BLUE2, 0);
  delay(1000);
  analogWrite (RED6, 0);
  analogWrite (BLUE6, 0);
  analogWrite (RED2, 0);
  analogWrite (BLUE2, 0);
  delay(1000);
  // fifth round
  analogWrite (RED5, 0);
  analogWrite (BLUE5, 255);
  analogWrite (RED6, 0);
  analogWrite (BLUE6, 255);
  delay(1000);
  analogWrite (RED5,0);
  analogWrite (BLUE5,0);
  analogWrite (RED6, 0);
  analogWrite (BLUE6, 0);
  delay(1000);
  analogWrite (RED1, 0);
  analogWrite (BLUE1,255);
  analogWrite (RED3, 0);
  analogWrite (BLUE3, 255);
  delay(1000);
  analogWrite (RED1,0);
  analogWrite (BLUE1, 0);
  analogWrite (RED3, 0);
  analogWrite (BLUE3, 0);
  delay(1000);
  analogWrite (RED4, 0);
  analogWrite (BLUE4, 255);
  analogWrite (RED2, 0);
  analogWrite (BLUE2, 255);
  delay(1000);
  analogWrite (RED4, 0);
  analogWrite (BLUE4,0);
  analogWrite (RED2,0);
  analogWrite (BLUE2,0);
  delay(1000);
  exit(0);
}

void RGB_color(int red_light_value, int blue_light_value)
 {
  analogWrite(RED1, red_light_value);
  analogWrite(RED2, red_light_value);
  analogWrite(RED3, red_light_value);
  analogWrite(RED4, red_light_value);
  analogWrite(RED5, red_light_value);
  analogWrite(RED6, red_light_value);
  
  analogWrite(BLUE1, blue_light_value);
  analogWrite(BLUE2, blue_light_value);
  analogWrite(BLUE3, blue_light_value);
  analogWrite(BLUE4, blue_light_value);
  analogWrite(BLUE5, blue_light_value);
  analogWrite(BLUE6, blue_light_value);
  
}
