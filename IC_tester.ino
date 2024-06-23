int pin1=2 , pin1_status = 0;
int pin2=3 , pin2_status = 0;
int pin3=4 , pin3_status = 0;
int pin4=5 , pin4_status = 0;
int pin5=6 , pin5_status = 0;
int pin6=7 , pin6_status = 0;
int pin8=8 , pin8_status = 0;
int pin9=9 , pin9_status = 0;
int pin10=A0 , pin10_status = 0;
int pin11=A1, pin11_status = 0;
int pin12=A2 , pin12_status = 0;
int pin13=A3 , pin13_status = 0;
int Red_LED = 12;
int Green =11;
int Buzzer = A5;
String pin_status = "*A0*B0*C0*D0*E0*F0*G0*H0*I0*J0*K0*L0*";
void setup()
{
pinMode(Red_LED, OUTPUT);
pinMode(Green, OUTPUT);
pinMode(Buzzer, OUTPUT);
Serial.begin(9600);
//digitalWrite(Red_LED,LOW);
//digitalWrite(Green,LOW);
}
void loop()
{
if (Serial.available())
{
delay(100);
char RSD= Serial.read();
digitalWrite(Buzzer,HIGH);
delay(200);
digitalWrite(Buzzer,LOW);
digitalWrite(Red_LED,LOW);
digitalWrite(Green,LOW);
//.........................OR GATE ... start.....................................//
if(RSD=='A')
{
// OR Gate
pin_status = "*A1*B1*C1*D1*E1*F1*G1*H1*I1*J1*K1*L1*";
digitalWrite(Red_LED,LOW);
digitalWrite(Green,HIGH);
pinMode(pin1, OUTPUT);
pinMode(pin2, OUTPUT);
pinMode(pin3, INPUT);
pinMode(pin4, OUTPUT);
pinMode(pin5, OUTPUT);
pinMode(pin6, INPUT);
pinMode(pin8, INPUT);
pinMode(pin9, OUTPUT);
pinMode(pin10, OUTPUT);
pinMode(pin11, INPUT);
pinMode(pin12, OUTPUT);
pinMode(pin13, OUTPUT);
digitalWrite(Red_LED,LOW);
digitalWrite(Green,HIGH);
//.............................OR .1,2,3...................................//
//OR1
String OR1_pin_status = "*A1*B1*C1*";
//case 1: 0,0->0
digitalWrite(pin1,LOW);
digitalWrite(pin2,LOW);
pin3_status = digitalRead(pin3);
if(pin3_status!=0)
{
OR1_pin_status = "*A0*B0*C0*";
digitalWrite(Red_LED,HIGH);
digitalWrite(Green,LOW);
}
//case 2: 0,1->1
digitalWrite(pin1,LOW);
digitalWrite(pin2,HIGH);
pin3_status = digitalRead(pin3);
if(pin3_status!=1)
{
OR1_pin_status = "*A0*B0*C0*";
digitalWrite(Red_LED,HIGH);
digitalWrite(Green,LOW);
}
//case 3: 1,0->1
digitalWrite(pin1,HIGH);
digitalWrite(pin2,LOW);
pin3_status = digitalRead(pin3);
if(pin3_status!=1)
{
OR1_pin_status = "*A0*B0*C0*";
digitalWrite(Red_LED,HIGH);
digitalWrite(Green,LOW);
}
//case 4: 1,1->1
digitalWrite(pin1,HIGH);
digitalWrite(pin2,HIGH);
pin3_status = digitalRead(pin3);
if(pin3_status!=1)
{
OR1_pin_status = "*A0*B0*C0*";
digitalWrite(Red_LED,HIGH);
digitalWrite(Green,LOW);
}
Serial.println(OR1_pin_status);
//..................................OR 1,2,3 end................................//
//.............................OR .4,5,6...................................//
//OR2
String OR2_pin_status = "*D1*E1*F1*";
//case 1: 0,0->0
digitalWrite(pin4,LOW);
digitalWrite(pin5,LOW);
pin6_status = digitalRead(pin6);
if(pin6_status!=0)
{
OR2_pin_status = "*D0*E0*F0*";
digitalWrite(Red_LED,HIGH);
digitalWrite(Green,LOW);
}
//case 2: 0,1->1
digitalWrite(pin4,LOW);
digitalWrite(pin5,HIGH);
pin6_status = digitalRead(pin6);
if(pin6_status!=1)
{
OR2_pin_status = "*D0*E0*F0*";
digitalWrite(Red_LED,HIGH);
digitalWrite(Green,LOW);
}
//case 3: 1,0->1
digitalWrite(pin4,HIGH);
digitalWrite(pin5,LOW);
pin6_status = digitalRead(pin6);
if(pin6_status!=1)
{
OR2_pin_status = "*D0*E0*F0*";
digitalWrite(Red_LED,HIGH);
digitalWrite(Green,LOW);
}
//case 4: 1,1->1
digitalWrite(pin4,HIGH);
digitalWrite(pin5,HIGH);
pin6_status = digitalRead(pin6);
if(pin6_status!=1)
{
OR2_pin_status = "*D0*E0*F0*";
digitalWrite(Red_LED,HIGH);
digitalWrite(Green,LOW);
}
Serial.println(OR2_pin_status);
//..................................OR 4,5,6 end................................//
//.............................OR .10,9,8...................................//
//OR3
String OR3_pin_status = "*G1*H1*I1*";
//case 1: 0,0->0
digitalWrite(pin10,LOW);
digitalWrite(pin9,LOW);
pin8_status = digitalRead(pin8);
if(pin8_status!=0)
{
OR3_pin_status = "*G0*H0*I0*";
digitalWrite(Red_LED,HIGH);
digitalWrite(Green,LOW);
}
//case 2: 0,1->1
digitalWrite(pin10,LOW);
digitalWrite(pin9,HIGH);
pin8_status = digitalRead(pin8);
if(pin8_status!=1)
{
OR3_pin_status = "*G0*H0*I0*";
digitalWrite(Red_LED,HIGH);
digitalWrite(Green,LOW);
}
//case 3: 1,0->1
digitalWrite(pin10,HIGH);
digitalWrite(pin9,LOW);
pin8_status = digitalRead(pin8);
if(pin8_status!=1)
{
OR3_pin_status = "*G0*H0*I0*";
digitalWrite(Red_LED,HIGH);
digitalWrite(Green,LOW);
}
//case 4: 1,1->1
digitalWrite(pin10,HIGH);
digitalWrite(pin9,HIGH);
pin8_status = digitalRead(pin8);
if(pin8_status!=1)
{
OR3_pin_status = "*G0*H0*I0*";
digitalWrite(Red_LED,HIGH);
digitalWrite(Green,LOW);
}
Serial.println(OR3_pin_status);
//..................................OR 10,9,8 end................................//
//.............................OR .13,12,11...................................//
//OR4
String OR4_pin_status = "*J1*K1*L1*";
//case 1: 0,0->0
digitalWrite(pin13,LOW);
digitalWrite(pin12,LOW);
pin11_status = digitalRead(pin11);
if(pin11_status!=0)
{
OR4_pin_status = "*J0*K0*L0*";
digitalWrite(Red_LED,HIGH);
digitalWrite(Green,LOW);
}
//case 2: 0,1->1
digitalWrite(pin13,LOW);
digitalWrite(pin12,HIGH);
pin11_status = digitalRead(pin11);
if(pin11_status!=1)
{
OR4_pin_status = "*J0*K0*L0*";
digitalWrite(Red_LED,HIGH);
digitalWrite(Green,LOW);
}
//case 3: 1,0->1
digitalWrite(pin13,HIGH);
digitalWrite(pin12,LOW);
pin11_status = digitalRead(pin11);
if(pin11_status!=1)
{
OR4_pin_status = "*J0*K0*L0*";
digitalWrite(Red_LED,HIGH);
digitalWrite(Green,LOW);
}
//case 4: 1,1->1
digitalWrite(pin13,HIGH);
digitalWrite(pin12,HIGH);
pin11_status = digitalRead(pin11);
if(pin11_status!=1)
{
  OR4_pin_status = "*J0*K0*L0*";
digitalWrite(Red_LED,HIGH);
digitalWrite(Green,LOW);
}
Serial.println(OR4_pin_status);
//..................................OR 13,12,11 end................................//
}
//.........................OR GATE ... end.....................................//
//.........................NAND GATE ... start.....................................//
if(RSD=='C')
{
// NAND Gate
pin_status = "*A1*B1*C1*D1*E1*F1*G1*H1*I1*J1*K1*L1*";
digitalWrite(Red_LED,LOW);
digitalWrite(Green,HIGH);
pinMode(pin1, OUTPUT);
pinMode(pin2, OUTPUT);
pinMode(pin3, INPUT);
pinMode(pin4, OUTPUT);
pinMode(pin5, OUTPUT);
pinMode(pin6, INPUT);
pinMode(pin8, INPUT);
pinMode(pin9, OUTPUT);
pinMode(pin10, OUTPUT);
pinMode(pin11, INPUT);
pinMode(pin12, OUTPUT);
pinMode(pin13, OUTPUT);
//.............................NAND.1,2,3...................................//
//NAND1
String NAND1_pin_status = "*A1*B1*C1*";
//case 1: 0,0->1
digitalWrite(pin1,LOW);
digitalWrite(pin2,LOW);
pin3_status = digitalRead(pin3);
if(pin3_status!=1)
{
NAND1_pin_status = "*A0*B0*C0*";
digitalWrite(Red_LED,HIGH);
digitalWrite(Green,LOW);
}
//case 2: 0,1->1
digitalWrite(pin1,LOW);
digitalWrite(pin2,HIGH);
pin3_status = digitalRead(pin3);
if(pin3_status!=1)
{
NAND1_pin_status = "*A0*B0*C0*";
digitalWrite(Red_LED,HIGH);
digitalWrite(Green,LOW);
}
//case 3: 1,0->1
digitalWrite(pin1,HIGH);
digitalWrite(pin2,LOW);
pin3_status = digitalRead(pin3);
if(pin3_status!=1)
{
NAND1_pin_status = "*A0*B0*C0*";
digitalWrite(Red_LED,HIGH);
digitalWrite(Green,LOW);
}
//case 4: 1,1->0
digitalWrite(pin1,HIGH);
digitalWrite(pin2,HIGH);
pin3_status = digitalRead(pin3);
if(pin3_status!=0)
{
NAND1_pin_status = "*A0*B0*C0*";
digitalWrite(Red_LED,HIGH);
digitalWrite(Green,LOW);
}
Serial.println(NAND1_pin_status);
//..................................NAND 1,2,3 end................................//
//.............................NAND.4,5,6...................................//
//NAND2
String NAND2_pin_status = "*D1*E1*F1*";
//case 1: 0,0->1
digitalWrite(pin4,LOW);
digitalWrite(pin5,LOW);
pin6_status = digitalRead(pin6);
if(pin6_status!=1)
{
NAND2_pin_status = "*D0*E0*F0*";
digitalWrite(Red_LED,HIGH);
digitalWrite(Green,LOW);
}
//case 2: 0,1->1
digitalWrite(pin4,LOW);
digitalWrite(pin5,HIGH);
pin6_status = digitalRead(pin6);
if(pin6_status!=1)
{
NAND2_pin_status = "*D0*E0*F0*";
digitalWrite(Red_LED,HIGH);
digitalWrite(Green,LOW);
}
//case 3: 1,0->1
digitalWrite(pin4,HIGH);
digitalWrite(pin5,LOW);
pin6_status = digitalRead(pin6);
if(pin6_status!=1)
{
NAND2_pin_status = "*D0*E0*F0*";
digitalWrite(Red_LED,HIGH);
digitalWrite(Green,LOW);
}
//case 4: 1,1->0
digitalWrite(pin4,HIGH);
digitalWrite(pin5,HIGH);
pin6_status = digitalRead(pin6);
if(pin6_status!=0)
{
NAND2_pin_status = "*D0*E0*F0*";
digitalWrite(Red_LED,HIGH);
digitalWrite(Green,LOW);
}
Serial.println(NAND2_pin_status);
//..................................NAND 4,5,6 end................................//
//.............................NAND.10,9,8...................................//
//NAND3
String NAND3_pin_status = "*G1*H1*I1*";
//case 1: 0,0->1
digitalWrite(pin10,LOW);
digitalWrite(pin9,LOW);
pin8_status = digitalRead(pin8);
if(pin8_status!=1)
{
NAND3_pin_status = "*G0*H0*I0*";
digitalWrite(Red_LED,HIGH);
digitalWrite(Green,LOW);
}
//case 2: 0,1->1
digitalWrite(pin10,LOW);
digitalWrite(pin9,HIGH);
pin8_status = digitalRead(pin8);
if(pin8_status!=1)
{
NAND3_pin_status = "*G0*H0*I0*";
digitalWrite(Red_LED,HIGH);
digitalWrite(Green,LOW);
}
//case 3: 1,0->1
digitalWrite(pin10,HIGH);
digitalWrite(pin9,LOW);
pin8_status = digitalRead(pin8);
if(pin8_status!=1)
{
NAND3_pin_status = "*G0*H0*I0*";
digitalWrite(Red_LED,HIGH);
digitalWrite(Green,LOW);
}
//case 4: 1,1->0
digitalWrite(pin10,HIGH);
digitalWrite(pin9,HIGH);
pin8_status = digitalRead(pin8);
if(pin9_status!=0)
{
NAND3_pin_status = "*G0*H0*I0*";
digitalWrite(Red_LED,HIGH);
digitalWrite(Green,LOW);
}
Serial.println(NAND3_pin_status );
//..................................NAND 10,9,8 end................................//
//.............................NAND.13,12,11...................................//
//NAND4
String NAND4_pin_status = "*J1*K1*L1*";
//case 1: 0,0->1
digitalWrite(pin13,LOW);
digitalWrite(pin12,LOW);
pin11_status = digitalRead(pin11);
if(pin11_status!=1)
{
NAND4_pin_status = "*J0*K0*L0*";
digitalWrite(Red_LED,HIGH);
digitalWrite(Green,LOW);
}
//case 2: 0,1->1
digitalWrite(pin13,LOW);
digitalWrite(pin12,HIGH);
pin11_status = digitalRead(pin11);
if(pin11_status!=1)
{
NAND4_pin_status = "*J0*K0*L0*";
digitalWrite(Red_LED,HIGH);
digitalWrite(Green,LOW);
}
//case 3: 1,0->1
digitalWrite(pin13,HIGH);
digitalWrite(pin12,LOW);
pin11_status = digitalRead(pin11);
if(pin11_status!=1)
{
NAND4_pin_status = "*J0*K0*L0*";
digitalWrite(Red_LED,HIGH);
digitalWrite(Green,LOW);
}
//case 4: 1,1->0
digitalWrite(pin13,HIGH);
digitalWrite(pin12,HIGH);
pin11_status = digitalRead(pin11);
if(pin11_status!=0)
{
NAND4_pin_status = "*J0*K0*L0*";
digitalWrite(Red_LED,HIGH);
digitalWrite(Green,LOW);
}
Serial.println(NAND4_pin_status);
//..................................NAND 13,12,11 end................................//
}
//.........................NAND GATE ... end.....................................//
//.........................XOR GATE ... start.....................................//
if(RSD=='E')
{
// XOR Gate
pin_status = "*A1*B1*C1*D1*E1*F1*G1*H1*I1*J1*K1*L1*";
digitalWrite(Red_LED,LOW);
digitalWrite(Green,HIGH);
pinMode(pin1, OUTPUT);
pinMode(pin2, OUTPUT);
pinMode(pin3, INPUT);
pinMode(pin4, OUTPUT);
pinMode(pin5, OUTPUT);
pinMode(pin6, INPUT);
pinMode(pin8, INPUT);
pinMode(pin9, OUTPUT);
pinMode(pin10, OUTPUT);
pinMode(pin11, INPUT);
pinMode(pin12, OUTPUT);
pinMode(pin13, OUTPUT);
//.............................XOR.1,2,3...................................//
//XOR1
String XOR1_pin_status = "*A1*B1*C1*";
//case 1: 0,0->0
digitalWrite(pin1,LOW);
digitalWrite(pin2,LOW);
pin3_status = digitalRead(pin3);
if(pin3_status!=0)
{
XOR1_pin_status = "*A0*B0*C0*";
digitalWrite(Red_LED,HIGH);
digitalWrite(Green,LOW);
}
//case 2: 0,1->1
digitalWrite(pin1,LOW);
digitalWrite(pin2,HIGH);
pin3_status = digitalRead(pin3);
if(pin3_status!=1)
{
XOR1_pin_status = "*A0*B0*C0*";
digitalWrite(Red_LED,HIGH);
digitalWrite(Green,LOW);
}
//case 3: 1,0->1
digitalWrite(pin1,HIGH);
digitalWrite(pin2,LOW);
pin3_status = digitalRead(pin3);
if(pin3_status!=1)
{
XOR1_pin_status = "*A0*B0*C0*";
digitalWrite(Red_LED,HIGH);
digitalWrite(Green,LOW);
}
//case 4: 1,1->0
digitalWrite(pin1,HIGH);
digitalWrite(pin2,HIGH);
pin3_status = digitalRead(pin3);
if(pin3_status!=0)
{
XOR1_pin_status = "*A0*B0*C0*";
digitalWrite(Red_LED,HIGH);
digitalWrite(Green,LOW);
}
Serial.println(XOR1_pin_status);
//..................................XOR 1,2,3 end................................//
//.............................XOR.4,5,6...................................//
//XOR2
String XOR2_pin_status = "*D1*E1*F1*";
//case 1: 0,0->0
digitalWrite(pin4,LOW);
digitalWrite(pin5,LOW);
pin6_status = digitalRead(pin6);
if(pin6_status!=0)
{
XOR2_pin_status = "*D0*E0*F0*";
digitalWrite(Red_LED,HIGH);
digitalWrite(Green,LOW);
}
//case 2: 0,1->1
digitalWrite(pin4,LOW);
digitalWrite(pin5,HIGH);
pin6_status = digitalRead(pin6);
if(pin6_status!=1)
{
XOR2_pin_status = "*D0*E0*F0*";
digitalWrite(Red_LED,HIGH);
digitalWrite(Green,LOW);
}
//case 3: 1,0->1
digitalWrite(pin4,HIGH);
digitalWrite(pin5,LOW);
pin6_status = digitalRead(pin6);
if(pin6_status!=1)
{
XOR2_pin_status = "*D0*E0*F0*";
digitalWrite(Red_LED,HIGH);
digitalWrite(Green,LOW);
}
//case 4: 1,1->0
digitalWrite(pin4,HIGH);
digitalWrite(pin5,HIGH);
pin6_status = digitalRead(pin6);
if(pin6_status!=0)
{
XOR2_pin_status = "*D0*E0*F0*";
digitalWrite(Red_LED,HIGH);
digitalWrite(Green,LOW);
}
Serial.println(XOR2_pin_status);
//..................................XOR 4,5,6 end................................//
//.............................XOR.10,9,8...................................//
//XOR3
String XOR3_pin_status = "*G1*H1*I1*";
//case 1: 0,0->0
digitalWrite(pin10,LOW);
digitalWrite(pin9,LOW);
pin8_status = digitalRead(pin8);
if(pin8_status!=0)
{
  XOR3_pin_status = "*G0*H0*I0*";
digitalWrite(Red_LED,HIGH);
digitalWrite(Green,LOW);
}
//case 2: 0,1->1
digitalWrite(pin10,LOW);
digitalWrite(pin9,HIGH);
pin8_status = digitalRead(pin8);
if(pin8_status!=1)
{
XOR3_pin_status = "*G0*H0*I0*";
digitalWrite(Red_LED,HIGH);
digitalWrite(Green,LOW);
}
//case 3: 1,0->1
digitalWrite(pin10,HIGH);
digitalWrite(pin9,LOW);
pin8_status = digitalRead(pin8);
if(pin8_status!=1)
{
XOR3_pin_status = "*G0*H0*I0*";
digitalWrite(Red_LED,HIGH);
digitalWrite(Green,LOW);
}
//case 4: 1,1->0
digitalWrite(pin10,HIGH);
digitalWrite(pin9,HIGH);
pin8_status = digitalRead(pin8);
if(pin8_status!=0)
{
XOR3_pin_status = "*G0*H0*I0*";
digitalWrite(Red_LED,HIGH);
digitalWrite(Green,LOW);
}
Serial.println(XOR3_pin_status);
//..................................XOR 10,9,8 end................................//
//.............................XOR.13,12,11...................................//
//XOR4
String XOR4_pin_status = "*J1*K1*L1*";
//case 1: 0,0->0
digitalWrite(pin13,LOW);
digitalWrite(pin12,LOW);
pin11_status = digitalRead(pin11);
if(pin11_status!=0)
{
XOR4_pin_status = "*J0*K0*L0*";
digitalWrite(Red_LED,HIGH);
digitalWrite(Green,LOW);
}
//case 2: 0,1->1
digitalWrite(pin13,LOW);
digitalWrite(pin12,HIGH);
pin11_status = digitalRead(pin11);
if(pin11_status!=1)
{
XOR4_pin_status = "*J0*K0*L0*";
digitalWrite(Red_LED,HIGH);
digitalWrite(Green,LOW);
}
//case 3: 1,0->1
digitalWrite(pin13,HIGH);
digitalWrite(pin12,LOW);
pin11_status = digitalRead(pin11);
if(pin11_status!=1)
{
XOR4_pin_status = "*J0*K0*L0*";
digitalWrite(Red_LED,HIGH);
digitalWrite(Green,LOW);
}
//case 4: 1,1->0
digitalWrite(pin13,HIGH);
digitalWrite(pin12,HIGH);
pin11_status = digitalRead(pin11);
if(pin11_status!=0)
{
XOR4_pin_status = "*J0*K0*L0*";
digitalWrite(Red_LED,HIGH);
digitalWrite(Green,LOW);
}
Serial.println(XOR4_pin_status);
//..................................XOR 13,12,11 end................................//
}
//.........................XOR GATE ... end.....................................//
//.........................NOR GATE ... start.....................................//
if(RSD=='D')
{
// NOR Gate
pin_status = "*A1*B1*C1*D1*E1*F1*G1*H1*I1*J1*K1*L1*";
digitalWrite(Red_LED,LOW);
digitalWrite(Green,HIGH);
pinMode(pin1, INPUT);
pinMode(pin2, OUTPUT);
pinMode(pin3, OUTPUT);
pinMode(pin4, INPUT);
pinMode(pin5, OUTPUT);
pinMode(pin6, OUTPUT);
pinMode(pin8, OUTPUT);
pinMode(pin9, OUTPUT);
pinMode(pin10, INPUT);
pinMode(pin11, OUTPUT);
pinMode(pin12, OUTPUT);
pinMode(pin13, INPUT);
//.............................NOR .2,3,1...................................//
//NOR1
String NOR1_pin_status = "*A1*B1*C1*";
//case 1: 0,0->1
digitalWrite(pin2,LOW);
digitalWrite(pin3,LOW);
pin1_status = digitalRead(pin1);
if(pin1_status!=1)
{
NOR1_pin_status = "*A0*B0*C0*";
digitalWrite(Red_LED,HIGH);
digitalWrite(Green,LOW);
}
//case 2: 0,1->0
digitalWrite(pin2,LOW);
digitalWrite(pin3,HIGH);
pin1_status = digitalRead(pin1);
if(pin1_status!=0)
{
NOR1_pin_status = "*A0*B0*C0*";
digitalWrite(Red_LED,HIGH);
digitalWrite(Green,LOW);
}
//case 3: 1,0->0
digitalWrite(pin2,HIGH);
digitalWrite(pin3,LOW);
pin1_status = digitalRead(pin1);

if(pin1_status!=0)
{
NOR1_pin_status = "*A0*B0*C0*";
digitalWrite(Red_LED,HIGH);
digitalWrite(Green,LOW);
}
//case 4: 1,1->0
digitalWrite(pin2,HIGH);
digitalWrite(pin3,HIGH);
pin1_status = digitalRead(pin1);
if(pin1_status!=0)
{
NOR1_pin_status = "*A0*B0*C0*";
digitalWrite(Red_LED,HIGH);
digitalWrite(Green,LOW);
}
Serial.println(NOR1_pin_status);
//..................................NOR 2,3,1 end................................//
//.............................NOR .6,5,4...................................//
//NOR2
String NOR2_pin_status = "*D1*E1*F1*";
//case 1: 0,0->1
digitalWrite(pin6,LOW);
digitalWrite(pin5,LOW);
pin4_status = digitalRead(pin4);

if(pin4_status!=1)
{
NOR2_pin_status = "*D0*E0*F0*";
digitalWrite(Red_LED,HIGH);
digitalWrite(Green,LOW);
}
//case 2: 0,1->0
digitalWrite(pin6,LOW);
digitalWrite(pin5,HIGH);
pin4_status = digitalRead(pin4);
if(pin4_status!=0)
{
NOR2_pin_status = "*D0*E0*F0*";
digitalWrite(Red_LED,HIGH);
digitalWrite(Green,LOW);
}
//case 3: 1,0->0
digitalWrite(pin6,HIGH);
digitalWrite(pin5,LOW);
pin4_status = digitalRead(pin4);
if(pin4_status!=0)
{
NOR2_pin_status = "*D0*E0*F0*";
digitalWrite(Red_LED,HIGH);
digitalWrite(Green,LOW);
}
//case 4: 1,1->0

digitalWrite(pin6,HIGH);
digitalWrite(pin5,HIGH);
pin4_status = digitalRead(pin4);
if(pin4_status!=0)
{
NOR2_pin_status = "*D0*E0*F0*";
digitalWrite(Red_LED,HIGH);
digitalWrite(Green,LOW);
}
Serial.println(NOR2_pin_status);
//..................................NOR 6,5,4 end................................//
//.............................NOR .8,9,10...................................//
//NOR3
String NOR3_pin_status = "*G1*H1*I1*";
//case 1: 0,0->1
digitalWrite(pin8,LOW);
digitalWrite(pin9,LOW);
pin10_status = digitalRead(pin10);
if(pin10_status!=1)
{
NOR3_pin_status = "*G0*H0*I0*";
digitalWrite(Red_LED,HIGH);
digitalWrite(Green,LOW);
}
//case 2: 0,1->0

digitalWrite(pin8,LOW);
digitalWrite(pin9,HIGH);
pin10_status = digitalRead(pin10);
if(pin10_status!=0)
{
NOR3_pin_status = "*G0*H0*I0*";
digitalWrite(Red_LED,HIGH);
digitalWrite(Green,LOW);
}
//case 3: 1,0->0
digitalWrite(pin8,HIGH);
digitalWrite(pin9,LOW);
pin10_status = digitalRead(pin10);
if(pin10_status!=0)
{
NOR3_pin_status = "*G0*H0*I0*";
digitalWrite(Red_LED,HIGH);
digitalWrite(Green,LOW);
}
//case 4: 1,1->0
digitalWrite(pin8,HIGH);
digitalWrite(pin9,HIGH);
pin10_status = digitalRead(pin10);
if(pin10_status!=0)
{
NOR3_pin_status = "*G0*H0*I0*";
digitalWrite(Red_LED,HIGH);
digitalWrite(Green,LOW);

}
Serial.println(NOR3_pin_status);
//..................................NOR 8,9,10 end................................//
//.............................NOR .11,12,13...................................//
//NOR4
String NOR4_pin_status = "*J1*K1*L1*";
//case 1: 0,0->1
digitalWrite(pin11,LOW);
digitalWrite(pin12,LOW);
pin13_status = digitalRead(pin13);
if(pin13_status!=1)
{
NOR4_pin_status = "*J0*K0*L0*";
digitalWrite(Red_LED,HIGH);
digitalWrite(Green,LOW);
}
//case 2: 0,1->0
digitalWrite(pin11,LOW);
digitalWrite(pin12,HIGH);
pin13_status = digitalRead(pin13);
if(pin13_status!=0)
{
NOR4_pin_status = "*J0*K0*L0*";
digitalWrite(Red_LED,HIGH);
digitalWrite(Green,LOW);
}

//case 3: 1,0->0
digitalWrite(pin11,HIGH);
digitalWrite(pin12,LOW);
pin13_status = digitalRead(pin13);
if(pin13_status!=0)
{
NOR4_pin_status = "*J0*K0*L0*";
digitalWrite(Red_LED,HIGH);
digitalWrite(Green,LOW);
}
//case 4: 1,1->0
digitalWrite(pin11,HIGH);
digitalWrite(pin12,HIGH);
pin13_status = digitalRead(pin13);
if(pin13_status!=0)
{
NOR4_pin_status = "*J0*K0*L0*";
digitalWrite(Red_LED,HIGH);
digitalWrite(Green,LOW);
}
Serial.println(NOR4_pin_status);
//..................................NOR 11,12,13 end................................//
}
//.........................NOR GATE ... end.....................................//

//.........................NOT GATE ... start.....................................//
if(RSD=='B')
{
// NOT Gate
pin_status = "*A1*B1*C1*D1*E1*F1*G1*H1*I1*J1*K1*L1*";
digitalWrite(Red_LED,LOW);
digitalWrite(Green,HIGH);
pinMode(pin1, OUTPUT);
pinMode(pin2, INPUT);
pinMode(pin3, OUTPUT);
pinMode(pin4, INPUT);
pinMode(pin5, OUTPUT);
pinMode(pin6, INPUT);
pinMode(pin8, INPUT);
pinMode(pin9, OUTPUT);
pinMode(pin10, INPUT);
pinMode(pin11, OUTPUT);
pinMode(pin12, INPUT);
pinMode(pin13, OUTPUT);
//.............................NOT .1,2...................................//
//NOT1
String NOT1_pin_status = "*A1*B1*";
//case 1: 0->1

digitalWrite(pin1,LOW);
pin2_status = digitalRead(pin2);
if(pin2_status!=1)
{
NOT1_pin_status = "*A0*B0*";
digitalWrite(Red_LED,HIGH);
digitalWrite(Green,LOW);
}
//case 2: 1->0
digitalWrite(pin1,HIGH);
pin2_status = digitalRead(pin2);
if(pin2_status!=0)
{
NOT1_pin_status = "*A0*B0*";
digitalWrite(Red_LED,HIGH);
digitalWrite(Green,LOW);
}
Serial.println(NOT1_pin_status);
//..................................NOT 1,2 end................................//
//.............................NOT .3,4..................................//
//NOT2
String NOT2_pin_status = "*C1*D1*";
//case 1: 0->1
digitalWrite(pin3,LOW);
pin4_status = digitalRead(pin4);

if(pin4_status!=1)
{
NOT2_pin_status = "*C0*D0*";
digitalWrite(Red_LED,HIGH);
digitalWrite(Green,LOW);
}
//case 2: 1->0
digitalWrite(pin3,HIGH);
pin4_status = digitalRead(pin4);
if(pin4_status!=0)
{
NOT2_pin_status = "*C0*D0*";
digitalWrite(Red_LED,HIGH);
digitalWrite(Green,LOW);
}
Serial.println(NOT2_pin_status);
//..................................NOT 3,4 end................................//
//.............................NOT .5,6..................................//
//NOT3
String NOT3_pin_status = "*E1*F1*";
//case 1: 0->1
digitalWrite(pin5,LOW);
pin6_status = digitalRead(pin6);
if(pin6_status!=1)
{
NOT3_pin_status = "*E0*F0*";

digitalWrite(Red_LED,HIGH);
digitalWrite(Green,LOW);
}
//case 2: 1->0
digitalWrite(pin5,HIGH);
pin6_status = digitalRead(pin6);
if(pin6_status!=0)
{
NOT3_pin_status = "*E0*F0*";
digitalWrite(Red_LED,HIGH);
digitalWrite(Green,LOW);
}
Serial.println(NOT3_pin_status);
//..................................NOT 5,6 end................................//
//.............................NOT .9,8..................................//
//NOT4
String NOT4_pin_status = "*G1*H1*";
//case 1: 0->1
digitalWrite(pin9,LOW);
pin8_status = digitalRead(pin8);
if(pin8_status!=1)
{
NOT4_pin_status = "*G0*H0*";
digitalWrite(Red_LED,HIGH);
digitalWrite(Green,LOW);
}

//case 2: 1->0
digitalWrite(pin9,HIGH);
pin8_status = digitalRead(pin8);
if(pin8_status!=0)
{
NOT4_pin_status = "*G0*H0*";
digitalWrite(Red_LED,HIGH);
digitalWrite(Green,LOW);
}
Serial.println(NOT4_pin_status);
//..................................NOT 9,8 end................................//
//.............................NOT .11,10..................................//
//NOT5
String NOT5_pin_status = "*I1*J1*";
//case 1: 0->1
digitalWrite(pin11,LOW);
pin10_status = digitalRead(pin10);
if(pin10_status!=1)
{
NOT5_pin_status = "*I0*J0*";
digitalWrite(Red_LED,HIGH);
digitalWrite(Green,LOW);
}
//case 2: 1->0

digitalWrite(pin11,HIGH);
pin10_status = digitalRead(pin10);
if(pin10_status!=0)
{
NOT5_pin_status = "*I0*J0*";
digitalWrite(Red_LED,HIGH);
digitalWrite(Green,LOW);
}
Serial.println(NOT5_pin_status);
//..................................NOT 11,10 end................................//
//.............................NOT .13,12..................................//
//NOT6
String NOT6_pin_status = "*K1*L1*";
//case 1: 0->1
digitalWrite(pin13,LOW);
pin12_status = digitalRead(pin12);
if(pin12_status!=1)
{
NOT6_pin_status = "*K0*L0*";
digitalWrite(Red_LED,HIGH);
digitalWrite(Green,LOW);
}
//case 2: 1->0
digitalWrite(pin13,HIGH);
pin12_status = digitalRead(pin12);

if(pin12_status!=0)
{
NOT6_pin_status = "*K0*L0*";
digitalWrite(Red_LED,HIGH);
digitalWrite(Green,LOW);
}
Serial.println(NOT6_pin_status);
//..................................NOT 13,12 end................................//
}
//.........................NOT GATE ... end.....................................//
}
}