# Arduino.LEDBulb.Master
use a Arduino to change colour of a china-IR-LEDbulb

i ve got some multi-colour LEDbulbs from chinaMen.
the have all a grey remote-control with 24 keys.
'COLOURFULL LIGHTNING remote controller'

after some play/hack with my arduino and the IRremote.h lib, i wrote
a smal script who translate a colour-number to the working IR-code.
so i can change colour, intensity an switch the bulb on and off.

have fun.
andreas langkath
20-NOV-2015


ps: the tx-codes:

A = Nummer/Farbe
F = Auffueller , die Nummern immer +7(bin +111)
B = invert von bock A (transfer-check/verify)
C = immer 255 (stop)

                  C        B     A   F   Nummer/Beschreibung
----------------------------------------------------------------------
0xFF00FF = 11111111 00000000 11111 111 = #31, -/-
0xFF08F7 = 11111111 00001000 11110 111 = #30, tuerkis 1 
0xFF10EF = 11111111 00010000 11101 111 = #29, gruen
0xFF18E7 = 11111111 00011000 11100 111 = #28, tuerkis 2 
0xFF20DF = 11111111 00100000 11011 111 = #27, hell- ,4 stufen
0xFF28D7 = 11111111 00101000 11010 111 = #26, tuerkis 3
0xFF30CF = 11111111 00110000 11001 111 = #25, tuerkis 4
0xFF38C7 = 11111111 00111000 11000 111 = #24, -/-
0xFF40BF = 11111111 01000000 10111 111 = #23, -/-
0xFF48B7 = 11111111 01001000 10110 111 = #22, violett1
0xFF50AF = 11111111 01010000 10101 111 = #21, blau
0xFF58A7 = 11111111 01011000 10100 111 = #20, violett2
0xFF609F = 11111111 01100000 10011 111 = #19, power off
0xFF6897 = 11111111 01101000 10010 111 = #18, violett3
0xFF708F = 11111111 01110000 10001 111 = #17, violett4
0xFF7887 = 11111111 01111000 10000 111 = #16, -/-
0xFF807F = 11111111 10000000 01111 111 = #15, -/-
0xFF8877 = 11111111 10001000 01110 111 = #14, gelb
0xFF906F = 11111111 10010000 01101 111 = #13, rot
0xFF9867 = 11111111 10011000 01100 111 = #12, orange 1
0xFFA05F = 11111111 10100000 01011 111 = #11, hell+ , 4 stufen    
0xFFA857 = 11111111 10101000 01010 111 = #10, orange2        
0xFFB04F = 11111111 10110000 01001 111 = #09, orange3
0xFFB847 = 11111111 10111000 01000 111 = #08, -/-
0xFFC03F = 11111111 11000000 00111 111 = #07, -/-
0xFFC837 = 11111111 11001000 00110 111 = #06, smooth
0xFFD02F = 11111111 11010000 00101 111 = #05, weiss
0xFFD827 = 11111111 11011000 00100 111 = #04, fade
0xFFE01F = 11111111 11100000 00011 111 = #03, power on
0xFFE817 = 11111111 11101000 00010 111 = #02, strobe  
0xFFF00F = 11111111 11110000 00001 111 = #01, flash 
0xFFF807 = 11111111 11111000 00000 111 = #00, -/-
                             ^^^^^   

