
![PushSwap](https://github.com/user-attachments/assets/22478562-10ef-45eb-ac47-2463ef3988f3)

## Description

The aim of the project is to develop an sorting algorithm with a limited set of operations.
We only have use only two stacks and 4 differents moves like push, swap, rotate, reverse rotate.<br>
My algorithm is quite simple : <br> <br>
-Count each move necessary to place each number in the right position.<br><br>
-Compare and choose the cheapest one <br><br>
-Place the chosen one <br><br>

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

### Bonus usage
```
arg="number1, number2"; ./push_swap $arg | ./checker $arg
```
If it returns OK, your stack is sorted.
