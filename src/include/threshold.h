/*
 * threshold.h
 *
 *  Created on: Sep 22, 2014
 *      Author: Ali AlSaibie
 */

#ifndef THRESHOLD_H_
#define THRESHOLD_H_
#include <stdint.h>

#define BIN_THRESHOLD 150
/**
 * @brief Standard Threshold
 */
uint8_t threshold(uint8_t *image, uint16_t width, uint16_t height);


#endif /* THRESHOLD_H_ */
