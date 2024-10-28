#include <STC12C5630AD.H>
#include <intrins.h>
// Function prototypes for delays corresponding to each note



void Delay3822us(void); // C3




//void Delay3822us(void);
void Delay3608us(void);
void Delay3405us(void);
void Delay3214us(void);
void Delay3034us(void);
void Delay2863us(void);
void Delay2703us(void);
void Delay2551us(void);
void Delay2408us(void);
void Delay2273us(void);
void Delay2145us(void);
void Delay2025us(void);
void Delay1911us(void);
void Delay1804us(void);
void Delay1703us(void);
void Delay1607us(void);
void Delay1517us(void);
void Delay1432us(void);
void Delay1351us(void);
void Delay1276us(void);
void Delay1204us(void);
void Delay1136us(void);
void Delay1073us(void);
void Delay1012us(void);
//void Delay956us(void);




void Delay956us(void); // C5




//void Delay956us(void); 
void Delay902us(void); void Delay851us(void); void Delay804us(void); void Delay758us(void); void Delay716us(void); void Delay676us(void); void Delay638us(void); void Delay602us(void); void Delay568us(void); void Delay536us(void); void Delay506us(void); void Delay478us(void); void Delay451us(void); void Delay426us(void); void Delay402us(void); void Delay379us(void); void Delay358us(void); void Delay338us(void); void Delay319us(void); void Delay301us(void); void Delay284us(void); void Delay268us(void); void Delay253us(void); void Delay239us(void); void Delay225us(void); void Delay213us(void); void Delay201us(void); void Delay190us(void); void Delay179us(void); void Delay169us(void); void Delay159us(void); void Delay150us(void); void Delay142us(void); void Delay134us(void); void Delay127us(void);
// ... (add delay function prototypes for other notes)
// Function to play a specific note
void play_note(void (*delay_func)(void)) {
    unsigned int i;
    for (i = 0; i < 500; i++) {  // Adjust loop count for duration
        delay_func();
        P25 = ~P25;  // Toggle the buzzer pin
    }
}
// Main function
void main(void) {
    while (1) {  // Infinite loop

			  play_note(Delay3822us); // Play C3
			
				//play_note(Delay3822us); 
			  play_note(Delay3608us); 
			  play_note(Delay3405us); 
			  play_note(Delay3214us); 
			  play_note(Delay3034us); 
			  play_note(Delay2863us); 
			  play_note(Delay2703us); 
			  play_note(Delay2551us); 
			  play_note(Delay2408us); 
			  play_note(Delay2273us); 
			  play_note(Delay2145us); 
			  play_note(Delay2025us); 
			  play_note(Delay1911us); 
			  play_note(Delay1804us); 
			  play_note(Delay1703us); 
			  play_note(Delay1607us); 
			  play_note(Delay1517us); 
			  play_note(Delay1432us); 
			  play_note(Delay1351us); 
			  play_note(Delay1276us); 
			  play_note(Delay1204us); 
			  play_note(Delay1136us); 
			  play_note(Delay1073us); 
			  play_note(Delay1012us); 
			  //play_note(Delay956us); 

			
			
			
			  play_note(Delay956us); // Play C5
				
				
				
				
				//play_note(Delay956us); 
				play_note(Delay902us); play_note(Delay851us); play_note(Delay804us); play_note(Delay758us); play_note(Delay716us); play_note(Delay676us); play_note(Delay638us); play_note(Delay602us); play_note(Delay568us); play_note(Delay536us); play_note(Delay506us); play_note(Delay478us); play_note(Delay451us); play_note(Delay426us); play_note(Delay402us); play_note(Delay379us); play_note(Delay358us); play_note(Delay338us); play_note(Delay319us); play_note(Delay301us); play_note(Delay284us); play_note(Delay268us); play_note(Delay253us); play_note(Delay239us); play_note(Delay225us); play_note(Delay213us); play_note(Delay201us); play_note(Delay190us); play_note(Delay179us); play_note(Delay169us); play_note(Delay159us); play_note(Delay150us); play_note(Delay142us); play_note(Delay134us); play_note(Delay127us);
        // ... (call play_note with other delay functions for other notes)
    }
}
// Delay function implementations (placeholders)

