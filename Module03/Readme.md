# Module 03 Live Session


## Questions
* When you lose the pointer to memory during a memory leak, how do you free up the memory? - 



## Memory Leak
Short answer - you don't. The OS can try to claim memory, but often waits until the program is closed! 

Which is why free'ing memory from the heap is important / keeping track of your pointers is on the programmer. 