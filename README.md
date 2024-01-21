# BINARY-TREES
THIS IS A PREORDER TRAVERSING FORMAT OF A BINARY TREE!
🌿🔮

**Description:**
This C program represents a binary tree and demonstrates the pre-order traversal algorithm. The code utilizes structures to define tree nodes, each containing information ('data'), a pointer to the left child ('left'), and a pointer to the right child ('right'). The main function creates nodes and establishes connections to form a binary tree. The heart of the program lies in the preorder function, showcasing the pre-order traversal technique, printing the elements in the order of ROOT -> LEFT -> RIGHT.

**Instructions:**
**Compilation:**

Ensure you have a C compiler installed (e.g., GCC).
Open a terminal and navigate to the directory containing the code.
Compile the code using the command: gcc filename.c -o output_name (replace filename.c with your code file and output_name with a preferred executable name).
Execution:

Run the compiled executable using: ./output_name.
Example Data:
The program includes an example with given data:

Root: 30
Left Child: 10
Right Child: 25
Left Child: 18
Right Child: 23
Right Child: 27
Right Child: 70
Left Child: 60
Right Child: 80

**Binary Tree Representation:**

          30
         /  \
       10    70
          \   / \
          25 60  80
         / \
        18  27
           /
          23
**Code Structure:**

_createnode function:_ Allocates memory for a new tree node and initializes its data, left, and right pointers.

_preorder function:_ Implements pre-order traversal, printing each node's data.

**How to Contribute:**
Fork the repository.
Clone the forked repository to your local machine.
Make your modifications or improvements.
Create a new branch for your changes.
Push the branch to your forked repository.
Open a pull request to merge your changes into the main branch.
Feel free to explore and enhance the code. Happy coding!
