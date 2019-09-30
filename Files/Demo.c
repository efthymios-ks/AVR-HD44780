//Headers
#include "HD44780.h"

int main(void)
{
	//Setup
	LCD_Setup();
	
	//Print
	uint8_t line;
	for (line = 0; line < 4; line++)
	{
		LCD_GotoXY(0, line);
		LCD_PrintString("Line: ");
		LCD_PrintInteger(LCD_GetY());
	}
	
	while (1);
	
	return 0;
}
