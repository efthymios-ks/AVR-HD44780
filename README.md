# AVR HD44780 Library  

---

**Description:**  
A library to control HD44780-based LCD using AVR microcontrollers.  
+ The library operates only in 4-bit mode.  
+ **The display pins can be configured to any pin in any port in any sequence.**  
+ Instead of using delays, it checks for the busy flag status of the display.
+ Functions included:  
  + Basic operations.  
  + Printing text.
  + Printing numbers (using a substraction algorithm that is overall faster than divisions).  
  _Read the bottom of "HD44780.h" to see all functions available._  
+ My custom I/O macros are required and are included.  
+ The display sizes that are supported are:  

| | | | |
|---|---|---|---|  
|8x1|16x1|20x1|40x1|  
|8x2|16x2|20x2|40x2|  
| |16x4|20x4| |    

---  

**Memory usage:**  
+ Program: 0 bytes  
+ Data: 0 bytes  

**Compiler:**  
AVR-GCC  
  
**Optimization Level:**  
Optimize (-O1)  
  
--- 

![picture alt](https://raw.githubusercontent.com/efthymios-ks/AVR-HD44780-Library/master/Demonstration.png)  

---
