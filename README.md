# oswap

Macros to swap variables in C.


## usage

### var

```c
// Swap variables using third variable.
OSWAP_VAR(varx, vary, type)
```

```c
// define integers a, b
int a = 0x1122;
int b = 0x3344;
printf("%x %x", a, b);

// swap a, b
OSWAP_VAR(a, b, int);
printf("%x %x", a, b);
```


### buf

```c
// Swap variables using temporary buffer.
OSWAP_BUF(varx, vary)
```

```c
// swap a, b
OSWAP_BUF(a, b);
printf("%x %x", a, b);
```


### addsub

```c
// Swap variables using addition and subtraction.
OSWAP_ADDSUB(varx, vary)
```

```c
// swap a, b
OSWAP_ADDSUB(a, b);
printf("%x %x", a, b);
```


### xor

```c
// Swap variables using XOR.
OSWAP_XOR(varx, vary)
```

```c
// swap a, b
OSWAP_XOR(a, b);
printf("%x %x", a, b);
```


### bitsxor

```c
// Swap individual bits using XOR.
OSWAP_BITSXOR(varx, vary, bits)
```

```c
// swap higher 8 bits of a, b
OSWAP_BITSXOR(a, b, 0xFF00);
printf("%x %x", a, b);
```


### .

```c
// Swap variables.
OSWAP(vara, varb)
```

```c
// swap a, b
OSWAP(a, b);
printf("%x %x", a, b);
```


### bits

```c
// Swap individual bits.
OSWAP_BITS(varx, vary, bits)
```

```c
// swap higher 8 bits of a, b
OSWAP_BITS(a, b, 0xFF00);
printf("%x %x", a, b);
```
