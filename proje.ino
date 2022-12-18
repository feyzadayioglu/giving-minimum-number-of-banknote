#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

int para_adet[5]={20,20,10,30,5};
int hizmetAdet[4]={30,50,100,20};

int atilan_para=0;
int hizmet_tutari=0;
int bakiye;
int bakiye1;

int yuzluk , ellilik , yirmilik , onluk , beslik;
int kontrol=0;

int Button1 = 0;
int Button2 = 0;
int Button3 = 0;
int Button4 = 0;
int Button5 = 0;
int Button6 = 0;




void setup() {
  lcd.begin(16,4);
  pinMode(A0,OUTPUT); 
  pinMode(A1,OUTPUT); 
  pinMode(10,INPUT);
  pinMode(9,INPUT);
  pinMode(7,INPUT);
  pinMode(6,INPUT);
  pinMode(1,INPUT);
  pinMode(0,INPUT);
  


}

void loop() {
  Button1 = digitalRead(10);
  Button2 = digitalRead(9);
  Button3 = digitalRead(7);
  Button4 = digitalRead(6);
  Button5 = digitalRead(1);
  Button6 = digitalRead(0);

  if( kontrol == 0 ) {

    if( Button1 == 1){
    lcd.clear();
    lcd.print(" 5 TL attiniz   ");
  
    para_adet[0] ++;
    atilan_para += 5;
    
    delay(1000);
    lcd.print(para_adet[0]);
    lcd.print(" Toplam:");
    lcd.print(atilan_para);
  }

   if( Button2 == 1){
    lcd.clear();
    lcd.print(" 10 TL attiniz   " );
  
  
    para_adet[1] ++ ;
    atilan_para += 10 ;
    
    delay(1000);
    lcd.print(para_adet[1]);
    lcd.print(" Toplam:");
    lcd.print(atilan_para);
  }
   if( Button3 == 1){
    lcd.clear();
    lcd.print("20 TL attiniz   ");
   
   
    para_adet[2] ++ ;
    atilan_para += 20;
    
    delay(1000);
    lcd.print(para_adet[2]);
    lcd.print(" Toplam:");
    lcd.print(atilan_para);
  }
   if( Button4 == 1){
    lcd.clear();
    lcd.print(" 50 TL attiniz   " );

   
    para_adet[3] ++ ;
    atilan_para +=50 ;
    
    delay(1000);
    lcd.print(para_adet[3]);
     lcd.print(" Toplam:");
    lcd.print(atilan_para);
  }

   if( Button5 == 1){
    lcd.clear();
    lcd.print(" 100 TL attiniz   ");
  
   
    para_adet[4] ++ ;
    atilan_para += 100;
    
    delay(1000);
    lcd.print(para_adet[4]);
     lcd.print(" Toplam:");
    lcd.print(atilan_para);
  }

   if( Button6 == 1){
    lcd.clear();
    kontrol ++;
    delay(1000);
  }

  
  }
  
  if( kontrol ==1 ){

   if(Button1 == 1 ){
      if( hizmetAdet[0]>0 ){
           lcd.clear();
          hizmetAdet[0]--;
          hizmet_tutari += 15;
          bakiye=atilan_para-hizmet_tutari;
           if(atilan_para<hizmet_tutari){
            lcd.print("yetersiz bakiye!");
            lcd.print("hizmet yapilamadi.  ");
            
           }
           else if(atilan_para>=hizmet_tutari){
           lcd.print("h. yapildi 15TL  ");
           
           lcd.print("kalan:");
           lcd.print(bakiye);
           lcd.print("TL n:");
           }
        
          
         
          
          lcd.print(hizmetAdet[0]);
          delay(1000);
    }
    else{
     lcd.clear();
      lcd.print("hizmet tükendi");
   }
  } 

  if( Button2 == 1){

    if( hizmetAdet[1]>0 ){
      lcd.clear();
      hizmetAdet[1]--;
      hizmet_tutari += 10;
      bakiye=atilan_para-hizmet_tutari;
      
         if(atilan_para<hizmet_tutari){
            lcd.print("yetersiz bakiye!");
            lcd.print("hizmet yapilamadi.  ");
            
           }
           else if(atilan_para>=hizmet_tutari){
           lcd.print("h. yapildi 10TL ");
           
            lcd.print("kalan:");
           lcd.print(bakiye);
           lcd.print("TL n:");
           
           }
      
     
     
      lcd.print(hizmetAdet[1]);
      delay(1000);
    }

   else{
      lcd.clear();
      lcd.print("hizmet tükendi");
    }
  }

  if( Button3 == 1){

    if( hizmetAdet[2]>0 ) {
      lcd.clear();
      hizmetAdet[2]--;
      hizmet_tutari += 5;
      bakiye=atilan_para-hizmet_tutari;
         if(atilan_para<hizmet_tutari){
            lcd.print("yetersiz bakiye!");
            lcd.print("hizmet yapilamadi.  ");
            
           }
           else if(atilan_para>=hizmet_tutari){
           lcd.print("h. yapildi 5TL  ");
           
            lcd.print("kalan:");
           lcd.print(bakiye);
           lcd.print("TL n:");
           }
    
      
      
      lcd.print(hizmetAdet[2]);
      delay(1000);
    }

    else {
      lcd.clear();
      lcd.print("hizmet tükendi");
    }
  }

  if ( Button4 == 1 ){

    if( hizmetAdet[3]>0 ){
      lcd.clear();
      hizmetAdet[3]--;
      hizmet_tutari += 50;
      bakiye=atilan_para-hizmet_tutari;
         if(atilan_para<hizmet_tutari){
            lcd.print("yetersiz bakiye!");
            lcd.print("hizmet yapilamadi.  ");
            
           }
           else if(atilan_para>=hizmet_tutari){
           lcd.print("h. yapildi 50TL  ");
           
          lcd.print("kalan:");
           lcd.print(bakiye);
           lcd.print("TL n:");
           }
     
      
     
      lcd.print(hizmetAdet[3]);
      delay(1000);
    }

    else {
      lcd.clear();
      lcd.print("hizmet tükendi");
    }
  }

  if( Button5 == 1 ){
    
    
    int sayi = rand()%4 + 1 ;
    if ( sayi == 2 ){
      digitalWrite(A0,HIGH);
      delay(1000);
      lcd.clear();
      lcd.print("para sikisti ");
      lcd.print(atilan_para);
      lcd.print("  TL iade edildi");
      delay(1000);
      
    }
    if( sayi != 2){
      digitalWrite(A1,HIGH);
      delay(2000);
      bakiye1=bakiye;
      if( bakiye >= 0 ) {
        yuzluk=bakiye1/100;
        if(yuzluk>para_adet[4]){
          bakiye1=bakiye1-para_adet[4]*100;
          yuzluk=para_adet[4];
        }
        else{
          bakiye1=bakiye1-yuzluk*100;
         
        }

         ellilik=bakiye1/50;
        if(ellilik>para_adet[3]){
          bakiye1=bakiye1-para_adet[3]*50;
         ellilik=para_adet[3];
        }
        else{
          bakiye1=bakiye1-ellilik*50;
        }

          yirmilik=bakiye1/20;
        if(yirmilik>para_adet[2]){
          bakiye1=bakiye1-para_adet[2]*20;
          yirmilik=para_adet[2];
        }
        else{
          bakiye1=bakiye1-yirmilik*20;
        }

           onluk=bakiye1/10;
        if(onluk>para_adet[1]){
          bakiye1=bakiye1-para_adet[1]*10;
          onluk=para_adet[1];
        }
        else{
          bakiye1=bakiye1-onluk*10;
        }

           beslik=bakiye1/5;
        if(beslik>para_adet[0]){
          bakiye1=bakiye1-para_adet[0]*5;
          beslik=para_adet[0];
        }
        else{
          bakiye1=bakiye1-beslik*5;
        }
       
       lcd.clear();
       
       lcd.print(yuzluk);
       lcd.print("/ ");
       lcd.print(ellilik);
       lcd.print("/ ");
       lcd.print(yirmilik);
       lcd.print("/ ");
       lcd.print(onluk);
       lcd.print("/ ");
       lcd.print(beslik);
       lcd.print("/ ");
       delay(1000);
      int para_ustu=(yuzluk*100)+(ellilik*50)+(yirmilik*20)+(onluk*10)+(beslik*5);
      if(para_ustu<bakiye){
        lcd.clear();
        lcd.print("kasada yeterli  para yoktur!");
      }
      
      }

    
    }
  }

  
 }
  
  
  

}
