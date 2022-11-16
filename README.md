![Points badge](../../blob/badges/.github/badges/points.svg)

> **Late Days:** I am using 0 late days

# Assignment 13:  Introduction to Linked Lists and the Priority Queue

Original assignment written by Ashley Erickson.  
(C) 2021 Ashley Erickson

>**IMPORTANT!**
> Be sure to read and follow these instructions very carefully!
> These instructions contain hints and useful, required information needed
> to successfully complete the assignment!

**Why this Assignment Matters:**

Being able to effectively store and manage data in memory is crucial to programming.
Pointers and nodes in dynamic memory form the building blocks of data structures 
such as linked lists, stacks, queues, and trees, allowing programmers to store
and manipulate data in unique ways.  If you take a data structures course in the future,
you will learn much much more about
how we can build and manipulate data using nodes, pointers and dynamic memory.
This assignment provides a brief introduction.


In this assignment, we will first practice implementing linked lists in the linked
list sandbox problems, and then we will implement a data structure called a 
priority queue.  A priority queue is a very important data structure commonly used
to keep a sorted list of data in some order of priority.  In the case of this assignment,
the priority queue is set up with priority based on the value of the data in a node.
When nodes are added to the list, the nodes are inserted in increasing order.
The smallest value node is inserted first, followed by all nodes in increasing order.

Imagine a situation such as an emergency room in a hospital, where patients are
seen in order of priority (severity of illness), and not necessarily in the 
order that they arrived.
Or, in a manufacturing line, where certain product builds may be expedited over 
others.  Or, in a computer, where tasks are placed in 
a to do list based on priority.  In many of these real-world applications, 
a priority queue is
used to ensure that the highest priority items are processed first, and the lower
priority items processed afterward.  The priority queue you implement in part 2
of this assignment is very similar to one used in these applications.

A crucial part of programming is learning to carefully follow instructions
and pay attention to detail!   You will also practice these skills
as **this assignment requires that you follow these instructions
exactly.**



## Your tasks for this assignment
> 1. Complete the Linked List Sandbox questions. You will need to update
> the function definitions and answer questions in LinkListProblems.cpp.  **Note that you should only
> add comments or function definitions where indicated in LinkListProblems.cpp.**  
> **Do  not modify the main function in LinkListProblems.cpp.**
> 2. Carefully review the instructions for the Priority Queue program.
> 3. Add precondition and postcondition comments to the functions in PriorityQueue.h.
> Make sure your precondition specifies the initial conditions required before your function
> is called and the postcondition specifies the result after the function is called.
> 4. Complete the function definitions in PriorityQueue.cpp per the
> instructions provided.  **Do not modify PriorityQueue.h or PriorityQueueMain.cpp
> otherwise your program may not grade correctly.**
> 5. Be sure that you have completed all parts of this assignment  and that
> your preconditions and postconditions are correctly written for all functions
> in PriorityQueue.h before submitting.

15 points will be autograded, with the remaining 5 points given by Prof. Erickson
for correctly answering the question in LinkListProblems.cpp Part 1,
for writing clear preconditions and postconditions in PriorityQueue.h
and for following the good coding practices
listed in the rubric and discussed in class.

**Grading rubric (20 points possible)**

| Points | Requirements |
|----------|----------|
|1|LinkListProblems.cpp Part 1 question answered correctly (manually graded).
|1|LinkListProblems.cpp Part 2 function defined correctly (autograded).
|1|LinkListProblems.cpp Part 3 function defined correctly (autograded).
|1|LinkListProblems.cpp Part 4 function defined correctly (autograded).
|1|LinkListProblems.cpp Part 5 function defined correctly (autograded).
|1|Priority Queue Size function defined correctly  (autograded).
|3|Priority Queue Enqueue function defined correctly to insert nodes in the middle of list  (autograded).
|3|Priority Queue Enqueue function defined correctly to insert nodes in the back of list  (autograded).
|4|Priority Queue properly passes "stress test" inserting random numbers in correct order  (autograded).
|2|Clear preconditions and postconditions written for PriorityQueue.h (manually graded)
|2|Good coding practices followed for all parts, including: self-commenting variable names, one statement per line, no more than 80 characters per line, properly indenting inside braces/loops/if statements, and including descriptive comments explaining changes with each commit and push to GitHub (manually graded).


# Part 1: Linked List Sandbox

