/*
 * comm.h
 *
 *  Created on: Oct 29, 2013
 *      Author: Mariano
 */

#ifndef COMM_H_
#define COMM_H_

#define GET_PARAMS	10
#define GET_TEMP 11
#define GET_GAUSS 12
#define CHANNEL	13
#define SET_DISPLAY	14
#define CMD_DISPLAY	15
#define KEEP_ALIVE	16
#define GET_NAME        17

#define ERROR	50

//funciones
unsigned char InterpretarMsg (char *);
void AnalizarMsg (char *);


#endif /* COMM_H_ */
