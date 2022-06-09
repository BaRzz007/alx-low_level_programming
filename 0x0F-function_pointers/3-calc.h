#ifndef CALC_H
#define CALC_H
/**
 * struct op - struct op
 *
 * @op: operator
 * @f: function
 */
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;
int op-add(int, int);
int op_sub(int, int);
int op_mul(int, int);
int op_div(int, int);
int op_mod(int, int);
#endif /* CALC_H */
