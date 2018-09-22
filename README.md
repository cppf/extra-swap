Macros to swap variables in C.


## usage

### var

```c
// Swap variables using third variable.
ESWAP_VAR(varx, vary, type)
```

```c
// define integers a, b
int a = 0x1122;
int b = 0x3344;
printf("%x %x", a, b);

// swap a, b
ESWAP_VAR(a, b, int);
printf("%x %x", a, b);
```


### buf

```c
// Swap variables using temporary buffer.
ESWAP_BUF(varx, vary)
```

```c
// swap a, b
ESWAP_BUF(a, b);
printf("%x %x", a, b);
```


### addsub

```c
// Swap variables using addition and subtraction.
ESWAP_ADDSUB(varx, vary)
```

```c
// swap a, b
ESWAP_ADDSUB(a, b);
printf("%x %x", a, b);
```


### xor

```c
// Swap variables using XOR.
ESWAP_XOR(varx, vary)
```

```c
// swap a, b
ESWAP_XOR(a, b);
printf("%x %x", a, b);
```


### bitsxor

```c
// Swap individual bits using XOR.
ESWAP_BITSXOR(varx, vary, bits)
```

```c
// swap higher 8 bits of a, b
ESWAP_BITSXOR(a, b, 0xFF00);
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
ESWAP_BITS(varx, vary, bits)
```

```c
// swap higher 8 bits of a, b
ESWAP_BITS(a, b, 0xFF00);
printf("%x %x", a, b);
```
