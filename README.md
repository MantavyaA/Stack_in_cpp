# Stack_in_cpp

# Theory

A **stack** is a linear data structure that follows the **LIFO (Last In, First Out)** principle.  
This means that the last element inserted into the stack is the first one to be removed.  

In a stack, all insertions and deletions happen at one end, called the top. There is also a pointer, often called the top pointer, which keeps track of the current topmost element. If an attempt is made to push an element into a full stack, it results in stack overflow, whereas trying to pop an element from an empty stack results in stack underflow. Stacks are essential in many real-world applications such as function call management in programming languages (call stack), undo/redo operations in text editors, expression evaluation in compilers, and backtracking algorithms. By organizing data in this manner, stacks provide a controlled and efficient way to manage temporary data, ensuring that operations are performed in a structured sequence.

---

## Key Operations

### Push
- Inserts an element into the stack at the **top**.  
- If the stack is already full (maximum capacity), **stack overflow** occurs.  

### Pop
- Removes the **topmost element** from the stack.  
- If the stack is empty, **stack underflow** occurs.  

---

## Characteristics of Stack
- **Linear Data Structure:** Elements are arranged sequentially.  
- **LIFO Principle:** Most recently added element is removed first.  
- **Top Pointer:** Keeps track of the current topmost element.  
- **Fixed Size:** When using arrays, the stack has a maximum capacity.  

---

## Applications of Stack
- **Function Call Management:** The call stack manages function calls and returns.  
- **Expression Evaluation:** Conversion and evaluation of infix, postfix, and prefix expressions.  
- **Undo/Redo Operations:** Text editors and graphics software use stacks to store previous states.  
- **Memory Management:** Stack memory stores local variables and function call information.  
- **Backtracking Algorithms:** Maze solving, recursion, and parsing algorithms.  

---

## Algorithm

### Push Operation
1. Start.  
2. Check if the stack is full (`top >= MAX - 1`):  
   - If yes, display `"Stack Overflow"` and stop.  
3. Increment `top` by 1.  
4. Insert the new element at `arr[top]`.  
5. Display a message indicating the element is pushed successfully.  
6. Stop.  

### Pop Operation
1. Start.  
2. Check if the stack is empty (`top < 0`):  
   - If yes, display `"Stack Underflow"` and stop.  
3. Display the element at `arr[top]` being removed.  
4. Decrement `top` by 1.  
5. Stop.  

---

## Conclusion
The experiment successfully demonstrates the **stack data structure** and its **LIFO behavior**.  

- The **push** operation adds elements to the top of the stack, while the **pop** operation removes the topmost element.  
- **Overflow** and **underflow** conditions were properly handled, emphasizing the importance of boundary checks.  
- Stacks are fundamental in programming and applications such as function call management, expression evaluation, memory management, and algorithm design.  
- Using arrays, stacks can be efficiently implemented with a fixed-size memory allocation, suitable for scenarios where the maximum number of elements is known.
