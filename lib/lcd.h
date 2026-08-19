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
    unsigned int columnas;
    unsigned int filas;
    
}pantalla_t;

void lcdinit (pantalla_t*);

void lcdclear (pantalla_t*);

void lcdcursor(pantalla_t*);

void lcdbrillo(pantalla_t*);

void scrollleft(pantalla_t*);

void scrollright(pantalla_t*);

void lcdprint(pantalla_t*);

void lcdsend(pantalla_t*);

#endif
