#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(32,16,2);



float pinoAnalogico = (A1);
float ValorLuz  = 0;
int janela = 6;
int porta = 5;
int botao1;
int botao2;
int alarme = 7;
int valorPIR = (A0);
bool lcdlimposus = false;                
bool lcdlimpoarm = false;

  
void setup()
{
  lcd.begin (16,2);
  lcd.backlight();
  lcd.init();
  
  Serial.begin(9600);
  pinMode(janela, INPUT);
  pinMode(porta, INPUT);
  pinMode(valorPIR, OUTPUT);
	
  
  
  
}

void loop()
{
  
  ValorLuz = analogRead (pinoAnalogico);
  if(ValorLuz>700){
    if(!lcdlimpoarm){
      lcd.clear();
      lcdlimpoarm = true;
    }
    lcd.setCursor( 1, 0);
  lcd.print("ALARME ARMADO!");
    
  }else{
  
  	lcdlimpoarm = false;
  }


    if (ValorLuz < 700) {
        if (!lcdlimposus) {
            lcd.clear();
            lcdlimposus = true;
         
        }
      	
        lcd.setCursor(0,0);
      	lcd.print("ALARME SUSPENSO!");
      
      	
    } else {
        lcdlimposus = false;
      	
    }

  
   
int valorPIR = analogRead (A0);
  if (valorPIR > 0 && ValorLuz > 700){

	lcd.clear();
  	lcd.setCursor (2, 0);
  	lcd.print ("TEM ALGUEM AI");
  	lcd.setCursor (2, 1);
  	lcd.print ("CUIDADO!");
 	
 	tone(alarme, 500);
   	delay(300);
    lcd.init();
    noTone(alarme);
   	
    
    
  }
 
  botao1 = digitalRead (janela);
  Serial.println (botao1);
  botao2 = digitalRead (porta);
  Serial.println (botao2);
  
  
  
     if(botao1 == 0 && ValorLuz > 700){
 
 	lcd.clear();
   	lcd.setCursor (2, 0);
  	lcd.print ("A JANELA FOI");
  	lcd.setCursor (2, 1);
  	lcd.print ("ABERTA!");
    
    tone(alarme, 500);
    lcd.init();
    noTone(alarme);
  

  }
  

  else if(botao2 == 0 && ValorLuz > 700){
    lcd.clear();
    lcd.setCursor (2, 0);
  	lcd.print ("A PORTA FOI");
  	lcd.setCursor (2, 1);
  	lcd.print ("ABERTA!");
 
    tone(alarme, 500);
    lcd.init();
    noTone(alarme);
	
  }
  
  
  
  
  Serial.println (ValorLuz);

    
  
    
    
  
  

  
}
