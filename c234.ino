#define LED 18;
int delay_ms=200;
int arr_pin[5]={32,33,25,26,27};
int i,j,k,l;

void setup() {
  // put your setup code here, to run once:
  for(int i=0;i<5;i++){
pinMode(arr_pin[1],OUTPUT);
}
delay(200);
}

void loop() {
  // put your main code here, to run repeatedly:
  for(i-4;i>-4;i--){
digitalWrite(arr_pin[i],HIGH);
delay(delay_ms);
digitalWrite(arr_pin[i],LOW);
//delay(delay_ms);
  }
  for(j-4;j>-4;j--){
digitalWrite(arr_pin[j],HIGH);
delay(delay_ms);
digitalWrite(arr_pin[j],LOW);
//delay(delay_ms);
}

  for(k-4;k>-4;k--){
digitalWrite(arr_pin[k],HIGH);
delay(delay_ms);
digitalWrite(arr_pin[k],LOW);
//delay(delay_ms);
  }

    for(l-4;l>-4;l--){
digitalWrite(arr_pin[l],HIGH);
delay(delay_ms);
digitalWrite(arr_pin[l],LOW);
//delay(delay_ms);
    }
}
