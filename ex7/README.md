# Blocking vs Non-Blocking function comparison

#### The main difference between blocking and non blocking code is that when
#### the compiler is parsing through a block of code that is blocking, all 
#### other functions and processes of the cpu will be halted until either 
#### the current block of code runs successfully and the next process is
#### initiated or unless the current block allows continuation of other
#### code without completion of the current block, or asynchronously.
