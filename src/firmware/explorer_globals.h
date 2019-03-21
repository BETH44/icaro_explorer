

#pragma once 
#include "explorer_bumper.h"
#include "explorer_gas.h"
#include "explorer_light.h"
#include "explorer_params.h"
#include "explorer_motori.h"
#include "explorer_led.h"



extern Motori motori;
extern Bumper bumper;
extern Luci luci[NUM_SENSOR_LIGHT];
extern Gas gas;
extern Led led;