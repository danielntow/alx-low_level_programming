#ifndef FUNCTION_LIKE_MACRO_H
#define FUNCTION_LIKE_MACRO_H

#define ABS(x)                                                                 \
	do                                                                     \
	{                                                                      \
		if ((x) < 0)                                                   \
		{                                                              \
			(x) = -(x);                                            \
		}                                                              \
	} while (0)

#endif /* FUNCTION_LIKE_MACRO_H */

