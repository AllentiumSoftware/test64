# test64
Test 64 bit cross platform C program.

This program tests if your system is 64 bit or not.
by Darcy Allen of Canada

To Build:
on any linux distribution
gcc test64.c

To Run the Test:
./a.out

if you have a true 64 bit CPU and linux O/S, you will see this:
test64
Number 1 = 2147483647
Number 2 = 2147483647
Number 3 = 4294967294
added Number 1 again, Number 3 = 6442450941
sizeof(char,int,long,double) in bytes = 1 4 8 8 System is 64 bit

32 bit platform shows this:
test64
Number 1 = 2147483647
Number 2 = 2147483647
Number 3 = -2
added Number 1 again, Number 3 = 2147483645
sizeof(char,int,long,double) in bytes = 1 4 4 8 System is 32 bit

