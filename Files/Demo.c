//Headers
#include "HD44780.h"

int main(void)
{
	//Setup
	LCD_Setup();
	
	//Print
	LCD_GotoXY(0, 0);
	LCD_PrintString("Line: ");
	LCD_PrintInteger(LCD_GetY());

	LCD_GotoXY(0, 1);
	LCD_PrintString("Line: ");
	LCD_PrintInteger(LCD_getY());

	LCD_GotoXY(0, 2);
	LCD_PrintString("Line: ");
	LCD_PrintInteger(LCD_GetY());

	LCD_GotoXY(0, 3);
	LCD_PrintString("Line: ");
	LCD_PrintInteger(LCD_GetY());
	
	//Loop
	while(1 == 1);
	
	return 0;
}
