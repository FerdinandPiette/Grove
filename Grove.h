#ifndef Grove_H
#define Grove_H

#include <Arduino.h>

struct GrovePin {
	unsigned char pin1;
	unsigned char pin2;
};

#define GROVE_A0 (struct GrovePin){A0,A1}
#define GROVE_A1 (struct GrovePin){A1,A2}
#define GROVE_A2 (struct GrovePin){A2,A3}
#define GROVE_A3 (struct GrovePin){A3,A4}
#define GROVE_D2 (struct GrovePin){2,3}
#define GROVE_D3 (struct GrovePin){3,4}
#define GROVE_D4 (struct GrovePin){4,5}
#define GROVE_D5 (struct GrovePin){5,6}
#define GROVE_D6 (struct GrovePin){6,7}
#define GROVE_D7 (struct GrovePin){7,8}
#define GROVE_D8 (struct GrovePin){8,9}
#define GROVE_I2C (struct GrovePin){A4,A5}
#define GROVE_UART (struct GrovePin){0,1}

typedef struct GrovePin GrovePin;

#endif