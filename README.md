# 107-1-C-programming

## week 1
 - [welcome](https://github.com/mida147852/107-1-C-programming/blob/master/w01/0910welcome.cpp)
````
#include <stdio.h> 
int main()
{ 
printf("Welcome to C Programming\n");
 printf("My name: htc\n");
  return 0;
}
````
- [輸入輸出](https://github.com/mida147852/107-1-C-programming/blob/master/w01/0911%E8%BC%B8%E5%85%A5%E8%BC%B8%E5%87%BA.cpp)
````
Enter temperature in C: 20.5 
20.5 C = 68.9 F 
Enter temperature in F: 80.5 
80.5 F = 26.9 C
````
 - [平方根](https://github.com/mida147852/107-1-C-programming/blob/master/w01/0911%E5%B9%B3%E6%96%B9%E6%A0%B9.cpp)
````
Enter a b c: 2 -3 1 
For equation 2 x^2 -3 x + 1 =0
two roots are x1 = 1.0 x2 = 0.5
````
## week 2
 - [leap year](https://github.com/mida147852/107-1-C-programming/blob/master/w02/leap%20year)
````
Enter year: 2000 
Year 2000 is a leap year.
````
* [seconds](https://github.com/mida147852/107-1-C-programming/blob/master/w02/seconds)
````
Enter seconds: 20000 
20000 seconds = 05:33:20
````
## week 3
* [BMI](https://github.com/mida147852/107-1-C-programming/blob/master/W03/BMI)
````
Enter your height: 168
Enter your weight: 120
你BMI顯示重度肥胖
Enter your height: 168
Enter your weight: 90
你BMI顯示中度肥胖
Enter your height: 168
Enter your weight: 80
你BMI顯示輕度肥胖
Enter your height: 168
Enter your weight: 70
你BMI顯示過重
Enter your height: 168
Enter your weight: 60
你BMI顯示正常
Enter your height: 168
Enter your weight: 40
你BMI顯示過輕
Enter your height: -1
Enter your weight: -1
````
* [sum](https://github.com/mida147852/107-1-C-programming/blob/master/W03/sum)
````
Enter n1 n2: 1 10 
sum(1,10) = 55 
Enter n1 n2: 5 10 
sum(5,10) = 45 
Enter n1 n2: 10 100 
sum(10,100) = 5005 
Enter n1 n2: 50 100 
sum(50,100) = 3825 
Enter n1 n2: -1 -1
````
* [while leap year](https://github.com/mida147852/107-1-C-programming/blob/master/W03/while%20leap%20year)
````
Enter year: 2000 
Year 2000 is a leap year.
Enter year: 2018 
Year 2018 is not a leap year. 
Enter year: 2020 
Year 2020 is a leap year. 
Enter year: 2100 
Year 2100 is not a leap year. 
Enter year: -1
````
* [while seconds](https://github.com/mida147852/107-1-C-programming/blob/master/W03/while%20seconds)
````
Enter seconds: 20000 
20000 seconds = 05:33:20 
Enter seconds: 10000 
10000 seconds = 02:46:40 
Enter seconds: 30000 
30000 seconds = 08:20:00 
Enter seconds: 100000 
100000 seconds = 27:46:40 
Enter seconds: -1
````
## week 4
* [menu](https://github.com/mida147852/107-1-C-programming/blob/master/w04/menu.cpp)
````
Main Menu 
1. Rectangle 
2. Vertical Triangle
3. Exit 
=> 1 
Enter height and width: 5 8 
********
*      *
*      *
*      *
********
Main Menu 
1. Rectangle 
2. Vertical Triangle 
3. Exit 
=> 2 
Enter height and type: 5 1
  * 
  **
  * * 
  *  * 
  *****
Main Menu 
1. Rectangle 
2. Vertical Triangle 
3. Exit 
=> 2 
Enter height and type: 5 2
     * 
    **
   * *
  *  *
 ***** 
Main Menu 
1. Rectangle 
2. Vertical Triangle 
3. Exit 
=> 2 
Enter height and type: 5 3 
*****
*  * 
* * 
**
* 
Main Menu 
1. Rectangle 
2. Vertical Triangle 
3. Exit
 => 2 
Enter height and type: 5 4 
 *****
  *  * 
   * *
    ** 
     *
Main Menu 
1. Rectangle 
2. Vertical Triangle 
3. Exit 
=> 3
````
* [menu2](https://github.com/mida147852/107-1-C-programming/blob/master/w04/menu2.cpp)
````
Main Menu 
1. Rectangle 
2. Vertical Triangle 
3. Tsosceles Triangle 
4. Exit 
=> 1
Enter height, width, filled: 5 8 0
********
*      *
*      *
*      *
********

Main Menu 
1. Rectangle 
2. Vertical Triangle 
3. Tsosceles Triangle 
4. Exit 
=> 1
Enter height, width, filled: 5 8 1
********
********
********
********
********

Main Menu 
1. Rectangle  
2. Vertical Triangle
3. Tsosceles Triangle 
4. Exit 
=> 2
Enter height, type, filled: 6 1 0
* 
**
* * 
*  * 
*****

Main Menu 
1. Rectangle  
2. Vertical Triangle
3. Tsosceles Triangle 
4. Exit 
=> 2
Enter height, type, filled: 6 1 1
* 
**
*** 
**** 
*****
Main Menu
1. Rectangle  
2. Vertical Triangle
3. Tsosceles Triangle 
4. Exit 
=> 3
Enter height, type, filled: 6 1 0
     *
    * *
   *   *
  *     *
 *********
 
Main Menu
1. Rectangle  
2. Vertical Triangle
3. Tsosceles Triangle 
4. Exit 
=> 3
Enter height, type, filled: 6 2 1
 *********
  *******
   *****
    ***
     * 
 
Main Menu 
1. Rectangle  
2. Vertical Triangle
3. Tsosceles Triangle 
4.Exit 
=> 4
````
## week 5
* [menu3](https://github.com/mida147852/107-1-C-programming/blob/master/w05/menu3)
````
Main Menu 
1.leap 
2.timeconvert 
3.Exit 
=> 1
Enter year: 2000 
Year 2000 is a leap year.

Main Menu 
1.leap 
2.timeconvert 
3.Exit 
=> 1
Enter year: 2018 
Year 2018 is not a leap year.

Main Menu 
1.leap 
2.timeconvert 
3.Exit 
=> 1
Enter year: 2020 
Year 2020 is a leap year.

Main Menu 
1.leap 
2.timeconvert 
3.Exit 
=> 1
Enter year: 2100 
Year 2100 is not a leap year.

Main Menu 
1.leap 
2.timeconvert 
3.Exit 
=> 2
Enter hh:mm:ss 10:10:10 
10:10:10 = 36610 seconds

Main Menu 
1.leap 
2.timeconvert 
3.Exit 
=> 2
Enter hh:mm:ss  0:30:10 
00:30:10 = 1810 seconds

Main Menu 
1.leap 
2.timeconvert 
3.Exit 
=> 3
````

## week 6
* [dayspassed](https://github.com/mida147852/107-1-C-programming/blob/master/w06/dayspassed.cpp)
````
Enter year: 2018 
Enter month and day: 10 16 
289 days passed since 1/1/2018
Continue (Y/N)? y 
Enter year: 2020 
Enter month and day: 3 1 
61 days passed since 1/1/2020
Continue (Y/N)? y 
Enter year: 2100 
Enter month and day: 3 1 
60 days passed since 1/1/2100
Continue (Y/N)? n
Process returned 0 (0x0)execution time : 57.581 s Press any key to continue.
````
* [sort](https://github.com/mida147852/107-1-C-programming/blob/master/w06/sort.cpp)
````
original: 34 78 12  9 87 66 88 99 56 11 
sorting :  9 11 12 34 56 66 78 87 88 99
````
## week 7  
- [Hanoi tower](https://github.com/mida147852/107-1-C-programming/blob/master/w07/Hanoi%20tower.cpp)
````
tower1(n,from,aux,to)
A -> C
A -> B
C -> B
A -> C
B -> A
B -> C
A -> C


tower2(n,to,aux,from)
C -> A
C -> B
A -> B
C -> A
B -> C
B -> A
C -> A


tower3(n,from,to,aux)
A -> B
A -> C
B -> C
A -> B
C -> A
C -> B
A -> B


tower4(n,to,from,aux)
B -> A
B -> C
A -> C
B -> A
C -> B
C -> A
B -> A


tower5(n,aux,from,to)
B -> C
B -> A
C -> A
B -> C
A -> B
A -> C
B -> C


tower6(n,aux,to,from)
C -> B
C -> A
B -> A
C -> B
A -> C
A -> B
C -> B
````
- [gcd](https://github.com/mida147852/107-1-C-programming/blob/master/w07/gcd.cpp)
````
rgcd(48,126) = 6
gcd(48,126) = 6

rgcd(48,128) = 16
gcd(48,128) = 16

rgcd(48,144) = 48
gcd(48,144) = 48

rgcd(48,48) = 48
gcd(48,48) = 48
````
- [Fib](https://github.com/mida147852/107-1-C-programming/blob/master/w07/Fib.cpp)
````
fib(3) = 2
fib(10) = 55
fib(30) = 832040
````
- [sum](https://github.com/mida147852/107-1-C-programming/blob/master/w07/sum.cpp)
````
Enter n: 10
sum(10)=55
10
9
8
7
6
5
4
3
2
1
rsum(10)=55
````
- [sumodd](https://github.com/mida147852/107-1-C-programming/blob/master/w07/sumodd.cpp)
````
Enter n: 5
sumodd1(5) = 25;
sumodd2(5) = 9;

Enter n: 9
sumodd1(9) = 81;
sumodd2(9) = 25;
````
## week 8
- [magic](https://github.com/mida147852/107-1-C-programming/blob/master/W08/magic.cpp)
````
Diagonal Move
 11  18  25   2   9
 10  12  19  21   3
  4   6  13  20  22
 23   5   7  14  16
 17  24   1   8  15

Knight Move
 17   6  25  14   3
 11   5  19   8  22
 10  24  13   2  16
  4  18   7  21  15
 23  12   1  20   9
````
## week 9
- [lottos.cpp](https://github.com/mida147852/107-1-C-programming/blob/master/w09/lottos.cpp)
````
Enter N: 10

2018/12/11   41 11 45 13 08 13
2010/06/29   07 21 15 02 07 36
2019/01/28   03 32 07 48 35 27
2015/03/25   09 20 23 24 08 19
2014/08/17   46 39 47 12 03 34
2010/10/24   30 09 19 09 29 26
2016/08/13   40 41 44 18 47 43
2015/01/06   25 25 08 11 07 41
2016/10/05   14 13 36 41 21 30
2016/01/22   39 32 18 27 16 45
````
- [dates.cpp](https://github.com/mida147852/107-1-C-programming/blob/master/w09/dates.cpp)
````
Enter N: 10

2018/12/11
2011/06/08
2015/07/24
2010/06/29
2015/04/11
2017/08/08
2019/01/28
2017/03/30
2016/11/31
2015/03/25
````
## week 11
- [Knight Tour(smart move).cpp](https://github.com/mida147852/107-1-C-programming/blob/master/w11/Knight%20Tour(smart%20move).cpp)
````
1: (row,col)=(2,0)

23  2 21 18 25  4 37 54
20 17 24  3 38 53 26  5
 1 22 19 42 27 36 55 52
16 43 28 39 56 63  6 35
29 12 47 64 41 58 51 62
44 15 40 57 48 61 34  7
11 30 13 46  9 32 59 50
14 45 10 31 60 49  8 33

Total moves: 64
````
- [Knight Tour1.cpp](https://github.com/mida147852/107-1-C-programming/blob/master/w11/Knight%20Tour1.cpp)
````
 0  8 19 44 11  6  3 14
20 43 10  7  2 13 38  5
 9 18  1 12 37  4 15 28
 0 21 42 31 16 27 36 39
 0 32 17  0 35 40 29 26
22  0 34 41 30 25  0  0
33  0  0 24  0  0  0  0
 0 23  0  0  0  0  0  0

Total moves: 44
````
## week 12
- [Lotto(s)pointer.cpp](https://github.com/mida147852/107-1-C-programming/blob/master/w12/Lotto(s)pointer.cpp)

- [Lotto adding winner.cpp](https://github.com/mida147852/107-1-C-programming/blob/master/w12/Lotto%20adding%20winner.cpp)
````
John Smith

[0] 2017/06/21, 33 10 42 15 24 03 , Winner: Adam Smith
[1] 2020/04/01, 09 02 43 17 40 41 , Winner: Steve Edam
[2] 2016/03/24, 24 25 40 17 01 40 , Winner: Amy Jones
[3] 2019/05/11, 05 42 11 38 40 39 , Winner: Louis Love
[4] 2019/11/17, 06 30 40 29 26 33 , Winner: William Cash
[5] 2019/11/14, 02 21 22 08 11 24 , Winner: Dave Bush
[6] 2015/11/10, 24 17 32 48 15 31 , Winner: Chris Winston
[7] 2017/03/27, 38 14 38 07 32 17 , Winner: Jim Copper
[8] 2020/01/05, 26 45 44 30 41 23 , Winner: John Copper
[9] 2015/03/09, 08 32 23 39 20 08 , Winner: Haro Johnson
````
## week 13
- [Linked List-Lotto data.cpp](https://github.com/mida147852/107-1-C-programming/blob/master/w13/Linked%20List-Lotto%20data.cpp)
````
Enter your choice:
   1 to insert an element into the list.
   2 to delete an element from the list.
   3 to end.
? 1

Enter ID: 1000
Enter the year: 2018
Enter the month: 12
Enter the days: 4
Random generating 6 lotto numbers ...
The list is:

Lotto ID: 1000
   Date: 2018/12/4
   Six winning numbers: 21 15 12 3 29 8
NULL

? 1

Enter ID: 1002
Enter the year: 2018
Enter the month: 12
Enter the days: 8
Random generating 6 lotto numbers ...
The list is:

Lotto ID: 1000
   Date: 2018/12/4
   Six winning numbers: 21 15 12 3 29 8

Lotto ID: 1002
   Date: 2018/12/8
   Six winning numbers: 47 16 32 29 13 5
NULL

? 1

Enter ID: 1001
Enter the year: 2018
Enter the month: 12
Enter the days: 6
Random generating 6 lotto numbers ...
The list is:

Lotto ID: 1000
   Date: 2018/12/4
   Six winning numbers: 21 15 12 3 29 8

Lotto ID: 1001
   Date: 2018/12/6
   Six winning numbers: 24 31 16 42 32 3

Lotto ID: 1002
   Date: 2018/12/8
   Six winning numbers: 47 16 32 29 13 5
NULL

?
````
- [swap.cpp](https://github.com/mida147852/107-1-C-programming/blob/master/w13/swap.cpp)

## exercise
- [99multiplication](https://github.com/mida147852/107-1-C-programming/blob/master/exercise/99multiplication.cpp)
- [triangle](https://github.com/mida147852/107-1-C-programming/blob/master/exercise/triangle.cpp)
- [UVA100](https://github.com/mida147852/107-1-C-programming/blob/master/exercise/UVA100)
- [UVA488](https://github.com/mida147852/107-1-C-programming/blob/master/exercise/UVA488)
- [UVA10071andUVA10055](https://github.com/mida147852/107-1-C-programming/blob/master/exercise/UVA10071andUVA10055)
- [UVA913](https://github.com/mida147852/107-1-C-programming/blob/master/exercise/UVA913)
- [UVA406](https://github.com/mida147852/107-1-C-programming/blob/master/exercise/UVA406)
-  [UVA256](https://github.com/mida147852/107-1-C-programming/blob/master/exercise/UVA256)
-   [UVA10107](https://github.com/mida147852/107-1-C-programming/blob/master/exercise/UVA10107)


<!--stackedit_data:
eyJoaXN0b3J5IjpbLTMwMzg1MDkzMyw2OTkzNTg5MTgsLTUyMz
Q2OTE3MywtMTg1MjgyMzM4MSwxMTg0OTU1NTg1LC0xMzQwNjcz
MzU3LC0xNjA4Njk0MTQ4LDEzMDY5NTE2NzEsNDg1ODIyMDk1LD
E2NjAxMDIxODZdfQ==
-->