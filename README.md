# Libft - @42Born2Code
My implementation of some of the Standard C Library functions including some additional ones.

### TOC
* [What is libft?](#what-is-libft)
* [What's in it?](#whats-in-it)
* [How does it work?](#how-does-it-work)
* [How do I use the library?](#how-do-i-use-the-library)
* [How do I test it? How do I test my own implementations?](#how-do-i-test-it-how-do-i-test-my-own-implementations)
	1. [To test the code in this repo](#1-to-test-the-code-in-this-repo)
	2. [To test your own code](#2-to-test-your-own-code)
* [Example usage](#example-usage)

### What is libft?
[Libft][1] is an individual project at [42][2] that requires us to re-create some standard C library functions including some additional ones that can be used later to build a library of useful functions for the rest of the program.

Disclaimer: *Reinventing the wheel is bad, 42 makes us do this just so we can have a deeper understanding of data structures and basic algorithms. At 42 we're not allowed to use some standard libraries on our projects, so we have to keep growing this library with our own functions as we go farther in the program.*

### What's in it?

As you can see from the [Project instructions][1], there are 4 sections:

1.  **Libc Functions:** Some of the standard C functions
2.  **Additional functions:** Functions 42 deems will be useful for later projects
3.  **Bonus Functions:** Functions 42 deems will be useful for linked list manipulation
4.  **Personal Functions:** Functions I believe will be useful later. [Documented here][3].

Libc functions | Additional functions | Bonus Functions | Personal Functions
:----------- | :-----------: | :-----------: | -----------:
memset		| ft_memalloc	| ft_lstnew		| ft_capitalize 
bzero		| ft_memdel		| ft_lstdelone	| ft_countwords 
memcpy		| ft_strnew		| ft_lstdel		| ft_islower    
memccpy		| ft_strdel		| ft_lstadd		| ft_isupper    
memmove		| ft_strclr		| ft_lstiter	| ft_strndup    
memchr		| ft_striter	| ft_lstmap		| ft_lst_reverse
memcmp		| ft_striteri	|				| ft_realloc
strlen		| ft_strmap		|				| ft_strjoinch
strdup		| ft_strmapi	|				| ft_strnchr
strcpy		| ft_strequ		|				| ft_copyuntil
strncpy		| ft_strnequ	|			| ft_strstartswith
strcat		| ft_strsub		| | ft_intlen
strlcat		| ft_strjoin	| | ft_strendswith
strchr		| ft_strtrim	| | ft_pathjoin
strrchr		| ft_strsplit	| | ft_lstaddback
strstr		| ft_itoa		| | get_next_line
strnstr		| ft_putchar	| | ft_putnstr
strcmp		| ft_putstr		| | ft_strreplace
strncmp		| ft_putendl	| | ft_isemptystr
atoi		| ft_putnbr		| | ft_strsplitall
isalpha		| ft_putchar_fd	| | ft_countwordsall
isdigit		| ft_putstr_fd	| | ft_freestrarr
isalnum		| ft_putendl_fd	| | ft_strjoincl
isascii		| ft_putnbr_fd	| | ft_strjoinchcl
isprint		|| | ft_count2darray
toupper		| | | ft_strarrmax
tolower		| | | ft_get_parent_path


Notes:

- Most of the the files and function names are namespaced with an **ft** in front. It stands for Fourty Two
- The project instructions require that we put all the source files in the root directory but for the sake of this Github repo, I separate them into sub folders.
- I update this list almost every month with new personal functions. If you don't know what a function does, refer to the [Wiki][3], where I document all my personal functions.

My code is not the best, but it passed all the 42 tests successfully.

### How does it work?

The goal is to create a library called libft.a from the source files so I can later use that library from other projects at 42.

To create that library, after downloading/cloning this project, **cd** into the project, copy all the files from the sub folders to the root directory and finally, call make:

	git clone https://github.com/R4meau/libft
	cd libft
	make copy
	make

You should see a *libft.a* file and some object files (.o).


Now to clean up (removing the .o files and the .c files from the root), call `make clean`

**WARNING:** `make clean` will delete all your files from your root directory. Do not run it if you're using the `Makefile` file. This is why I added the `Makefile-sample` file.

### How do I use the library?

I added an example file called **example.c**, it's using the function **ft_putstr** to print "DON'T PANIC" to the screen. 

If you try to compile it with gcc using `gcc example.c` you will get an *undefined symbol* error for ft_putstr. 

You have to tell the file where your library resides and which library it is using:

`gcc example.c -L. -lft`

-L takes the path to your library. `.` in this case<br>
-l takes the name of your library. This is the set of characters that come after `lib` in your library name.

That's it. Now run it using `./a.out`

### How do I test it? How do I test my own implementations?

To test the code we're going to be using @alelievr's [Libft Unit Test][4]. There are [some][5] [good][6] [others][7] but I'll only be covering this one.

#### 1. To test the code in this repo

1. Clone this repo and cd into it, make sure it's called `libft`:
		
		git clone https://github.com/R4meau/libft
		cd libft/
2. Copy all the source files to the root directory:
	
		make copy
3. Run Make so you can build the library:
		
		make
4. Go back to the root directory and download @alelievr's Libft Unit Test:
		
		cd ..
		git clone https://github.com/alelievr/libft-unit-test
5. Go into the test folder and run the test:

		cd libft-unit-test/
		make f

If you did everything correctly you should get a cool list of tests showing you the function names and if they passed or not.

#### 2. To test your own code

You might want to have a go at this project too. If you've never heard of Makefiles, don't worry, you don't have to learn about it now. So go ahead and follow those steps:

1. Create a directory for your project, make sure you call it `libft`:

		mkdir libft
2. Clone this repo (don't name it libft) and copy the Makefile-sample as Makefile and libft.h to your own project:

		git clone https://github.com/R4meau/libft r4-libft
		cp r4-libft/Makefile-sample libft/Makefile
		cp r4-libft/libft.h libft/
3. Go to your project, [read the instructions][1] for the function you want to create, code it and uncomment it from the Makefile:

		cd libft
		vim ft_memset.c
		vim Makefile
		
	As an example, after creating ft_memset as your first function, you go into the Makefile, remove the `#` in front of `FILES`, remove the `\` at the end of `ft_memset` and add a `#` in front of `ft_bzero`. 
	
	If it still looks complicated, **DON'T PANIC**, [just ask me][8] :)
4. Run Make so you can build the library:
		
		make	
5. Go back to the root directory and download @alelievr's Libft Unit Test:
		
		cd ..
		git clone https://github.com/alelievr/libft-unit-test
6. Go into the test folder and run the test:

		cd libft-unit-test/
		make f

That's it! If you're having some problems, just [send me a tweet][8]. If you think your problem is due to my code or this README, [create a new issue][9]. I'll definitely check it out.

## Example usage

This is a list of my projects that use Libft extensively:

* [get_next_line](https://github.com/r4meau/get_next_line)
* [ft_ls](https://github.com/r4meau/ft_ls)
* [ft_contrast](https://github.com/R4meau/ft_contrast)
* [minishell](https://github.com/R4meau/minishell)
* [ft_select](https://github.com/R4meau/ft_select)

## Sponsors

<a href="https://app.codesponsor.io/link/Fo4iMpT8bBWXwb54Lj7DPwqL/R4meau/libft" rel="nofollow"><img src="https://app.codesponsor.io/embed/Fo4iMpT8bBWXwb54Lj7DPwqL/R4meau/libft.svg" style="width: 888px; height: 68px;" alt="Sponsor" /></a>

Enjoy.

[1]: https://github.com/R4meau/libft/blob/master/libft.en.pdf "Libft PDF"
[2]: http://42.us.org "42 USA"
[3]: https://github.com/R4meau/libft/wiki/Personal-Functions-Documentation
[4]: https://github.com/alelievr/libft-unit-test
[5]: https://github.com/yyang42/moulitest
[6]: https://github.com/QuentinPerez/Maintest/tree/master/libft
[7]: https://github.com/Kant1-0/libft-test
[8]: https://twitter.com/r4meau
[9]: https://github.com/R4meau/libft/issues
