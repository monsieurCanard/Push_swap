![banner](https://github.com/monsieurCanard/monsieurCanard/blob/main/covers/cover-.png?raw=true)

## Description

The aim of the project is to develop an sorting algorithm with a limited set of operations.
We only have use only two stacks and 4 differents moves like push, swap, rotate, reverse rotate.
My algorithm is quite simple :
-Count each move necessary to place each number in the right position.
-Compare and choose the cheapest one
-Place the chosen one

## Usage

```
git clone https://github.com/monsieurCanard/Push_swap.git
```

```
./push_swap "number1, number2, number3, ..."
```
or
```
./push_swap number1 number2 number3 ...
```

## Bonus part

The bonus part consists of coding a checker that we can use for check the return of push_swap programme.
It takes the return of the push_swap program, applies it and checks if the final stack is sorted or not.  

# Usage
```
arg="number1, number2"; ./push_swap $arg | ./checker $arg
```
If it returns OK, your stack is sorted.
