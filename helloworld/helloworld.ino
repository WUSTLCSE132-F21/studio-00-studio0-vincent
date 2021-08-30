/* helloworld
 *
 * output simple hello message
 *
 */

void setup() {
  Serial.begin(9600);
  int n = 0;
}

void loop() {
  int n = 0;
  while(true) {
  delay(1000);
  n++;
  Serial.println(n + " sec have elapsed.");
  }
}
