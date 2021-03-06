/*
 * WEARABLE INDOOR LOCALIZATION DEVICE
 * ECE 453, FALL 2014
 *
 * Calvin Hareng
 * Pedro Melgarejo
 * Robert Wagner
 *
 * MAIN.H
 */

#ifndef MAIN_H_
#define MAIN_H_

//general tasks
void CLK_Init();
unsigned char* floatToHex(float* val, int byteSize);
void dumpToTXT(float data[][]);

/* VARIABLES */
extern const int ROWS;
extern int COLS;

#endif /* MAIN_H_ */