Part 1 of this assignment is some practice questions on linked lists.
Be sure to complete all the parts in the file "LinkListProblems.cpp".
**For this part, you will be modifying the function definitions in "LinkListProblems.cpp".
Make sure you only make changes where indicated in the function definitions.  Do not change the main function or other
sections, otherwise the program will not grade correctly.**

# Linked List Sandbox Functions: Part 1

The Part1 function of the Linked List Sandbox has the following preconditions and postconditions:

```c++
void Part1(Node* headptr);
//Precondition: Node struct is declared, Node type pointer headptr is declared
//Postcondition: initializes local headptr to point at a node containing value = 42
//and next pointing to null.
```

And the below code is given to you for the Part1 function:

```c++
void Part1(Node* headptr) {

    headptr = new Node;
    headptr->value = 42;
    headptr->next = nullptr;

    //For part 1, answer the following question:
    //Why is head still pointing to null after the Part1 function is called?
    //(hint: compare the arguments and preconditions+postconditions for Part1 and Part2)

    //write your answer for Part1 here

}
```

Your task for Part 1 is to answer the question where indicated, in the LinkListProblems.cpp file.
Write your answer to the question as a comment in the Part1 function of
LinkListProblems.cpp.  (Make sure you put your answer in LinkListProblems.cpp, 
as a comment in the Part1 definition, otherwise your answer will not be graded.
Do not write your answer to the question here in the ReadMe.)


# Linked List Sandbox Functions: Part 2

The Part2 function of the Linked List Sandbox has the following 
preconditions and postconditions:

```c++
void Part2(Node*& headptr);
//Precondition: Node struct is declared, Node type pointer headptr is declared
//Postcondition: initializes headptr to point at a node containing value = 42
//and next pointing to null (uses pass by reference).

```

Your task for Part2 is to write a definition for this function where indicated
in the Part2 function definition of LinkListProblems.cpp.

If you have correctly defined the function, you should see the below
result for Part 2 when you run the "LinkList_Problems.cpp" program:


![img_6.png](Readme%20images/img_6.png)



(Notice that your function does not need to output these results.
The cout statements and PrintList function is called in main to show the result after
Part2 is called).


# Linked List Sandbox Functions: Part 3

The Part3 function of the Linked List Sandbox has the following
preconditions and postconditions:

```c++
void Part3(Node*& list1head);
//Precondition: Node struct is declared, Node type pointer list1head is declared
//Postcondition: initializes list1head to contain two nodes containing 1 and 2
//and the second node's next pointing to null (uses pass by reference).
```


Your task for Part3 is to write a definition for this function where indicated
in the Part3 function definition of LinkListProblems.cpp.

If you have correctly defined the function, you should see the below
result for Part 3 when you run the "LinkList_Problems.cpp" program:

![img_9.png](Readme%20images/img_9.png)


(Notice that your function does not need to output these results.
The cout statements and PrintList function is called in main to show the result after
Part3 is called).

# Linked List Sandbox Functions: Part 4

The Part4 function of the Linked List Sandbox has the following
preconditions and postconditions:

```c++
void Part4(Node*& list2head);
//Precondition: Node struct is declared, Node type pointer list2head is declared
//Postcondition: initializes list2head to contain two nodes containing 3 and 4
//and the second node's next pointing to null (uses pass by reference).
```


Your task for Part4 is to write a definition for this function where indicated
in the Part4 function definition of LinkListProblems.cpp.

If you have correctly defined the function, you should see the below
result for Part 4 when you run the "LinkList_Problems.cpp" program:

![img_8.png](Readme%20images/img_8.png)


(Notice that your function does not need to output these results.
The cout statements and PrintList function is called in main to show the result after
Part4 is called).

# Linked List Sandbox Functions: Part 5

The Part5 function of the Linked List Sandbox has the following
preconditions and postconditions:


The Part5 function should update the nodes of list1 and list2 to be like below.
You can either rearrange the existing nodes or update the values of the nodes
directly using the arrow operator so that they match the below result:


![img_5.png](Readme%20images/img_5.png)


If you have correctly defined the function, you should see the below
result for Part 5 when you run the "LinkList_Problems.cpp" program:

![img_7.png](Readme%20images/img_7.png)


(Notice that your function does not need to output these results.
The cout statements and PrintList function is called in main to show the result after
Part5 is called).

# Full output of Linked List Sandbox

If your Part2-Part5 functions are correctly defined, you should see
the below output when running LinkList_Problems.cpp.
Remember, the functions themselves do not output any data to the screen.
The main function contains code to output the results after each function is called.


