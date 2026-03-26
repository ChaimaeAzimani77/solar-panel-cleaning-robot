int capteur=0;
int tension=0;
bool fc1;
bool fc2;
bool bp;
void setup() {
  // Initialisation des broches des moteurs en sortie
  Serial.begin(9600);
  pinMode(5, OUTPUT); // Moteur 1 sens avant
  pinMode(6, OUTPUT); // Moteur 1 sens arriière
  pinMode(11, OUTPUT); // Moteur 2 sens arriière
  pinMode(10, OUTPUT); // Moteur 2 sens avant
  pinMode(3, OUTPUT); // Moteur 3 de la brosse
  // Initialisation de la broche du bouton-poussoir (fin de course) pour le mode automatique
  pinMode(7, INPUT); // fin de course 1
  pinMode(8, INPUT); // fin de course 2
  // Initialisation de la broche du bouton-poussoir pour le mode manuel
  pinMode(2, INPUT);
}
void uncycle() {
  do{
  analogWrite(5,255);
  analogWrite(10,255);
  analogWrite(3,255);
  analogWrite(6,0);
  analogWrite(11,0);sss
  fc1= digitalRead(7);
  delay(5);}
  while(fc1==0);

  do{
  analogWrite(6,255);
  analogWrite(11,255);
  analogWrite(3,255);
  analogWrite(5,0);
  analogWrite(10,0);
  fc2= digitalRead(8);
  delay(5);}
  while(fc2==0);
}
void loop() {
capteur=analogRead(A0);
Serial.print(capteur);
Serial.print(" ");
tension=analogRead(A1);
Serial.println(tension);
bp = digitalRead(2);
if(((tension<=614)&&(capteur>=700))||(bp == 1)){
    uncycle();
    }
else{ 
  analogWrite(5,0);
  analogWrite(6,0);
  analogWrite(10,0);
  analogWrite(11,0);s
  analogWrite(3,0);
}
}
