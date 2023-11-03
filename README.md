Welcome to my binary tree project
i am Alone on top of the tree

          000 00  0 00
      00 0\/0\|0 ()|/ @, 00
      0\/(/0/0||/0 /_/)_0/_0
   0() 0\/0|()|/0\/ '%" 0 ()
  0_\_00_\ |0 |00/0__%_/_0 00
00   00 0 0| 0| /0 0 % ()0 /00
 ()0_---()0\0\|00-00--%---()~
     00     \|||      00
             |||
             |||
             |||
   _____ -=-~  .-^- ______
              `

# Binary Tree Project

A comprehensive guide to the Binary Tree project, including descriptions, functions, and usage instructions.

## Table of Contents

1. [Project Description](#project-description)
2. [Project Structure](#project-structure)
3. [Getting Started](#getting-started)
4. [How to Use](#how-to-use)
5. [Function Descriptions](#function-descriptions)
6. [Example Usage](#example-usage)
7. [Contributing](#contributing)
8. [License](#license)

## Project Description

This project is a collection of C functions for working with binary trees. It includes functions for creating, inserting, deleting, and checking properties of binary trees. The functions are designed to work with binary trees that are not necessarily binary search trees.

## Project Structure

- `binary_trees.h`: Header file containing data structures and function prototypes.
- `0-binary_tree_node.c`: Function to create a new binary tree node.
- `1-binary_tree_insert_left.c`: Function to insert a new node as the left child.
- `2-binary_tree_insert_right.c`: Function to insert a new node as the right child.
- `3-binary_tree_delete.c`: Function to delete an entire binary tree.
- `4-binary_tree_is_leaf.c`: Function to check if a node is a leaf.
- `binary_tree_print.c`: Visualization function (for debugging, not required).
- `main.c`: Sample main program for testing functions.

## Getting Started

To get started with this project, make sure you have the necessary tools and libraries installed:

- GCC compiler
- Ubuntu 20.04 LTS or equivalent Unix-based system

## How to Use

Follow these steps to compile and run the project:

1. Clone this repository to your local machine.
2. Open the terminal and navigate to the project directory.
3. Compile the project with the following command:

   ```bash
   gcc -Wall -Wextra -Werror -pedantic main.c 0-binary_tree_node.c 1-binary_tree_insert_left.c 2-binary_tree_insert_right.c 3-binary_tree_delete.c 4-binary_tree_is_leaf.c binary_tree_print.c -o binary_tree_project

# Binary Tree Project

A comprehensive guide to the Binary Tree project, including descriptions, functions, and usage instructions.

## Table of Contents

1. [Project Description](#project-description)
2. [Project Structure](#project-structure)
3. [Getting Started](#getting-started)
4. [How to Use](#how-to-use)
5. [Function Descriptions](#function-descriptions)
6. [Example Usage](#example-usage)
7. [Contributing](#contributing)
8. [License](#license)

## Project Description

This project is a collection of C functions for working with binary trees. It includes functions for creating, inserting, deleting, and checking properties of binary trees. The functions are designed to work with binary trees that are not necessarily binary search trees.

## Project Structure

- `binary_trees.h`: Header file containing data structures and function prototypes.
- `0-binary_tree_node.c`: Function to create a new binary tree node.
- `1-binary_tree_insert_left.c`: Function to insert a new node as the left child.
- `2-binary_tree_insert_right.c`: Function to insert a new node as the right child.
- `3-binary_tree_delete.c`: Function to delete an entire binary tree.
- `4-binary_tree_is_leaf.c`: Function to check if a node is a leaf.
- `binary_tree_print.c`: Visualization function (for debugging, not required).
- `main.c`: Sample main program for testing functions.

## Getting Started

To get started with this project, make sure you have the necessary tools and libraries installed:

- GCC compiler
- Ubuntu 20.04 LTS or equivalent Unix-based system

## How to Use

Follow these steps to compile and run the project:

1. Clone this repository to your local machine.
2. Open the terminal and navigate to the project directory.
3. Compile the project with the following command:

   ```bash
   gcc -Wall -Wextra -Werror -pedantic main.c 0-binary_tree_node.c 1-binary_tree_insert_left.c 2-binary_tree_insert_right.c 3-binary_tree_delete.c 4-binary_tree_is_leaf.c binary_tree_print.c -o binary_tree_project


Example Usage

#include <stdio.h>
#include "binary_trees.h"

int main(void) {
    binary_tree_t *root = binary_tree_node(NULL, 98);
    binary_tree_t *left = binary_tree_insert_left(root, 12);
    binary_tree_t *right = binary_tree_insert_right(root, 402);

    printf("Is root a leaf node? %d\n", binary_tree_is_leaf(root)); // Output: 0
    printf("Is left a leaf node? %d\n", binary_tree_is_leaf(left)); // Output: 1

    binary_tree_delete(root); // Cleanup memory

    return (0);
}

License
This project is licensed under ALX-AFRICA License.