![img_10.png](Readme%20images/img_10.png)



# Part 2: Implementing a Priority Queue

In class, we will discuss two data structures that we can make with linked lists: stacks and queues.  
Recall that a queue is a first-in/first-out data structure, meaning that items 
are removed in the same order in which they were added to our queue.


However, there are times in engineering and data analysis when we don’t necessarily want to process 
data in the order it is received.  For example, consider the emergency room at a hospital.  
Just because you arrived first doesn’t necessarily mean you will be seen first.  
Patients are typically seen in order of priority, or severity of illness.  
Another example is process management on a computer.  The order that your 
processes are run on your computer (in the Task Manager) is also handled using a 
priority queue.


In C++, one way we can modify the queue structure is to insert or remove values based on some priority value.  
For example, rather than adding a value to the end of the queue, we can insert it into the 
linked list based on some value.  As shown below, this “priority” queue would allow us to insert a value 
into the appropriate position in the linked list.  Below, the regular queue would insert the value 
in the order it is received.  However, we can also make a priority queue to insert the value into the 
linked list based on its value.  Here, the priority queue allows us to insert our numbers so that they are 
kept in ascending order (smallest value at the front).

![img_11.png](Readme%20images/img_11.png)

 
Your task is to complete a program which will randomly generate 10 numbers, 
use a priority queue to order the numbers, and then output the ordered results.
As a starting point, you are provided with the PriorityQueue class (see .h file provided) and a main function 
containing the random number generator and function calls.
Your task is to write the definitions for the PriorityQueue constructor, deconstructor, and functions listed below.  
Then, run your program and make sure it is able to sort the random numbers in the order provided. 

**Deliverables for the Part 2: Priority Queue program**
1. Add function preconditions and postconditions to the PriorityQueue class header file.
2. Update the PriorityQueue.cpp implementation file with the definitions for the PriorityQueue constructor, 
   deconstructor, and the Enqueue, Dequeue, and Size functions.
3.  Using the main() function provided, verify that you are able to produce 
    the sample outputs shown on the following page (you should be able to put 
    10 random numbers in order using your program).
    

> **Hints and milestones**
> 
> You are provided with the PriorityQueue.h class and a main function.
> You need to complete the PriorityQueue.cpp file containing the function 
> definitions for the PriorityQueue class.
> 
> Below are descriptions of what each function should do.
> Read these instructions carefully to ensure your functions work correctly.
>   Remember, drawing pictures is incredibly helpful when working with linked lists.
    

#Descriptions of PriorityQueue functions

# PriorityQueue::PriorityQueue()
This is a constructor to make PriorityQueue objects. 
You should use this constructor to create a new PriorityQueue and initialize 
the values of head and length to known values.  

Based on what we discussed in class, what should the head initially point to if our list is empty?  
What should be the starting length of our linked list be when we initialize an empty list?

Your constructor should initialize the private variables of the PriorityQueue object accordingly.

# PriorityQueue::~PriorityQueue()
This is a destructor.  The destructor should delete all dynamically allocated memory 
(anytime you used the new operator).  
In this case, the destructor should remove every single node in the priority queue.  
You will need to use a temp variable to avoid losing your place in the linked list while deleting nodes.

Remember, in lecture we discussed an example destructor which would delete nodes 
one at a time from a list using a cleverly designed for loop and a temp pointer.
A similar approach can be used in this destructor.

# int PriorityQueue::Dequeue()
Dequeue is the term commonly used when we are outputting data from the head or beginning of the queue.
This Dequeue function returns the first value in the priority queue and removes it from the queue.  
The value of this first node is returned as an int value.

Here is some pseudocode to help write this function:

Pseudocode:   
Exit if the linked list is empty

If the linked list is not empty, perform the following: 

    Save the value of the first node to an int variable 
    Declare a temporary pointer to store the memory address of head
    Make the second node of the pointer the new head
    Delete the temporary pointer
    Return the value of the first node

# void PriorityQueue::Enqueue(int valueToInsert)
Enqueue is the term commonly used when we are inputting data into our queue.  
This function takes an int value as its argument.  
Then, the function creates a node containing the int value to insert,  
and the node is then inserted into the Priority queue.  


The location where the node is inserted depends on the value being inserted.  
Normally data in a queue is added to the end of the linked list.   
But in the case of our priority queue, we want to add data based on the value of the int valueToInsert.   

