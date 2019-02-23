int ledrosso2 = 2;
int ledgiallo3 = 3;
int ledverde4 = 4;
int ledrosso13 = 13;
int ledgiallo12 = 12;
int ledverde11 = 11;
int durataledrossi;
int durataledgialli;
int duratalampeggioverde;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledrosso2, OUTPUT);
  pinMode(ledgiallo3, OUTPUT);
  pinMode(ledverde4, OUTPUT);
  pinMode(ledrosso13, OUTPUT);
  pinMode(ledgiallo12, OUTPUT);
  pinMode(ledverde11, OUTPUT);
  //inserimento durate
  Serial.begin(9600);

Serial.println ("inserisci durata solo ledrossi");
while (Serial.available()== 0){}
  
    durataledrossi = Serial.readString().toInt();
    Serial.println(durataledrossi);
  Serial.println("inserisci durata led gialli + led rossi");
  while (Serial.available()== 0){}
    
    durataledgialli = Serial.readString().toInt();
    Serial.println(durataledgialli);
  Serial.println("inserisci durata lampeggio led verdi");
  //while duratalampeggiovarde == 0 || tempolampeggioverde/4 ==
  while (Serial.available()== 0)  {}











  
  duratalampeggioverde = Serial.readString().toInt();
    Serial.println(duratalampeggioverde);
}
void loop() {
  // put your main code here, to run repeatedly:
 rossolampeggioverde01();
  giallorosso00();
  rossolampeggioverde00();
  giallorosso01();
}
void lampeggioledverde4()
{
 
  digitalWrite(ledverde4, LOW);
  delay(durataledgialli);
  digitalWrite(ledverde4, HIGH);
  delay(duratalampeggioverde);
   digitalWrite(ledverde4, LOW);
  delay(duratalampeggioverde);
  digitalWrite(ledverde4, HIGH);
  delay(duratalampeggioverde);
   digitalWrite(ledverde4, LOW);
  delay(duratalampeggioverde);
  digitalWrite(ledverde4, HIGH);
  delay(duratalampeggioverde);
   digitalWrite(ledverde4, LOW);
  delay(duratalampeggioverde);
  digitalWrite(ledverde4, HIGH);
  delay(duratalampeggioverde);
  digitalWrite(ledverde4, LOW);
  delay(duratalampeggioverde);
}
void lampeggioledverde11()
{
  digitalWrite(ledverde11, LOW);
  delay(duratalampeggioverde);
  digitalWrite(ledverde11, HIGH);
  delay(duratalampeggioverde);
  digitalWrite(ledverde11, LOW);
  delay(duratalampeggioverde);
  digitalWrite(ledverde11, HIGH);
  delay(duratalampeggioverde);
  digitalWrite(ledverde11, LOW);
  delay(duratalampeggioverde);
  digitalWrite(ledverde11, HIGH);
  delay(duratalampeggioverde);
  digitalWrite(ledverde11, LOW);
  delay(duratalampeggioverde);
  digitalWrite(ledverde11, HIGH);
  delay(duratalampeggioverde);
  digitalWrite(ledverde11, LOW);
  delay(duratalampeggioverde);
}

void rossolampeggioverde01()
{
  digitalWrite(ledrosso2, HIGH);
  digitalWrite(ledverde11, HIGH);
  delay(durataledrossi);
 lampeggioledverde11();
}
void giallorosso00()
{
  digitalWrite(ledgiallo3, HIGH);
  digitalWrite(ledgiallo12, HIGH);
  delay(durataledgialli);
}

void rossolampeggioverde00()
{
  digitalWrite(ledrosso2, LOW);
  digitalWrite(ledgiallo3, LOW);
  digitalWrite(ledverde4, HIGH);
  digitalWrite(ledrosso13, HIGH);
  digitalWrite(ledgiallo12, LOW);
  delay(durataledrossi);
  lampeggioledverde4();
}

void giallorosso01(){
  digitalWrite(ledgiallo12, HIGH);
  digitalWrite(ledgiallo3, HIGH);
  delay(durataledgialli);
  digitalWrite(ledrosso13, LOW);
  digitalWrite(ledgiallo12, LOW);
  digitalWrite(ledgiallo3, LOW);
  
}
