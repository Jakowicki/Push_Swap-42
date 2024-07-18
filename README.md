Push Swap 42 📚
=
Welcome to the Push Swap Project! This project is an implementation of the push_swap sorting algorithm, specifically designed to sort a stack of integers using a set of predefined operations. In this project, I have employed the K-sort algorithm to efficiently sort the stack. The objective is to sort the stack with the fewest number of operations, making it both an intriguing and challenging problem.

Table of Contents 📑
-
Introduction
K-sort Algorithm
Setup and Installation
Usage
Main Steps
Operations
Contributing
License

Introduction 📖
-
The Push Swap Project involves sorting a stack of integers using a limited set of operations. The operations are performed on two stacks: stack a and stack b. The goal is to sort stack a in ascending order using the least number of operations. This project is typically used as an exercise in algorithm optimization and problem-solving skills.

K-sort Algorithm 🧠
-
The K-sort algorithm is a modified sorting algorithm that is particularly efficient for sorting smaller datasets. In the context of the Push Swap Project, the K-sort algorithm helps minimize the number of operations required to sort the stack.

Setup and Installation ⚙️
-
Clone the repository:
sh
Copy code
git clone (https://github.com/Jakowicki/Push_Swap-42.git)
Navigate to the project directory:
sh
Copy code
cd push_swap
Compile the project:
sh
Copy code
make


Usage 🚀
-
To run the push_swap program, use the following command:

sh
Copy code
./push_swap <list_of_integers>
Example:

sh
Copy code
./push_swap 3 2 5 1 4
To verify the output, you can use the checker program:

sh
Copy code
./checker <list_of_integers>
Example:

sh
Copy code
./checker 3 2 5 1 4



Main Steps 🛠️
-
Initialization: Parse the input and initialize the stacks a and b.


K-sorting:
-
Determine the chunk size K based on the size of the input.
Divide the stack into chunks of size K.
Sort each chunk using the most optimal method.
Push the sorted chunks to stack b.
Merging:

Merge the sorted chunks from stack b back into stack a in the correct order.
Final Adjustments:

Ensure stack a is fully sorted.
Perform any necessary rotations to achieve the final sorted order.


Operations 🔄
-
The available operations for sorting the stacks are:

sa: Swap the first two elements at the top of stack a.
sb: Swap the first two elements at the top of stack b.
ss: sa and sb at the same time.
pa: Push the top element from stack b to stack a.
pb: Push the top element from stack a to stack b.
ra: Rotate stack a up by one.
rb: Rotate stack b up by one.
rr: ra and rb at the same time.
rra: Rotate stack a down by one.
rrb: Rotate stack b down by one.
rrr: rra and rrb at the same time.


Contributing 🤝
-
Contributions are welcome! If you have any suggestions, bug reports, or feature requests, please open an issue or submit a pull request. Make sure to follow the coding standards and include appropriate tests.

License 📜
-
This project is licensed under the MIT License. See the LICENSE file for details.

Thank you for checking out the Push Swap Project! Happy sorting! 🎉
