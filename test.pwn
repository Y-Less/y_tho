#include <a_samp>
#include <y_tho>

main()
{
	new i = 3
	if [ i -le 5 ]
	then
		echo "i is %d", i
	fi

	for j in {7 .. 11}
	do
		echo j is %d, j
	done

	for ((k = 10; k != 100; ++k))
	do
		echo k is %d, k
	done

	while [ i -lt 10 ]
	do
		echo "i is %d", i
		++i
	done

	switch i of
	case 5)
		echo i is 5
	case 10)
		echo i is 5
	case 15)
		echo i is 5
	esac

	until [ i -eq 15 ]
	do
		echo "i is %d", i
		SetPlayerPos i, 0.0, 0.0, 4.0
		++i
	done

	switch i of
	case 5)
		echo i is 5
	case 10)
		echo i is 5
	case 15)
		echo i is 5
	esac
}

