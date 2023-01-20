# Dynamic Libraries
**Functions** are block of code that are reusable througout a program, removing the need to rewrite code multiple times.
Like functions, **Libraries** also save time in that they make functions reuseable in multiple programs.

We have **static libraries** and **dynamic libraries**. Static libraries are locked into the program at compile time, thus, they are part of the final executable file produced from compiling all the source files, whereas, dynamic libraries exist as separate files outside of the executable file.

## Learning Objectives
- What is a dynamic library, how does it work, how to create one, and how to use it
- What is the environment variable `$LD_LIBRARY_PATH` and how to use it
- What are the differences between static and shared libraries
- Basic usage `nm`, `ldd`, `idconfig`

## Dynamic Library Creation (Linux only)
1. `gcc *.c -c -fpic`
The **.c** source file needs to be prepared for use in a dynamic library. Since multiple programs can all use one instance of a dynamic library, the library can't store data a fixed addresses. This is because thre location of the library in memory will vary between programs. This is done by using the compiler flag **-fpic**. Since we need to apply this step after the compile process has generated the object code, the compiler must be told to halt and return one object file(.o) for each source file. This is done by using the **-c** flag.

2. `gcc *.o -shared -o liball.so`
The object files are now ready to be compiled into the dynamic library. This is done by compiling all the **.o** files by using the **-shared** flag. Later when compiling program files, the compiler identifies a library extension (**.so** for dynamic, **.a** for static). Therefore it's important to name a library accordingly.

3. `export LD_LIBRARY_PATH=$PWD:$LD_LIBRARY_PATH`
Because a program needs to know where to look for library files, we must add that location to the environmental variable `LD_LIBRARY_PATH` - [Static Libraries vs. Dynamic Libraries](https://medium.com/@StueyGK/static-libraries-vs-dynamic-libraries-af78f0b5f1e4
