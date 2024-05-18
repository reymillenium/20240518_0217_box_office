# COP 1334 Assignment - Introduction to C++

## Title: Box Office

### Exercise Description:

Write a program that asks the user for the number of males and the number of females registered in a class.
The program should display the percentage of males and females in the class.

Hint: Suppose there are 8 males and 12 females in a class. There are 20 students in the class.
The percentage of males can be calculated as 8÷20=0.4, or 40 percent. The percentage of females can be calculated as 12 ÷ 20 = 0.6, or 60 percent.


A movie theater only keeps a percentage of the revenue earned from ticket sales. The remainder goes to the movie distributor. Write a program that calculates a theater’s gross and net box office profit for a night. The program should ask for the name of the movie, and how many adult and child tickets were sold. (The price of an adult ticket is $10.00 and a child’s ticket is $6.00.) It should display a report similar to:

|                             |                  |
| --------------------------- | ---------------- |
| Movie Name:                 | “Wheels of Fury” |
| Adult Tickets Sold:         | 382              |
| Child Tickets Sold:         | 127              |
| Gross Box Office Profit:    | $ 4,582.00       |
| Net Box Office Profit:      | $    916.40      |
| Amount Paid to Distributor: | $ 3,665.60       |




## Execution from the Terminal (Alternative way without an IDE):

We must provide to the Compiler the same switches that we usually do in the IDE:

```terminal
g++ -Wall -std=c++17 main.cpp
```

That will create a file named 'a.out' if you are working in MacOS or a .exe file if you are on Windows. That's the default executable file's name when we don't provide a name.

But we can also specify the name of the resulting executable file:

```terminal
g++ -Wall -std=c++17 main.cpp -o your_prefered_executable_file_name
```

And in order to run that a.out file, we must execute on the terminal:

```terminal
 % ./a.out
```

## Result of Execution on the Terminal (MacOS example):

```terminal
reinier@reinier % ./your_prefered_executable_file_name
Please type the name of the movie: Andar La Habana
How many adult tickets were sold? 456
How many child tickets were sold? 123
Movie Name:                 “Andar La Habana“
Adult Tickets Sold:                       456
Child Tickets Sold:                       123
Gross Box Office Profit:           $ 5,298.00
Net Box Office Profit:             $ 1,059.60
Amount Paid to Distribuitor:       $ 4,238.40
reinier@reinier % 
```

### Author

**Reinier Garcia**

* [Github](https://github.com/reymillenium)
* [Twitter](https://twitter.com/ReinierGarciaR)
* [Linkedin](https://www.linkedin.com/in/reiniergarcia/)
* [Website](https://www.reiniergarcia.dev/)
* [Stack Overflow](https://stackoverflow.com/users/9616949/reinier-garcia)

### License

Copyright © 2024, [Reinier Garcia](https://github.com/reymillenium).


