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

```bash
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

```bash
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

```bash
switch boss of
case 5)
	printf("boss is 5");
case 10)
	printf("boss is 10");
esac
```

Note that this doesn't QUITE match the default base `case` syntax for technical reasons :(.

## All syntax

### if/elif/else

```bash
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

```bash
for j in {7 .. 11}
do
	echo j is %d, j
done
```

### for (arithmetic)

```bash
for ((k = 10; k != 100; ++k))
do
	echo k is %d, k
done
```

### while

```bash
while [ i -lt 10 ]
do
	echo "i is %d", i
	++i
done
```

### until (!while)

```bash
until [ i -eq 15 ]
do
	echo "i is %d", i
	SetPlayerPos i, 0.0, 0.0, 4.0
	++i
done
```

### switch

```bash
switch i of
case 5)
	echo i is 5
case 10)
	echo i is 5
default)
	echo i is %d, i
esac
```

### echo

```bash
echo Hello world
echo "How are you?"
echo "The answer is %d", 42
```

### Semi-colons

These are now optional:

```bash
SetPlayerPos(playerid, 0.0, 0.0, 4.0)
```

### Bonus

If you are using the new (community) compiler (which you really should be - it is available here: https://github.com/pawn-lang/compiler/releases), brackets are also optional:

```bash
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

It is also available through sampctl (another tool you should get) here:

```bash
sampctl package install Y-Less/y_tho
```

Include in your code and begin using the library:

```pawn
#include <y_tho>
```

