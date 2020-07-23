float arithmetic_ops(float left, float right, float (*op)(float,float))
{
    op = &multiply_op;
	return (*op)(left, right);
}

float multiply_op(float left, float right){
    return left * right;
}
