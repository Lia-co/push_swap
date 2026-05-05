*This project has been created as part of the 42 curriculum by <sliang>, <samudgal>*

# Description
## 🎯 Goal of this project
The Push swap project is a very simple and highly straightforward algorithm project:
data must be sorted. The goal is to write a C program called push_swap which calculates and displays how many operations for sorting, and the integers received as arguments.</br>
What students can do with? A set of integer values, 2 stacks, and a set of operations to
manipulate both stacks.</br>

## 💡 Overview
- Group project. This project is a group project completed by 2 learners working together. Both learners must contribute meaningfully to the project and understand all implemented algorithms.</br>
- Rules. 
	1. There are two stacks name a and b. The stack a contains a random amount of negative and/or positive numbers without any duplicate. The stack b is empty.</br>
	2. There are 11 operations to sort data.</br>

	| Code  | Instruction                         | Action                                                 |
	| ----- | ----------------------------------- | ------------------------------------------------------ |
	| `sa`  | swap a                              | swaps the 2 top elements of stack a                    |
	| `sb`  | swap b                              | swaps the 2 top elements of stack b                    |
	| `ss`  | swap a + swap b                     | both `sa` and `sb`                                     |
	| `pa`  | push a                              | moves the top element of stack b at the top of stack a |
	| `pb`  | push b                              | moves the top element of stack a at the top of stack b |
	| `ra`  | rotate a                            | shifts all elements of stack a from bottom to top      |
	| `rb`  | rotate b                            | shifts all elements of stack b from bottom to top      |
	| `rr`  | rotate a + rotate b                 | both `ra` and `rb`                                     |
	| `rra` | reverse rotate a                    | shifts all elements of stack a from top to bottom      |
	| `rrb` | reverse rotate b                    | shifts all elements of stack b from top to bottom      |
	| `rrr` | reverse rotate a + reverse rotate b | both `rra` and `rrb`                                   |

	3. Algorithm requirements. There are 4 distinct sorting strategies must be implemented. Based on disorder metric (between 0% to 100%), the program will 

# Logic of resolving this project
This section explains how this program is processed step by step. </br>
1. Error checking if passed arguments and flags with correct format.
- if passing mix string and integer --> error
- if passing duplicate values --> error
- if passing integers with double quotation as a str --> split function.
- if passing input as a variable number of command line arguments --> convert them into linked list. 
- flags
- bench mode

2. Convert arguments as intergers and assign linked list stack a, which containing all values; an empty stack b. 
3. Calculate disorder metric of stack a and choose suitable algorithms
4. Clean stack 
