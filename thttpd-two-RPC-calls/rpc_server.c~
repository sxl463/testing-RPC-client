#include "two_calls.h"

int *
add_1_svc(numbers *argp, struct svc_req *rqstp)
{
	static int  result;

	/*
	 * insert server code here
	 */
    printf("remote add(%d, %d) is called \n", argp->a, argp->b);
    result = argp->a + argp->b;

	return &result;
}

void real_printstr(strlist* p){
	printf("real printstr is called\n");
}
int *
printstr_1_svc(strlist * psl, struct svc_req *rqstp){
	static int result;
	real_printstr(psl);
	return &result;
}
