/*
 * utils.h
 *
 *  Created on: Jan 18, 2024
 *      Author: user
 */

#ifndef LIB_INC_UTILS_H_
#define LIB_INC_UTILS_H_

#include "main.h"

int _write(int file, char *p, int len);

extern UART_HandleTypeDef huart1;

#endif /* LIB_INC_UTILS_H_ */