// ... (implement other delay functions similarly)









void Delay3822us(void)	//@11.0592MHz
{
	unsigned char data i, j;

	_nop_();
	_nop_();
	i = 42;
	j = 25;
	do
	{
		while (--j);
	} while (--i);
}
void Delay3608us(void)	//@11.0592MHz
{
	unsigned char data i, j;

	i = 39;
	j = 205;
	do
	{
		while (--j);
	} while (--i);
}
void Delay3405us(void)	//@11.0592MHz
{
	unsigned char data i, j;

	_nop_();
	_nop_();
	_nop_();
	i = 37;
	j = 157;
	do
	{
		while (--j);
	} while (--i);
}
void Delay3214us(void)	//@11.0592MHz
{
	unsigned char data i, j;

	_nop_();
	_nop_();
	i = 35;
	j = 143;
	do
	{
		while (--j);
	} while (--i);
}
void Delay3034us(void)	//@11.0592MHz
{
	unsigned char data i, j;

	i = 33;
	j = 160;
	do
	{
		while (--j);
	} while (--i);
}
void Delay2863us(void)	//@11.0592MHz
{
	unsigned char data i, j;

	i = 31;
	j = 201;
	do
	{
		while (--j);
	} while (--i);
}
void Delay2703us(void)	//@11.0592MHz
{
	unsigned char data i, j;

	_nop_();
	_nop_();
	_nop_();
	i = 30;
	j = 15;
	do
	{
		while (--j);
	} while (--i);
}
void Delay2551us(void)	//@11.0592MHz
{
	unsigned char data i, j;

	_nop_();
	_nop_();
	i = 28;
	j = 109;
	do
	{
		while (--j);
	} while (--i);
}
void Delay2408us(void)	//@11.0592MHz
{
	unsigned char data i, j;

	_nop_();
	i = 26;
	j = 228;
	do
	{
		while (--j);
	} while (--i);
}
void Delay2273us(void)	//@11.0592MHz
{
	unsigned char data i, j;

	i = 25;
	j = 112;
	do
	{
		while (--j);
	} while (--i);
}
void Delay2145us(void)	//@11.0592MHz
{
	unsigned char data i, j;

	i = 24;
	j = 15;
	do
	{
		while (--j);
	} while (--i);
}
void Delay2025us(void)	//@11.0592MHz
{
	unsigned char data i, j;

	_nop_();
	i = 22;
	j = 197;
	do
	{
		while (--j);
	} while (--i);
}
void Delay1911us(void)	//@11.0592MHz
{
	unsigned char data i, j;

	i = 21;
	j = 139;
	do
	{
		while (--j);
	} while (--i);
}
void Delay1804us(void)	//@11.0592MHz
{
	unsigned char data i, j;

	_nop_();
	i = 20;
	j = 100;
	do
	{
		while (--j);
	} while (--i);
}
void Delay1703us(void)	//@11.0592MHz
{
	unsigned char data i, j;

	i = 19;
	j = 78;
	do
	{
		while (--j);
	} while (--i);
}
void Delay1607us(void)	//@11.0592MHz
{
	unsigned char data i, j;

	_nop_();
	_nop_();
	i = 18;
	j = 69;
	do
	{
		while (--j);
	} while (--i);
}
void Delay1517us(void)	//@11.0592MHz
{
	unsigned char data i, j;

	_nop_();
	_nop_();
	_nop_();
	i = 17;
	j = 77;
	do
	{
		while (--j);
	} while (--i);
}
void Delay1432us(void)	//@11.0592MHz
{
	unsigned char data i, j;

	_nop_();
	_nop_();
	_nop_();
	i = 16;
	j = 99;
	do
	{
		while (--j);
	} while (--i);
}
void Delay1351us(void)	//@11.0592MHz
{
	unsigned char data i, j;

	_nop_();
	_nop_();
	_nop_();
	i = 15;
	j = 132;
	do
	{
		while (--j);
	} while (--i);
}
void Delay1276us(void)	//@11.0592MHz
{
	unsigned char data i, j;

	_nop_();
	_nop_();
	i = 14;
	j = 182;
	do
	{
		while (--j);
	} while (--i);
}
void Delay1204us(void)	//@11.0592MHz
{
	unsigned char data i, j;

	_nop_();
	i = 13;
	j = 240;
	do
	{
		while (--j);
	} while (--i);
}
void Delay1136us(void)	//@11.0592MHz
{
	unsigned char data i, j;

	_nop_();
	i = 13;
	j = 52;
	do
	{
		while (--j);
	} while (--i);
}
void Delay1073us(void)	//@11.0592MHz
{
	unsigned char data i, j;

	_nop_();
	i = 12;
	j = 135;
	do
	{
		while (--j);
	} while (--i);
}
void Delay1012us(void)	//@11.0592MHz
{
	unsigned char data i, j;

	_nop_();
	_nop_();
	i = 11;
	j = 223;
	do
	{
		while (--j);
	} while (--i);
}









