/*
 * threshold.c
 *
 *  Created on: Sep 22, 2014
 *      Author: Ali
 */
#include "threshold.h"
uint16_t whereamIT =0, maxPixLocation=0;
uint8_t check = 0;
uint16_t pixelVALUE = 28;
uint8_t threshold(uint8_t *image, uint16_t width, uint16_t height)
{

	uint16_t r;//,c,k;
	//k=0;
	//pixelVALUE = image[20000];
//	for(r=0;r<height;r++){
//		for(c=0;c<width;c++){
//		        whereamIT++;
//			uint8_t *pixelPos = &image[k * r + c] ;
//			if(*pixelPos < BIN_THRESHOLD) *pixelPos = 0;
//			else *pixelPos = 255;
//		}
//		k++;
//	}
	for(r=0;r<height*width;r++)
	  {
	        whereamIT++;
                uint8_t *pixelPos = &image[r] ;
                if(*pixelPos < BIN_THRESHOLD) *pixelPos = 0;
                //else *pixelPos = 255;

	  }
	if(check ==0)
	  {
	    maxPixLocation = whereamIT;
	    check = 1;
	  }
	whereamIT=0;
	return 1;
}


