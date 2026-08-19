#ifndef LCD_H
#define LCD_H

#include "stm32f103xb.h"

typedef struct{

    GPIO_TypeDef* puerto;
    unsigned int datos [8];
    unsigned int rw;
    unsigned int rs;
    unsigned int cursor;
    unsigned int brillo;
    unsigned int dato;
    unsigned int led;
    
}pantalla_t;

void lcdinit (pantalla_t*);

void lcdclear (pantalla_t*);

void lcdcursor(pantalla_t*);

void lcdbrillo(pantalla_t*);

void scrollleft(pantalla_t*);

void scrollright(pantalla_t*);

void lcd_print(pantalla_t*);

void lcd_send(pantalla_t*);

#endif
