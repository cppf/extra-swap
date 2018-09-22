#ifndef _OSWAP_H_
#define _OSWAP_H_


// Sanjaya said: At that time, King Duryodhana after seeing the army of the Pandavas arranged
// in military phalanx approaching near his respected preceptor Dronacharya, spoke these words.
// ref: http://www.bhagavad-gita.org/Gita/verse-01-02.html


#pragma region required headers
#include <string.h>
#pragma endregion



#pragma region macro
// Swap variables using third variable.
// args: varx, vary, type.
#define OSWAP_VAR(X, Y, T) \
	do { \
		T z = X; \
		X = Y; \
		Y = z; \
	} while(0)


// Swap variables using temporary buffer.
// args: varx, vary.
// thanks:
// adamk (http://github.com/OpenBudget)
// http://stackoverflow.com/questions/3982348/implement-generic-swap-macro-in-c#answer-3982430
#define OSWAP_BUF(X, Y) \
	do { \
		char z[sizeof(X)]; \
		memcpy(z, &(X), sizeof(X)); \
		memcpy(&(X), &(Y), sizeof(X)); \
		memcpy(&(Y), z, sizeof(X)); \
	} while(0)


// Swap variables using addition and subtraction.
// args: varx, vary.
#define OSWAP_ADDSUB(X, Y) \
	do { \
		X = X + Y; \
		Y = X - Y; \
		X = X - Y; \
	} while(0)


// Swap variables using XOR.
// args: varx, vary.
#define OSWAP_XOR(X, Y) \
	do { \
		X = X ^ Y; \
		Y = X ^ Y; \
		X = X ^ Y; \
	} while(0)


// Swap individual bits using XOR.
// args: varx, vary, bits.
#define OSWAP_BITSXOR(X, Y, B) \
	do { \
		X = X ^ (Y & B); \
		Y = Y ^ (X & B); \
		X = X ^ (Y & B); \
	} while(0)


// Swap variables.
// args: varx, vary.
#define OSWAP(X, Y) \
	OSWAP_XOR(X, Y)


// Swap individual bits.
// args: varx, vary, bits.
#define OSWAP_BITS(X, Y, B) \
	OSWAP_BITSXOR(X, Y, B)
#pragma endregion


#endif // !_OSWAP_H_
