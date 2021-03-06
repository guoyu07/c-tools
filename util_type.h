﻿#ifndef UTIL_TYPE_H
#define UTIL_TYPE_H

typedef unsigned char byte;
typedef unsigned long ulong;
typedef unsigned long long ulonglong;

#define ibool unsigned int
#define TRUE 1
#define FALSE 0
static inline void* ut_align(const void* ptr, ulong align_no){
	return (void*)(((ulong)ptr + align_no - 1) & ~(align_no - 1)) ;
}

static inline ulong ut_2_exp(ulong n){
	return (ulong)(1<<n);
}

static inline ulong ut_2_log(ulong n){
	ulong ret = 0;
	n = n - 1;//for number as 2^n
	for(;;){
		ret++;
		n = n / 2;
		if(n == 0)
			break;
	}		
	return ret;
}

static inline ulong ut_max(ulong a, ulong b){
	return (a > b? a : b);
}

#endif