#include <16f887.h> 
#device *=16 ADC=8
#FUSES NOWDT, HS, NOPUT, NOBROWNOUT,NOPROTECT, NOLVP 
#use delay(clock=16M)
#include <luutinh.h>
#include <LCD.h>
char Mang1[]={"             Pham Ha Nam            "};
char Mang2[]={"              17-02-2000            "};
char i,j;
void Button1(){

for(j=0;j<30;j++){

for(i=1;i<15;i++){
    while(input(pin_a3)==0){}
    lcd_gotoxy(i,1);
	printf(lcd_putc,"%c",Mang1[i+j-1]);
    lcd_gotoxy(i,2);
	printf(lcd_putc,"%c",Mang2[i+j-1]);
}

delay_ms(1000);

}
delay_ms(500);

while(input(pin_a3)==1){}

delay_ms(500);

}

void main(){



	set_tris_a(0xFF);
	set_tris_b(0x00); 
	set_tris_d(0x00); 
	 
	
	LCD_INIT();
	OUTPUT_B(0x00);

while(TRUE){

if(input(pin_a3)==0)
{
Button1();
}
	
}





}

