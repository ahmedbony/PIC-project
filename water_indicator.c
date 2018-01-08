void main() {
   ADCON1=0x0F;                 // Configure RA) pin as input
   CMCON=7;
   TRISC.F0=0;
   TRISA.F0=1;
   TRISA.F1=1;
   TRISA.F2=1;
   TRISA.F3=1;
   TRISA.F4=1;
   TRISB=0x00;
 while(1){
  if(PORTA.F4==0 && PORTA.F3==0 && PORTA.F2==0 &&  PORTA.F1==0 && PORTA.F0==0){
      PORTB.F0=1;
      PORTB.F1=1;                                         // 100% full
      PORTB.F2=1;
      PORTB.F3=1;
      PORTB.F4=1;
      PORTC.F0=0;   //motor turned off
       }
   if(PORTA.F4==0 && PORTA.F3==0 && PORTA.F2==0 &&  PORTA.F1==0 && PORTA.F0==1){
      PORTB.F0=0;
      PORTB.F1=1;                                        // 80% full
      PORTB.F2=1;
      PORTB.F3=1;
      PORTB.F4=1;}
   if(PORTA.F4==0 && PORTA.F3==0 && PORTA.F2==0 &&  PORTA.F1==1 && PORTA.F0==1){
      PORTB.F0=0;
      PORTB.F1=0;
      PORTB.F2=1;                                            // 60% full
      PORTB.F3=1;
      PORTB.F4=1;

       }
   if(PORTA.F4==0 && PORTA.F3==0 && PORTA.F2==1 &&  PORTA.F1==1 && PORTA.F0==1){
      PORTB.F0=0;
      PORTB.F1=0;                                            // 40% full
      PORTB.F2=0;
      PORTB.F3=1;
      PORTB.F4=1;
 }
  if(PORTA.F4==0 && PORTA.F3==1 && PORTA.F2==1 &&  PORTA.F1==1 && PORTA.F0==1){
      PORTB.F0=0;
      PORTB.F1=0;
      PORTB.F2=0;
      PORTB.F3=0;                                              // 20% full
      PORTB.F4=1;
      PORTC.F0=1;   //motor turned on
       }
 }
}