# Libft
In this project, I recoded some functions of the C standard library as well as some other utility functions.

## Part 01

In this first part, I re-coded a set of libc functions as defined in your `man`. The functions have the same prototype and behavior as the originals <a href="https://www.freebsd.org/cgi/man.cgi">(BSD).</a>

```
• isalpha • isdigit • isalnum • isascii • isprint • strlen • memset • bzero • memcpy • memmove • strlcpy • strlcat
• toupper • tolower • strchr • strrchr • strncmp • memchr • memcmp • strnstr • atoi
```

## Part 02

In this second part, I coded a set of functions that are not included in libc or are included in a different form.

```
• substr • strjoin • strtrim • split • itoa • strmapi • striteri • putchar_fd • putstr_fd • putendl_fd • putnbr_fd
```

***

### String manipulation functions

<table>
  <tr>
    <th>Function</th>
    <th>Description</th>
  </tr>
  <tr>
    <td><a href="./ft_strchr.c"> strchr </a></td>
    <td>The strchr() function returns a pointer to the first occurrence of the character c in the string s.</td>
  </tr>
  <tr>
    <td><a href="./ft_strrchr.c"> strrchr </a></td>
    <td>The strrchr() function returns a pointer to the last occurrence of the character c in the string s.</td>
  </tr>
  <tr>
    <td><a href="./ft_strdup.c"> strdup </a></td>
    <td>The  strdup()  function  returns a pointer to a new string which is a duplicate of the string s.  Memory for the new string is obtained with malloc(3), and can be freed with free(3).</td>
  </tr>
  <tr>
    <td><a href="./ft_striteri.c"> striteri </a></td>
    <td>Applies the function f to each character of the string passed as argument, and passing its index as first argument. Each character is passed by address to f to be modified if necessary.</td>
  </tr>
  <tr>
    <td><a href="./ft_strjoin.c"> strjoin </a></td>
    <td>Allocates (with malloc(3)) and returns a new string, which is the result of the concatenation of ’s1’ and ’s2’.</td>
  </tr>
  <tr>
    <td><a href="./ft_strlcat.c"> strlcat </a></td>
    <td>The strlcat() function appends the NUL-terminated string src to the end of dst. It will append at most size - strlen(dst) - 1 bytes, NUL-terminating the result.</td>
  </tr>
  <tr>
    <td><a href="./ft_strlcpy.c"> strlcpy </a></td>
    <td>The strlcpy() function copies up to size - 1 characters from the NUL-terminated string src to dst, NUL-terminating the result.</td>
  </tr>
  <tr>
    <td><a href="./ft_strlen.c"> strlen </a></td>
    <td>The  strlen()  function  calculates  the  length  of the string pointed to by s, excluding the terminating null byte ('\0').</td>
  </tr>
  <tr>
    <td><a href="./ft_strmapi.c"> strmapi </a></td>
    <td>Applies the function ’f’ to each character of the string ’s’ to create a new string (with malloc(3)) resulting from successive applications of ’f’.</td>
  </tr>
  <tr>
    <td><a href="./ft_strncmp.c"> strncmp </a></td>
    <td>The strncmp() function compares the n bytes of two strings s1 and s2. It returns an integer less than, equal to, or greater than zero if s1 is found, respectively, to be less than, to match, or be greater than s2.</td>
  </tr>
  <tr>
    <td><a href="./ft_strnstr.c"> strnstr </a></td>
    <td>The strnstr() function locates the first occurrence of the null-terminated string little in the string big, where not more than len characters are searched. Characters that appear after a ‘\0’ character are not searched.  Since the strnstr() function is a FreeBSD specific API, it should only be used when portability is not a concern.</td>
  </tr>
  <tr>
    <td><a href="./ft_strtrim.c"> strtrim </a></td>
    <td>Allocates (with malloc(3)) and returns a copy of ’s1’ with the characters specified in ’set’ removed from the beginning and the end of the string.</td>
  </tr>
  <tr>
    <td><a href="./ft_substr.c"> substr </a></td>
    <td>Allocates (with malloc(3)) and returns a substring from the string ’s’. The substring begins at index ’start’ and is of maximum size ’len’.</td>
  </tr>
  <tr>
    <td><a href="./ft_split.c"> split </a></td>
    <td>Allocates (with malloc(3)) and returns an array of strings obtained by splitting ’s’ using the character ’c’ as a delimiter. The array must be ended by a NULL pointer.</td>
  </tr>
  <tr>
    <td><a href="./ft_putstr_fd.c"> putstr_fd </a></td>
    <td>Outputs the string ’s’ to the given file descriptor.</td>
  </tr>
</table>

***

### Memory Manipulation Functions

<table>
  <tr>
    <th>Function</th>
    <th>Description</th>
  </tr>
  <tr>
    <td><a href="./ft_calloc.c"> calloc </a></td>
    <td>The  calloc()  function  allocates memory for an array of nmemb elements of size bytes each and returns a pointer to the allocated memory. The memory is set to zero. If nmemb or size is 0, then calloc() returns either NULL, or a unique pointer value that can later be successfully passed to free(). <br/> If the multiplication of nmemb and size would result in integer overflow, then calloc() returns an error.  By contrast, an integer overflow would not be detected in the following call to malloc(), with the result that an incorrectly sized block of memory would be allocated: `malloc(nmemb * size);`</td>
  </tr>
</table>

***
