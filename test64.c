/*
test64.c
This program tests if your system is 64 bit or not.
by Darcy Allen of Canada
..............
No copyright. No license. No agreements.
This is "Truly Open Source".
Yes you can copy this. Yes you can give it away. Yes you can make money with it.
"The Truly Open Source is about caring, sharing, and giving freely to the world.
You are free to copy this source code and use it anyway that you want to.
You do not have to redistribute your modifications to anyone.
You do not have to include this text in your copied source code if you don't want to.
You have the freedom to use this truly open source in commercial software,
to earn money from sales of the binary runtime files from this source and/or from the
source code itself or portions of this source code, and you have the right to convert this
into your own closed source if you want to.
You should not expect bug fixes nor enhancements for this source code and the
author or authors of the source code shall not be held liable for any damages whatsoever.
Similarily, you are not expected to share your bug fixes nor your enhancements to where you
got this source code from, although if you do have time to share, maybe some people would
appreciate your efforts."
..............

Instructions:

build this on your linux platform with:
gcc test64.c

run it:
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
*/
#include <stdio.h>
#include <string.h>

int main()
{
int iSizeOfLong = 0;
long lNumber1 = 0L;
long lNumber2 = 0L;
long lNumber3 = 0L;
char szResult[18]; // longest="not 64 nor 32 bit" NOTE: if this string changes, update the string size

lNumber1 = 0x7FFFFFFF;
lNumber2 = 0x7FFFFFFF;
lNumber3 = lNumber1 + lNumber2;
printf( "test64\nNumber 1 = %ld\nNumber 2 = %ld\nNumber 3 = %ld\n",
lNumber1, lNumber2, lNumber3 );
lNumber3 = lNumber3 + lNumber1;
iSizeOfLong = sizeof(long);
if ( iSizeOfLong == 8 )
{
strcpy( szResult, "System is 64 bit" );
}
else
{
if ( iSizeOfLong == 4 )
{
strcpy( szResult, "System is 32 bit" );
}
else
{
strcpy( szResult, "not 64 nor 32 bit" );
}
}
printf( "added Number 1 again, Number 3 = %ld\nsizeof(char,int,long,double) in bytes = %d %d %d %d %s\n",
lNumber3, (int)sizeof(char), (int)sizeof(int), (int)sizeof(long), (int)sizeof(double), szResult );
return( 0 );
} 

