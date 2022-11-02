//round robin

int time_quantum = 2000;
int burst_time[6] = {5000, 3000, 1000, 2000, 3000, 4000};
int pin[6] = {13, 12, 11, 10, 9, 8};
int ready_queue[6];
int arrival_time[6] = {0, 5000, 2000, 3000, 6000, 5000};
int time = 0;
int temp;

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
  round_robin();
}

void round_robin(){
  for (int i=0; i<6; i++){
    for (int j=0; j<6; j++){
      if (arrival_time[i] < arrival_time[j]){
      	temp = arrival_time[i];
        arrival_time[i] = arrival_time[j];
        arrival_time[j] = temp;
        
        temp = burst_time[i];
        burst_time[i] = burst_time[j];
        burst_time[j] = temp;
        
        temp = pin[i];
        pin[i] = pin[j];
        pin[j] = temp;
      }
    }
  }
  
  for (int i=0; i<6; i++){
  	digitalWrite(pin[i], HIGH);
    delay(time_quantum);
    digitalWrite(pin[i], LOW);
    burst_time[i] = burst_time[i] - time_quantum;
  
  }
  
}
