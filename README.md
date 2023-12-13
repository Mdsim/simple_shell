0x16. C - Simple Shell

Simple Shell Project.

A shell is a command-line interface that acts as an intermediary between a user and an operating system.
It's primary function is to interpret and execute user command.


Requirements:
The followings arfe the requirements for the creation of this project.
- Create a header(.h) file
- Create a function that displays the prompt
- Create a function that accepts user input
- Create a function that execute command
- Create an entry point/ main.c file.


Step by step process involved in shell creation:
- Display the prompt
- Read user input with Fgets()
- Parsing the command (splitting the input into token)
- Search for command path
- Create a child process ID using Fork()
- Execute the command by using execve function
- Wait for command completion (wait)
- Display the output
- Return to prompt
- Exit the shell.
