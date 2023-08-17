/******************************************************************************************
 * FileName     : 01._dht11
 * Description  : 온습도 센서의 값을 시리얼 모니터에 출력해 보기
 * Author       : 박은정
 * Created Date : 2023.08.17
 * Reference    : 
******************************************************************************************/

#include "dht11.h"
#define DHT11PIN D2

dht11 DHT11;

void setup() {
  Serial.begin(115200);
}

void loop() {  
  DHT11.read(DHT11PIN);               // 온습도 센서(DTH11) 값 측정

  Serial.print(DHT11.temperature);    // 온도 값 출력
  Serial.print("℃ ");
  Serial.print(DHT11.humidity);       // 습도 값 출력
  Serial.println("%");

  delay(1000);                        // 1초 대기
}
//=========================================================================================
//                                                    
// (주)한국공학기술연구원 http://et.ketri.re.kr       
//                                                    
//=========================================================================================
