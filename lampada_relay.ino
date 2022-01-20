int botao = 3;
int reley = 2;
int Led = 13;
 
int estadoDoled = LOW;
int estadoDobotao;
int ultimoEstadoDobotao = LOW;

unsigned long ultimoSalto = 0;
unsigned long atrasoDoSalto = 50;

void setup() {
  // put your setup code here, to run once:
  pinMode(Led, OUTPUT);
  pinMode(botao, OUTPUT); digitalWrite(Led, estadoDoled);
  pinMode(reley, OUTPUT); digitalWrite(reley, estadoDoled);
}

void loop() {
  // put your main code here, to run repeatedly:
  int leitura = digitalRead(botao);
  
  if(leitura != estadoDoled) {
    ultimoSalto = millis(); }
    
    
  if((millis() - ultimoSalto ) > atrasoDoSalto ) {
    
    if(leitura != estadoDobotao){
      
      if(estadoDobotao == HIGH){
          estadoDoled = !estadoDoled;
      }
    }
  }
   
}
