
![PushSwap](https://github.com/user-attachments/assets/22478562-10ef-45eb-ac47-2463ef3988f3)
# Push_swap

An algorithmic C project that sorts a stack of integers using a limited set of operations, aiming to minimize the number of moves. Includes a bonus **checker** utility to validate operation sequences.

## Project Structure

- `push_swap` – Main program: determines and prints the shortest sequence of operations to sort stack A.
- `checker` (bonus) – Reads a sequence of operations from stdin, applies them to the provided stack, and checks if the result is sorted.
- `Makefile` – Controls compilation with targets:
  - `all`, `clean`, `fclean`, `re` (mandatory)
  - `bonus` for building the checker and any additional headers/modules
- Source files (`*.c`, `*.h`) – Modularized design, no global variables, strict memory handling.

## Usage

```bash
# Clone the repository
git clone https://github.com/monsieurCanard/Push_swap
cd push_swap

# Build the main program
make

# Example sorting
./push_swap 4 67 3 87 23
# Outputs a sequence of operations to stdout

# Build bonus checker
make bonus

# Validate outputs
ARG="4 67 3 87 23"
./push_swap $ARG | ./checker $ARG
# Output: OK (if sorting is correct)
