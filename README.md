# PRACTICA 1 : BLINK

## CODIGO

```
int led = 13;

void setup() {                

  pinMode(led, OUTPUT); 

  Serial.begin(115200);    
}

void loop() {
  
  digitalWrite(led, HIGH);  
  Serial.println("on");     
  delay(500);               
  digitalWrite(led, LOW);   
  Serial.println("off");    
  delay(500);               
}
```

## DIAGRAMA DE FLUJO

::: mermaid
graph TD;
    A(Turn the LED on)-->B(print on);
    B-->C(wait for 500 ms);
    C-->D(turn the LED off);
    D-->E(print off);
    E-->F(wait for 500 ms);
    F-->A;
:::

## DIAGRAMA DE TIEMPOS

