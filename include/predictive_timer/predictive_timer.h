/*
 * predictive_timer.h
 *
 *  Created on: Jul 24, 2013
 *      Author: brent
 */

#ifndef PREDICTIVE_TIMER_H_
#define PREDICTIVE_TIMER_H_

#include <stddef.h>

#define MAX_LOCATION_SAMPLES 10

typedef struct _LocationSample{
	float latitude;
	float longitude;
} LocationSample;

typedef struct _LapBuffer{
	LocationSample samples[MAX_LOCATION_SAMPLES];
	size_t sampleInterval;
	size_t sampleCount;
} LapBuffer;

void init_timer();
void end_lap();
void add_sample(float latitude, float longitude);
float getPredictedTime();

#endif /* PREDICTIVE_TIMER_H_ */
