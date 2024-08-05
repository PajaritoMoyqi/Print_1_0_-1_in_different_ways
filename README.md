## Intro

Print 1, 0, -1 in different languages, in different ways.

Now here is 11 ways of priting 0 or 1 or -1.

### Number of examples

#### per result

| Result | Number of examples |
|:-----:|:--------------:|
| -1 | 0 |
| 0 | 8 |
| 1 | 3 |

#### per language

| Language | Number of examples |
|:-----:|:--------------:|
| C | 11 |

## Code list

1: Trigraph sequence in C

```c
printf( "%d", "??=" == "#" );
```

2: Digraph sequence in C

```c
printf( "%d", "%:" == "#" );
```

3-4: ASCII code in C

```c
printf( "%d", NULL );
printf( "%d", '' );
```

5-6: Boolean in C

```c
printf( "%d", a == 'b' );
printf( "%d", a == 'a' );
```

7-11: <limits.h> in C

```c
printf( "%u", UINT_MAX + 1 );
printf( "%hhu", UCHAR_MAX + 1 );
printf( "%hu", USHRT_MAX + 1 );
printf( "%lu", ULONG_MAX + 1 );
printf( "%llu", ULLONG_MAX + 1 );
```