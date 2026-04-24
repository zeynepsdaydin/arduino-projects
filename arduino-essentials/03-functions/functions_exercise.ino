int a=5;
int b=7;
int result=0;
int result2=0;

void setup() {
  Serial.begin(9600);
  result=calculate(a,b);
  writeTheScreen(result);
  Serial.println(a);
  Serial.println(b);
  Serial.println(result);
  result2=addAllNum();
  Serial.print("result2=");
  Serial.println(result2);
  reset();
}
void loop() {


}

int calculate(int x, int y){
  return (x+y) / 2 + 5;
}
void writeTheScreen(int z){
  Serial.println(result);
}
int addAllNum(){
  return a+ b;
}
void reset(){
  a=0;
  b=0;
  result=0;
  }
