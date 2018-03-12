# C-Library

| **FUNCTION** | **DESCRIPTION** |
| --- | --- |
| **MEMORY** |
| ft_memset | writes c values len bytes (converted to unsigned char) to the string b|
| ft_bzero | writes n zeroed bytes to the string s, if n = 0 function does nothing |
| ft_memcpy | copies n bytes from source memory to destination memory. |
| ft_memccpy | copies n bytes from source memory to destination memory and stops if/when char c occurs in source. |
| ft_memmove | copies len bytes from source memory to destination memory. |
| ft_memchr	| locates the first occurrence of char c in string. |
| ft_memcmp	| compares byte string 1 against byte string 2, both assumed to be n bytes long. |
| ft_memalloc	| allocates and returns “fresh” memory area, thats initialized to 0. |
| ft_memdel | takes as parameter the address of a memory area that needs to be freed, then puts the pointer to NULL. |
| **STRINGS** |
| ft_strlen	| computes the length of the string s. |
| ft_strdup	| allocates sufficient memory for copy of s1, does the copy and returns a pointer to it. |
| ft_strcpy	| copy the string source to destination, including terminating ‘\0’ char. |
| ft_strncpy	| copy at most length characters from source to destination. If source is longer than length rest is filled with ‘\0’. |
| ft_strcat  	| append a copy of null-terminated string 2 to the end of null-terminating string 1, then add terminating ‘\0’. |
| ft_strncat	| appends not more than n characters from string 2 to end of string 1, then adds terminating ‘\0’. |
| ft_strlcat	| appends string source to the end of string destination. |
| ft_strchr	| locates the first occurrence of c (converted to char) in the string pointed to by s. |
| ft_strrchr	| function is identical to ft_strchr except it locates the last occurrence of c. |
| ft_strstr	| locates the first occurrence of the string needle (to be searched) in the string haystack (to be scanned). |
| ft_strnstr	| the same as ft_strstr, where not more than len characters are searched. |
| ft_strcmp	| lexicographically compare the null-terminated strings 1 and 2. |
| ft_strncmp	| compares not more than n characters. |
| ft_atoi		| converts initial portion of the string to int. |
| ft_isalpha	| tests for any character for which upper or lower is alphabetical character. |
| ft_isdigit	| testes for a decimal digit character. |
| ft_isalnum	| tests for any character which is either alphabetical char or digit. |
| ft_isascii	| tests for an ASCII character, any char between 0 and 127 inclusive. |
| ft_isprint	| tests for any printing character, including space. |
| ft_toupper	| converts a lower-case letter to the corresponding upper-case letter. |
| ft_tolower	| convert a upper-case letter to the corresponding lower-case letter. |
| ft_strnew	| allocates and returns a “fresh” string ending with ‘\0’. |
| ft_strdel	| takes as a parameter the address of a string that need to be freed, then sets its pointer to NULL. |
| ft_strclr	| sets every character to the string to be ‘\0’. |
| ft_striter	| applies function f to each character to the string passed as an argument. |
| ft_striteri	| the same as ft_striteri and passing its index as first argument. |
| ft_strmap	| applies function f to each character of the string given as argument creating a “fresh” new string. |
| ft_strmapi	| the same as ft_strmap, by giving its index as first argument. |
| ft_strequ	| lexicographical comparison between s1 and s2. If strings are identical returns 1, otherwise 0. |
| ft_strnequ	| the same as ft_strequ up to n characters or until a ‘\0’ is reached. |
| ft_strsub	| allocates and returns a “fresh” substring from str given as argument. Substring begins at indexstart and is a size of len. |
| ft_strjoin	| allocates and returns a “fresh” string ending with ‘\0’, result of concenatation of s1 and s2. |
| ft_strtrim	| allocates and returns a copy of the string given as argument without whitespaces at the beginning or at the end of str. |
| ft_strsplit	| allocates and returns an array of “fresh” strings obtained by splitting s using the char c as delimiter. |
| ft_itoa		| allocates and returns a “fresh” string representing the integer n given as argument. |
| **OUTPUT** |
| ft_putchar	| outputs the character c to standard output. |
| ft_putstr	| outputs the string s to standard output. |
| ft_putendl	| outputs the string s to the standard output followed by a new line. |
| ft_putnbr	| outputs the integer n to the standard output. |
| ft_putchar_fd	| outputs the char c to the file descriptor fd. |
| ft_putstr_fd	|  outputs string s to the file descriptor fd. |
| ft_putendl_fd	| outputs string s to the file descriptor fd followed by a new line. |
| ft_putnbr_fd	| outputs the integer n to the file descriptor fd. |
| **LISTS** |
| ft_lstnew | Allocates (with malloc(3)) and returns a “fresh” link. The variables content and content_size of the new link are initialized by copy of the parameters of the function. If the parameter content is null, the variable content is initialized to NULL and the variable content_size is initialized to 0 even if the parameter content_size isn’t. The variable next is initialized to NULL. If the allocation fails, the function returns NULL. |
| ft_lstdelone | Takes as a parameter a link’s pointer address and frees the memory of the link’s content using the function del given as a parameter, then frees the link’s memory using free(3). The memory of next must not be freed under any circumstance. Finally, the pointer to the link that was just freed must be set to NULL (quite similar to the function ft_memdel in the mandatory part). |
| ft_lstdel | Takes as a parameter the adress of a pointer to a link and frees the memory of this link and every successors of that link using the functions del and free(3). Finally the pointer to the link that was just freed must be set to NULL (quite similar to the function ft_memdel from the mandatory part). |
| ft_lstadd	| adds the element new at the beginning of the list. |
| ft_lstiter	| iterates the list lst and applies the function f to each link. |
| ft_lstmap | Iterates a list lst and applies the function f to each link to create a “fresh” list (using malloc(3)) resulting from the successive applications of f. If the allocation fails, the function returns NULL. |
| **ADDITONAL** |
| ft_isspace	| finds spaces in string given as argument, returns 1 if true and 0 if false. |
| ft_countwords	| counts words in string given as argument. |
| ft_min | compares two given arguments returning the smallest argument. |
| ft_max | compares two given arguments returning the biggest argument. |
| ft_arrlen	| computes the length of the array given as argument. |
