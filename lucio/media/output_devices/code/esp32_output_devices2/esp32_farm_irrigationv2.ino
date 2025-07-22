//libraries
#include <virtuabotixRTC.h>

//Settings
#define pino_RTC_CLK   5
#define pino_RTC_DATA  18
#define pino_RTC_RST   19

int dia          = 30,
    mes          = 5,
    ano          = 2020,
    dia_da_semana  = 7,
    hora         = 16,
    minuto      = 15,
    segundo      = 55
;

int pino_do_rele_1 = 22;

//defining variables for timer -- ps: separating variables with coma and in the end using ; is ok
int rele_liga_hora       = 16,
    rele_desliga_hora    = 17,
    rele_liga_minuto     = 16,
    rele_desliga_minuto  = 17
    ;
    
// rtc(clock, data, rst)
virtuabotixRTC myRTC(pino_RTC_CLK, pino_RTC_DATA, pino_RTC_RST);

//run once
void setup() {

   Serial.begin(115200);
   Serial.println("Program started");
   
  //    setDS1302Time(seconds, minutes, hour, dayofweek, day, month, year) uncoment after first compile and compile again
  myRTC.setDS1302Time(segundo, minuto, hora, dia_da_semana, dia, mes, ano);

  pinMode(pino_do_rele_1, OUTPUT);
  
}

//run in loop
void loop() {
  atualiza_relogio();//updates time
  Serial.print("Dia da Semana:");

  imprime_dia_da_semana(myRTC.dayofweek);
  imprime_hora();

//condition (logic test) here 2 conditions are tested hours and minutes with the && means and
if ((myRTC.hours) == rele_liga_hora && (myRTC.minutes) == rele_liga_minuto) {
  digitalWrite(pino_do_rele_1, HIGH);
  Serial.println("Pump is on");
  }  
if ((myRTC.minutes) == rele_desliga_minuto) {
  digitalWrite(pino_do_rele_1, LOW);
  Serial.println("Pump is off");
  }  
}
