#ifndef INIT_H
#define INIT_H

extern const struct initFunctions {
	void (*const Gpio)(void);
	void (*const Systick)(void);
} Init;

#endif
