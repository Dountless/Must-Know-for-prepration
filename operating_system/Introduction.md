
# Overview of OS

An operating system acts as an intermediary between the user of a computer and the computer hardware. The purpose of an operating system is to provide an environment in which a user can execute programs in a convenient and efficient manner.

# Introduction 
An is a program that manages the computer hardware. It also provides a basis for application programs and acts as an intermediary between the computer user and the computer hardware. 

- An operating system is similar to a government. Like a government, it performs no useful function by itself. It simply provides an environment within which other programs can do useful work.


- To understand the Operating system of two view point..
    -  that of the user and that of the system.

    ### User View
    -  The user's view of the computer varies according to the interface being used. Most computer users sit in front of a PC, consisting of a monitor/ keyboard/ mouse, and system unit. Such a system is designed for one user to monopolize its resources.
    -  `resource utilization` - how various hardware and software resources are shared. Performance is, of course, important to the user;
    - In other cases, a user sits at a terminal connected to a or a Other users are accessing the sance computer through other terminals. These users share resources and may exchange information. The operating system in S"Llclc cases is designed to maximize resource utilization- to assure that all available CPU time, memory, and I/0 are used efficiently and that no individual user takes more than her fair share.

    ### System View
    - From the computer's point of view, the operating system is the program most intimately involved with the hardware.
    - A computer system has many resources that may be required to solve a problem: CPU time, memory space, file-storage space, I/0 devices, and so on. The operating system acts as the manager of these resources. Facing numerous and possibly conflicting requests for resources, the operating system must decide how to allocate them to specific programs and users so that it can operate the computer system efficiently and fairly. 
   
[![IMAGE of os](https://media.geeksforgeeks.org/wp-content/uploads/os.png)](https://www.youtube.com/watch?v=YwqexcfbucE&list=PLmXKhU9FNesSFvj6gASuWmQd23Ul5omtD)

   
## STORAGE DEFINITIONS AND NOTATION
- A is the basic unit of computer storage. It can contain one of two values, zero and one.
- A is 8 bits, and on most computers it is the smallest convenient chunk of storage. For example, most computers don't have an instruction to move a bit but do have one to move a byte.
- A word is generally made up of one or more bytes. For example, a computer may have instructions to move 64-bit (8-byte) words.
- A kilobyte, or KB, is 1,024 bytes; a megabyte, or MB, is 1,0242 bytes; and a gigabyte, or GB, !s 1,0243 bytes. 

Toward this goal, computer hardware is constructed. Since bare hardware alone is not particularly easy to use, application programs are developed. These programs require certain common operations, such as those controlling the II0 devices. The common functions of controlling and allocating resources are then brought together into one piece of software: the operating system.




# computer-system organization

## Computer-System Operation

- For a computer to start rum<ing-for instance, when it is powered up or rebooted-it needs to have an initial program to run. This initial program, or  bootstrap program Typically, it is stored in read-only memory or electrically erasable programmable read-only memory known by the general term within the computer hardware. It initializes all aspects of the system, from CPU registers to device controllers to memory contents.
- The bootstrap program must know how to load the operating system and how to start executing that system. To accomplish this goal, the bootstrap program must locate and load into memory the operating- system kernel. The operating system then starts executing the first process, such as "init," and waits for some event to occur.
- The occurrence of an event is usually signaled by an from either the hardware or the software. Hardware may trigger an interrupt at any time by sending a signal to the CPU, usually by way of the system bus. Software may trigger an interrupt executing a special operation called a system call or monitor call When the CPU is interrupted, it stops what it is doing and immediately transfers execution.

## Storage Structure

- The CPU can load instructions only from memory, so any programs to run must be stored there.
- Main memory commonly is implemented in a semiconductor technology called dynamic random access memory.  (DRAM)
- All forms of memory provide an array of words. Each word has its own address. Interaction is achieved through a sequence of load or store instructions to specific memory addresses. The load instruction moves a word from main memory to an internal register within the CPU, whereas the store instruction moves the content of a register to main memory. Aside from explicit loads and stores, the CPU automatically loads instructions from main memory for execution.
- A typical instruction-execution cycle, as executed on a system with a von neumann  architecture, first fetches an instruction from memory and stores that instruction in the . The instruction is then decoded and may cause operands to be fetched from memory and stored in some internal register. After the instruction on the operands has been executed, the result may be stored back in memory.

## Q. Why we can not store data permanently in RAM ?
- Ideally, we want the programs and data to reside in main ncemory permanently. This arrangement usually is not possible for the following two reasons:


        Main memory is usually too small to store all needed programs and data permanently.
        Main memory is a volatile storage device that loses its contents when power is turned off or otherwise lost.

- Thus, most computer systems provide as an extension of main memory. The main requirement for secondary storage is that it be able to hold large quantities of data permanently.
- The most common secondary-storage device is a which provides storage for both programs and data. Most programs (system and application) are stored on a disk until they are loaded into memory.


``` A recent trend in CPU design is to in.clude multiple computing on a single chip. In essence, these are multiprocessor chips. They can be more efficient than multiple chips with single cores because on-chip communication is faster than between-chip communication. In addition, one chip with multiple cores uses significantly less power than multiple single-core chips. As a result, multicore systems are especially well suited for server systems such as database and Web servers. ```

## Clustered Systems

- Another type of multiple-CPU system is the Like multipro- cessor systems, clustered systems gather together multiple CPUs to accomplish computational work. Clustered systems differ from multiprocessor systems, however, in that they are composed of two or more individual systems-or nodes-joined together.
- The generally accepted definition is that clus- tered computers share storage and are closely linked via a local area network (LAN). or a faster interconnect.
- Clustering is usually used to provide service; that is, service will continue even if one or more systems in the cluster faiL High availability is generally obtained by adding a level of redundancy in the system. A layer of cluster software runs on the cluster nodes. Each node can monitor one or more of the others (over the LAN). If the monitored machine fails, the monitoring machine can take ownership of its storage and restart the applications that were running on the failed machine
- Clusterin.g can be structured assymmetrically or symmetrically. In assymmetrically one machine is in while the other is rmming the applications. The hot-standby host machine does nothing but monitor the active server. If that server fails, the hot-standby host becomes the active server. In symmetrically two or more hosts are rmming applications and are monitoring each other.

``` appli- cations must be written to take advantage of the cluster by using a technique known as which consists of dividing a program into separate components that run in parallel on individual computers in the cluster. Typically, these applications are designed so that once each computing node in the cluster has solved its portion of the problem, the results from all the nodes are combined into a final solution. ```
