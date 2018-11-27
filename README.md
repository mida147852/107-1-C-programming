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

````
- [Knight Tour1.cpp](https://github.com/mida147852/107-1-C-programming/blob/master/w11/Knight%20Tour1.cpp)
````

````
## week 12
- [lottos.cpp](https://github.com/mida147852/107-1-C-programming/blob/master/w09/lottos.cpp)
````

````
- [lottos.cpp](https://github.com/mida147852/107-1-C-programming/blob/master/w09/lottos.cpp)
````

````
## exercise
- [99multiplication](https://github.com/mida147852/107-1-C-programming/blob/master/exercise/99multiplication.cpp)
- [triangle](https://github.com/mida147852/107-1-C-programming/blob/master/exercise/triangle.cpp)
- [UVA100](https://github.com/mida147852/107-1-C-programming/blob/master/exercise/UVA100)
- [UVA488](https://github.com/mida147852/107-1-C-programming/blob/master/exercise/UVA488)
- [UVA10071andUVA10055](https://github.com/mida147852/107-1-C-programming/blob/master/exercise/UVA10071andUVA10055)
- [UVA913](https://github.com/mida147852/107-1-C-programming/blob/master/exercise/UVA913)


<!--stackedit_data:
eyJoaXN0b3J5IjpbNTk3NjQyNjYsLTEzNDA2NzMzNTcsLTE2MD
g2OTQxNDgsMTMwNjk1MTY3MSw0ODU4MjIwOTUsMTY2MDEwMjE4
Nl19
-->