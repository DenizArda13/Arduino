//Görsel İşitsel Teknoloji Kanalı
//wwww.teknikerler.com
//Kerim Arı Youtube kanalı i2c  LCD Haberleşme protokolü öğrenme  Kodları  - kullanımı örnek Kodları


#include <Wire.h>
void setup()
{
  Serial.begin (9600);
  Serial.println ("I2C Ekran türü okunuyor...");
  Wire.begin();
  
  for (byte e = 8; e < 150; e++)
  {
    Wire.beginTransmission (e);
    if (Wire.endTransmission () == 0)
    {
      Serial.println ("İletişim yolu bulundu  ..OK");
      Serial.print ("Ekran Türü : ");
      Serial.print (e, DEC);
      Serial.print (" (0x");
      Serial.print (e, HEX);
      Serial.println (")");
    }
  }
  Serial.println ("Tamamlandı. ");
}

void loop() {}