void Delay956us(void)	//@11.0592MHz
{
	unsigned char data i, j;

	_nop_();
	_nop_();
	_nop_();
	i = 11;
	j = 68;
	do
	{
		while (--j);
	} while (--i);
}









void Delay902us(void)	//@11.0592MHz
{
	unsigned char data i, j;

	_nop_();
	i = 10;
	j = 176;
	do
	{
		while (--j);
	} while (--i);
}
void Delay851us(void)	//@11.0592MHz
{
	unsigned char data i, j;

	_nop_();
	i = 10;
	j = 35;
	do
	{
		while (--j);
	} while (--i);
}
void Delay804us(void)	//@11.0592MHz
{
	unsigned char data i, j;

	_nop_();
	_nop_();
	i = 9;
	j = 162;
	do
	{
		while (--j);
	} while (--i);
}
void Delay758us(void)	//@11.0592MHz
{
	unsigned char data i, j;

	_nop_();
	i = 9;
	j = 35;
	do
	{
		while (--j);
	} while (--i);
}
void Delay716us(void)	//@11.0592MHz
{
	unsigned char data i, j;

	i = 8;
	j = 176;
	do
	{
		while (--j);
	} while (--i);
}
void Delay676us(void)	//@11.0592MHz
{
	unsigned char data i, j;

	_nop_();
	_nop_();
	i = 8;
	j = 65;
	do
	{
		while (--j);
	} while (--i);
}
void Delay638us(void)	//@11.0592MHz
{
	unsigned char data i, j;

	_nop_();
	_nop_();
	i = 7;
	j = 217;
	do
	{
		while (--j);
	} while (--i);
}
void Delay602us(void)	//@11.0592MHz
{
	unsigned char data i, j;

	i = 7;
	j = 118;
	do
	{
		while (--j);
	} while (--i);
}
void Delay568us(void)	//@11.0592MHz
{
	unsigned char data i, j;

	i = 7;
	j = 24;
	do
	{
		while (--j);
	} while (--i);
}
void Delay536us(void)	//@11.0592MHz
{
	unsigned char data i, j;

	_nop_();
	_nop_();
	i = 6;
	j = 192;
	do
	{
		while (--j);
	} while (--i);
}
void Delay506us(void)	//@11.0592MHz
{
	unsigned char data i, j;

	_nop_();
	_nop_();
	i = 6;
	j = 109;
	do
	{
		while (--j);
	} while (--i);
}
void Delay478us(void)	//@11.0592MHz
{
	unsigned char data i, j;

	i = 6;
	j = 32;
	do
	{
		while (--j);
	} while (--i);
}
void Delay451us(void)	//@11.0592MHz
{
	unsigned char data i, j;

	_nop_();
	_nop_();
	i = 5;
	j = 214;
	do
	{
		while (--j);
	} while (--i);
}
void Delay426us(void)	//@11.0592MHz
{
	unsigned char data i, j;

	_nop_();
	i = 5;
	j = 145;
	do
	{
		while (--j);
	} while (--i);
}
void Delay402us(void)	//@11.0592MHz
{
	unsigned char data i, j;

	i = 5;
	j = 79;
	do
	{
		while (--j);
	} while (--i);
}
void Delay379us(void)	//@11.0592MHz
{
	unsigned char data i, j;

	_nop_();
	i = 5;
	j = 15;
	do
	{
		while (--j);
	} while (--i);
}
void Delay358us(void)	//@11.0592MHz
{
	unsigned char data i, j;

	_nop_();
	i = 4;
	j = 214;
	do
	{
		while (--j);
	} while (--i);
}
void Delay338us(void)	//@11.0592MHz
{
	unsigned char data i, j;

	i = 4;
	j = 159;
	do
	{
		while (--j);
	} while (--i);
}
void Delay319us(void)	//@11.0592MHz
{
	unsigned char data i, j;

	_nop_();
	_nop_();
	i = 4;
	j = 106;
	do
	{
		while (--j);
	} while (--i);
}
void Delay301us(void)	//@11.0592MHz
{
	unsigned char data i, j;

	_nop_();
	_nop_();
	_nop_();
	i = 4;
	j = 56;
	do
	{
		while (--j);
	} while (--i);
}
void Delay284us(void)	//@11.0592MHz
{
	unsigned char data i, j;

	_nop_();
	_nop_();
	_nop_();
	i = 4;
	j = 9;
	do
	{
		while (--j);
	} while (--i);
}
void Delay268us(void)	//@11.0592MHz
{
	unsigned char data i, j;

	_nop_();
	_nop_();
	i = 3;
	j = 222;
	do
	{
		while (--j);
	} while (--i);
}
void Delay253us(void)	//@11.0592MHz
{
	unsigned char data i, j;

	i = 3;
	j = 181;
	do
	{
		while (--j);
	} while (--i);
}
void Delay239us(void)	//@11.0592MHz
{
	unsigned char data i, j;

	_nop_();
	i = 3;
	j = 142;
	do
	{
		while (--j);
	} while (--i);
}
void Delay225us(void)	//@11.0592MHz
{
	unsigned char data i, j;

	_nop_();
	_nop_();
	i = 3;
	j = 103;
	do
	{
		while (--j);
	} while (--i);
}
void Delay213us(void)	//@11.0592MHz
{
	unsigned char data i, j;

	_nop_();
	_nop_();
	i = 3;
	j = 70;
	do
	{
		while (--j);
	} while (--i);
}
void Delay201us(void)	//@11.0592MHz
{
	unsigned char data i, j;

	_nop_();
	i = 3;
	j = 37;
	do
	{
		while (--j);
	} while (--i);
}
void Delay190us(void)	//@11.0592MHz
{
	unsigned char data i, j;

	_nop_();
	_nop_();
	_nop_();
	i = 3;
	j = 6;
	do
	{
		while (--j);
	} while (--i);
}
void Delay179us(void)	//@11.0592MHz
{
	unsigned char data i, j;

	_nop_();
	_nop_();
	i = 2;
	j = 233;
	do
	{
		while (--j);
	} while (--i);
}
void Delay169us(void)	//@11.0592MHz
{
	unsigned char data i, j;

	_nop_();
	_nop_();
	_nop_();
	i = 2;
	j = 205;
	do
	{
		while (--j);
	} while (--i);
}
void Delay159us(void)	//@11.0592MHz
{
	unsigned char data i, j;

	i = 2;
	j = 178;
	do
	{
		while (--j);
	} while (--i);
}
void Delay150us(void)	//@11.0592MHz
{
	unsigned char data i, j;

	_nop_();
	i = 2;
	j = 153;
	do
	{
		while (--j);
	} while (--i);
}
void Delay142us(void)	//@11.0592MHz
{
	unsigned char data i, j;

	i = 2;
	j = 131;
	do
	{
		while (--j);
	} while (--i);
}
void Delay134us(void)	//@11.0592MHz
{
	unsigned char data i, j;

	i = 2;
	j = 109;
	do
	{
		while (--j);
	} while (--i);
}
void Delay127us(void)	//@11.0592MHz
{
	unsigned char data i, j;

	_nop_();
	_nop_();
	_nop_();
	i = 2;
	j = 89;
	do
	{
		while (--j);
	} while (--i);
}
