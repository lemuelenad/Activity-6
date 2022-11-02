//Shortest Job First

int pin[6] = {13, 12, 11, 10, 9, 8};
int time[6] = {3000, 7000, 8000, 2000, 4000, 5000};
int temp;
int count = 0;

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
  shortest_job(); //calling the function.
  exit(0);
}

void shortest_job(){
  for (int i=0; i<6; i++){
    for (int j=0; j<6; j++){
      if (time[i] < time[j]){
      	temp = time[i];
        time[i] = time[j];
        time[j] = temp;
        
        temp = pin[i];
        pin[i] = pin[j];
        pin[j] = temp;
      }
    }
  }
  while (count != 6){
  	digitalWrite(pin[count], HIGH);
    delay(time[count]);
    digitalWrite(pin[count], LOW);
    count++;
  }
}
