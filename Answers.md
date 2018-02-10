1.
 The possible address apce ranges for reach process will both fall between 0-64 000; Address ranges for a process are actually constrained to specific range, rather the process can access individual memory blocks independent of location.

2.
  Created - Process has been created and exists in a state prior to proper scheduling
  Ready | Idle | Waiting - The process is marked as ready when it has been succesfully loaded into memory and ready but not yet executed by the cpu.
  Running - The process has been executed by the CPU
  Blocked - A blocked process requires an Authoritorive action to continue, it can be anything a process expects usually externally requirements like user input, waiting for file to exist, etc. 
  Terminated - A terminated process is one that has been killed by the CPU.

3. printf < write


4. The reason printf runs faster than write is because it a top level library function while write is 
system level call which is extremely expensive.
