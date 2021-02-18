sbit BLUELED at LATE0_bit;
sbit GREENLED at LATE1_bit;
sbit TRIGGER at LATE2_bit;

#define SENSOR  12

float ECHO;
unsigned int Counter=0;
char text[10];

char ReadBit (char *port, char pin)
{
    if ((*port & (1 << pin))>0) return (1);
    else return (0);
}

void TriggerPulse10us()
{
    TRIGGER = 1;
    delay_us(10);
    TRIGGER = 0;
}

void NewLine()
{
    BLUELED=1;
    UART1_Write_Text(text);
    UART1_Write(10);
    UART1_Write(13);
    Delay_ms(100);
    BLUELED=0;
}

float RangeFinder(char *inputport,char pin)  //lee en el pin especificado
{
      float Range;

      TriggerPulse10us();

      TMR1ON_bit=0;
      TMR1L=0;
      TMR1h=0;
      TMR1IF_bit=0;
      TMR1ON_bit=1;

      while(ReadBit(inputport,pin)==0)
      {
            if(TMR1IF_bit==1)
            {
               return (-1);
               break;
            }
      }

      TMR1ON_bit=0;
      TMR1L=0;
      TMR1h=0;
      TMR1IF_bit=0;
      TMR1ON_bit=1;

      while(ReadBit(inputport,pin)==1)
      {
            if(TMR1IF_bit==1)
            {
               return (0);
               break;
            }
      }

      TMR1ON_bit=0;
      Counter=(TMR1H <<8) |  TMR1L;

      Range=((float)Counter*0.03432*0.9659258263)/2 ;
      return (Range);
}

void main()
{
int i;
     OSCCON=0;
     OSCTUNE=0;

     SCS1_bit=1;
     SCS0_bit=0;

     IRCF2_bit=1;
     IRCF1_bit=1;
     IRCF0_bit=1;

     PLLEN_bit=1;

     UART1_Init(9600);
     Delay_ms(100);

     ANSELA=0;
     ANSELB=0;
     ANSELC=0;
     ANSELE=0;

     TRISA=0b11111111;
     TRISB=0b11111111;
     TRISC=0b00000000;
     TRISE=0b00000000;

     TRIGGER=0;

     T1CON=0;

     T1CKPS1_bit=1;
     T1CKPS0_bit=0;

     while(1)
     {
      GREENLED=0;
      for(i=0;i<(SENSOR/2);i++)
      {
       ECHO=RangeFinder(&porta,i);
       floattostr (ECHO,text);
       NewLine();

       ECHO=RangeFinder(&portb,i);
       floattostr (ECHO,text);
       NewLine();
      }
      GREENLED=1;
      Delay_ms(500);
    }
}