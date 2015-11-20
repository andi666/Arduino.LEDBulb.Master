int zufallsfarbe() {

   Serial.print("...es stehen [");

  // *** anzahl der eintraege im array ermitteln
  int anazhl = sizeof(farbe) / sizeof(int); // *** Arrays in Byte / Größe des Array-Datentyps
   Serial.print(anazhl +1);
   Serial.println("] farben zur auswahl");

  // *** random-generator pushen (wichtig, da sosnt kein wirklicher zufall)
  seed = seedOut(31);
  randomSeed(seed);

  // *** zufaellige farbe auswaehlen
  int zufall = random(anazhl);  

  zufall = farbe[zufall];

   Serial.print("...nehme:[");
   Serial.print(zufall);
   Serial.println("]");
  
  return zufall;
}