We must define our function so that our priority queue nodes are inserted so that
the queue's nodes are always kept in increasing order.  The smallest values are stored at the front or beginning of the linked list, 
and the largest values are stored at the end.  Here is a figure illustrating what is happening.  
Explanation and pseudocode follows.

![img_12.png](Readme%20images/img_12.png)


Pseudocode:

Create a new Node called nodeToInsert.  
Take the valueToInsert provided in the function argument and set the data in the nodeToInsert to that value.
(in the figure above, nodeToInsert’s value is set to 25).  Set nodeToInsert’s pointer to null.

If the Priority queue is empty, 

    nodeToInsert should be made the first item in the priority queue.  Increment length.

Otherwise, perform the following:

    Declare pointers to track the current and previous location while stepping through the linked list.:
    While the current pointer is not pointing to null, 
        keep searching and increment the pointers until we find the node where 
        the data is greater than the value to insert.  
        End the loop with current pointer now pointing to the location where nodeToInsert should be inserted.
    After you determine where to insert the node, there are three cases you need to consider:
        1. If the value to insert needs to go at the beginning, insert nodeToInsert at the beginning and 
        update the head pointer accordingly.  Be sure to follow the good practices discussed in class.
        2. If the value to insert needs to go in the middle of the list, insert nodeToInsert in the middle following the 
        good practices discussed in class.
        3. If the value to insert needs to go at the end, insert nodeToInsert in the end of the queue following
        the good practices discussed in class.  Remember the last node's pointer should always point to null.
    When finished inserting the node, remember to increment the length to keep track of the number of nodes correctly. 

Here is a figure showing an edge case when nodeToInsert should go in the beginning:

![img_13.png](Readme%20images/img_13.png)
 

Be sure to also account for the third edge case where nodeToInsert should go at the end of the list.
The pointer head should always point to the first node, and the last node's pointer
must always point to null.  Otherwise, the priority queue's functions may not work properly.

#int PriorityQueue::Size()
This function should return the value of length, a private variable stored in the PriorityQueue class.  
You just need one line of code.



# Sample Output for Working Priority Queue's Main function

You can check your Priority Queue output by running the Basic_PriorityQueue_Test
which runs the main function.  You can also run the PriorityQueue_Tests to run the
autograder's tests and view error messages.

If you have implemented the program correctly, you should see an output like shown.
(note: these are random numbers so your output will vary,
but the random numbers should be put in ascending order)

Be especially careful of edge cases such as cases when nodes need to be added
to the beginning or end of the list or to an empty list.  Sometimes edge case errors are not 
immediately visible in the test program below.  The autograder's PriorityQueueTests
can catch edge case errors which are not easily detected in the Basic tests.


![img_14.png](Readme%20images/img_14.png)





#Verifying you are finished with this assignment

If your Assignment 13 shows 15/15 in GitHub, then you have
successfully passed all the autograded tests and your code is correct.
**Be sure to review the rubric and make sure that you have completed all
parts of the assignment, including answering the Part1 question,
writing preconditions and postconditions, use of good coding practices and
including your push and commit comments for all parts.**

If you are having trouble, be sure to reach out for help from Prof. Erickson
in order to complete the remaining sections and receive credit
for this assignment.  Remember, you are allowed unlimited attempts before the deadline, so
you may edit and resubmit as many times as you need
before the due date.

**Academic Integrity and Copyright Reminder**

Be reminded that programming assignments you submit must be your own
original work.  Copying code off the internet, copying code from others,
or allowing someone else to copy
your code is a violation of the Academic Integrity policy.  Violations will
result in a zero grade on the assignment for all involved.

You may discuss ideas and concepts with classmates but never
share your code with others.  That way, each student writes up
their own solutions independently and there is no risk of copying.
You are expected to take reasonable precautions to avoid sharing
or allowing others to copy your work without your knowledge.

If you or a classmate is having difficulty with this assignment,
you are welcomed and encouraged to ask for help via help hours,
our online Q&A (Slack/Discord)
or email Prof. Erickson.  Campus tutoring resources are also available.
Be reminded that your submission must be your own original work.
Having someone else "walk you through" the assignment or copying
someone else's work is prohibited per academic integrity rules.

Be aware that Prof. Erickson holds the copyright to this assignment.
Posting this assignment online without prior written authorization from
Prof. Erickson is prohibited and is considered an academic integrity
violation. 

 
