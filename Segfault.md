# Segfaults. We hate them...

## Definiton:
In computing, a segmentation fault (often shortened to segfault) or access violation is a failure condition raised by hardware with memory protection, notifying an operating system (OS) that the software has attempted to access a restricted area of memory (a memory access violation). On standard x86 computers, this is a form of general protection fault. The operating system kernel will, in response, usually perform some corrective action, generally passing the fault on to the offending process by sending the process a signal. Processes can in some cases install a custom signal handler, allowing them to recover on their own, but otherwise the OS default signal handler is used, generally causing abnormal termination of the process (a program crash), and sometimes a core dump.
([Source](https://en.wikipedia.org/wiki/Segmentation_fault)).

## Note:
This definition was purely for educational purposes, you can stop here if you don't hate Segfaults :nerd_face:. I am writing this with the intention of expressing my hate for this error, that made my hair go white.

## Why I hate it :rage::
1. It can be caused from basically everything if you are not paying attention when working with dinamically allocated memory. You didn't free? Segfault. You did free? Maybe Segfault. You allocated bad? Segfault. You allocated in the first place? Your chances of Segfaults are at 90%.
1. It can take time to repair...when a C or C++ program segfaults, the terminal typically spits out just a few unhelpful words: Segmentation fault (core dumped). There is no context, no line number, and no immediate clue as to what went wrong. You are entirely on your own to figure out where the crash happened. Just you and Valgrind...
1. Because segfaults are intimately tied to exactly how a program is laid out in the computer's physical RAM, attempting to debug them can inadvertently change their behavior.
If you add a simple print statement to try and track down where the code is failing, you alter the size of the compiled program and shift its memory layout. Suddenly, the segfault might move to a completely different part of the program, or it might vanish entirely—only to return the moment you remove your debugging code.

## How do I solve Segfaults?
Well...there could be light after dark after all, your heroes are:
- **Valgrind**:
	- Run with:
	``bash
	valgrind <your_object_file>
	``
- **GDB**:
	1. First, you have to compile your code with:
	```bash
	gcc ... -g ...
	```
	2. After that, you have to run it with:
	```bash
	gdb <object_file>
	```

### So, to end it on a funny note:
![Segfault Meme](https://i.programmerhumor.io/2025/07/39f9ce344066838d5f3d50da0abb33e99369f9f71afa6320a1d34ca6d8b016c5.png)