# How do you compile this?

1. Create a file `Makefile`

2. Add the following code to the makefile:

```
main: main.c
  g++ main.c -o myFirstMakeOutput.o
```

3. Run the program!

# Errors encountered

WSL users may encounter this error:

```
main.c:1:10: fatal error: iostream.h: No such file or directory
    1 | #include <iostream.h>
      |          ^~~~~~~~~~~~
compilation terminated.
```

To resolve this, run `sudo apt-get install libc++abi-dev`
