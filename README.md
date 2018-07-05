# y_tho

## Introduction

Have you ever wished pawn wasn't so C-like?  Would you much prefer to script in the superior language of unix shell scripting?  Well now you can!  y_tho brings pawn syntax in to the 22nd century, with new keywords such as `esac`, `fi`, and many many more; just take a look:

## Examples

Before:

```pawn
for (new i = 0; i != 10; ++i)
{
	printf("i is %d", i);
}
```

Now:

```pawn
for i in {0 .. 10}
do
	echo i is %d, i
done
```

Before:

```pawn
if (playerid < 7)
{
	SetPlayerPos(playerid, 0.0, 0.0, 4.0);
}
```

Now:

```pawn
if [ playerid -lt 7 ]
then
	SetPlayerPos playerid, 0.0, 0.0, 4.0
fi
```

Before:

```pawn
switch (boss)
{
	case 5:
	{
		printf("boss is 5");
	}
	case 10:
	{
		printf("boss is 10");
	}
}
```

Now:

```pawn
switch boss of
case 5)
	printf("boss is 5");
case 10)
	printf("boss is 10");
esac
```

## All syntax

### if/elif/else

```pawn
if [ i -gt 5 ]
then
	echo "i is %d", i
elif [ i -eq 5 ]
then
	echo i is 5
else
	echo "i is something else"
fi
```

### for (range)

```pawn
for j in {7 .. 11}
do
	echo j is %d, j
done
```

Note that this syntax will declare `j` as `new`.

### for (arithmetic)

```pawn
for ((k = 10; k != 100; ++k))
do
	echo k is %d, k
done
```

### while

```pawn
while [ i -lt 10 ]
do
	echo "i is %d", i
	++i
done
```

### until (!while)

```pawn
until [ i -eq 15 ]
do
	echo "i is %d", i
	SetPlayerPos i, 0.0, 0.0, 4.0
	++i
done
```

### switch

```pawn
switch i of
case 5)
	echo i is 5
case 10)
	echo i is 5
default)
	echo i is %d, i
esac
```

Note that this doesn't QUITE match the bash `case` syntax for technical reasons :(.

### echo

```pawn
echo Hello world
echo "How are you?"
echo "The answer is %d", 42
```

### comparisons

* `-lt` - Less than.
* `-le` - Less than or equal to.
* `-eq` - Equal.
* `-ne` - Not equal.
* `-ge` - Greater than or equal to.
* `-gt` - Greater than.

### Semi-colons

These are now optional:

```pawn
SetPlayerPos(playerid, 0.0, 0.0, 4.0)
```

### Bonus

If you are using the new (community) compiler (which you really should be - it is available here: https://github.com/pawn-lang/compiler/releases), brackets are also optional:

```pawn
SetPlayerPos playerid, 0.0, 0.0, 4.0
```

Note that they're never required on `echo` regardless of your compiler.

## y_tho?

y_not?

## Seriously, why though?

Because people kept joking about me writing a library called "y_tho", so I did.

## Installation

I'm slightly apprehensive about even giving you the link to this, but here:

https://github.com/Y-Less/y_tho

It is also available through sampctl (another tool you should get from here: http://sampctl.com/) here:

```bash
sampctl package install Y-Less/y_tho
```

Include in your code and begin using the library:

```pawn
#include <y_tho>
```

