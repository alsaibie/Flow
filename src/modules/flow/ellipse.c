/*
 * ellipse.c
 *
 *  Created on: Oct 7, 2014
 *      Author: Ali
 */

#include "ellipse.h"


void getPose(struct image * img_buf_1, struct image * img_buf_2, struct image * img_buf_3){

  //uint8_t w = img_buf_1->width;
  //uint8_t h = img_buf_1->height;

  //threshold(img_buf_1->pixel_data, img_buf_1->width, img_buf_1->height);
  //gaussian_noise_reduce(img_buf_1,img_buf_2);
  uint8_t * g =  img_buf_2->pixel_data;
  uint8_t * dir = img_buf_3->pixel_data;
  calc_gradient_sobel(img_buf_1, g, dir);
  non_max_suppression(img_buf_1, g, dir);
  //uint8_t high, low;
  //estimate_threshold(img_buf_1, &high, &low);
  //hysteresis(high, low, img_buf_1, img_buf_2);
//  for (int k=0; k < (h*w); k++){
//      img_buf_2->pixel_data[k]=img_buf_1->pixel_data[k];
//  }
}



