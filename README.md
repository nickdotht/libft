# Libft - jrameau @42Born2Code
My implementation of some of the Standard C Library functions including some additional ones.

### TOC
* [What is libft?](#what-is-libft)
* [What's in it?](#whats-in-it)
* [How does it work?](#how-does-it-work)
* [How do I use the library?](#how-do-i-use-the-library)

### What is libft?
[Libft][1] is an individual project at [42][2] that requires us to re-create some standard C library functions including some additional ones that can be used later to build a library of useful functions for the rest of the cursus.

Disclaimer: *Reinventing the wheel is bad, 42 makes us do this just so we can have a deeper understanding of data structures and basic algorithms. At 42 we're not allowed to use **some** standard libraries on our projects, so we have to keep growing this library with our own functions as we go farther in the cursus.*

### What's in it?

As you can see from the [Project instructions][1], there are 4 sections:

1.  **Libc Functions:** Some of the standard C functions
2.  **Additional functions:** Functions 42 deems will be useful for later projects
3.  **Bonus Functions:** Functions 42 deems will be useful for linked list manipulation
4.  **Personal Functions:** Functions I believe will be useful later

Libc functions | Additional functions | Bonus Functions | Personal Functions
:----------- | :-----------: | :-----------: | -----------:
memset		| ft_memalloc	| ft_lstnew		| ft_capitalize 
bzero		| ft_memdel		| ft_lstdelone	| ft_countwords 
memcpy		| ft_strnew		| ft_lstdel		| ft_islower    
memccpy		| ft_strdel		| ft_lstadd		| ft_isupper    
memmove		| ft_strclr		| ft_lstiter	| ft_strndup    
memchr		| ft_striter	| ft_lstmap		|
memcmp		| ft_striteri	|
strlen		| ft_strmap		|
strdup		| ft_strmapi	|
strcpy		| ft_strequ		|
strncpy		| ft_strnequ	|
strcat		| ft_strsub		|
strlcat		| ft_strjoin	|
strchr		| ft_strtrim	|
strrchr		| ft_strsplit	|
strstr		| ft_itoa		|
strnstr		| ft_putchar	|
strcmp		| ft_putstr		|
strncmp		| ft_putendl	|
atoi		| ft_putnbr		|
isalpha		| ft_putchar_fd	|
isdigit		| ft_putstr_fd	|
isalnum		| ft_putendl_fd	|
isascii		| ft_putnbr_fd	|
isprint		|
toupper		|
tolower		|


Notes:

- All the files and functions are namespaced with an **ft** in front. (It stands for Fourty Two)
- The project instructions require that we put all the source files in the root directory but for the sake of this Github repo, I separate them into sub folders.

My code is not the best, but it passed all the 42 tests successfully.

### How does it work?

The goal is to create a library called libft.a from the source files so I can later use that library from other projects at 42.

To create that library, after downloading/cloning this project, **cd** into the project, copy all the files from the sub folders to the root directory:

	cp -f libc-funcs/*.c .
	cp -f additional-funcs/*.c .
	cp -f bonus-funcs/*.c .
	cp -f personal-funcs/*.c .
	
and call `make`

You should see a *libft.a* file and some object files (.o).


Now to clean up (removing the .o files and the .c files from the root), call `make clean`

### How do I use the library?

I added an example file called **example.c**, it's using the function **ft_putstr** to print "DON'T PANIC" to the screen. 

If you try to compile it with gcc using `gcc example.c` you will get an *undefined symbol* error for ft_putstr. 

You have to tell the file where your library resides and which library it is using:

`gcc -L. -lft example.c`

-L takes the path to your library. `.` in this case<br>
-l takes the name of your library. This is the set of characters that come after `lib` in your library name.

That's it. Now run it using `./a.out`


Enjoy.

[1]: https://cdn.intra.42.fr/pdf/pdf/775/libft.en.pdf "Libft PDF"
[2]: http://42.us.org "42 USA"
[3]: http://www.asciitable.com/ "The ASCII Table"