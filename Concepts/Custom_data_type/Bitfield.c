/*	A simple bit-field	*/
#include <stdio.h>

struct addr	{
	char name[30];
	char street[40];
	char city[20];
	char state[3];
	unsigned long int zip;
} ;

struct status_type	{
	struct addr addr_info;
	float pay;
	unsigned tr_end:	1;
	unsigned send:		1;
	unsigned rec:		1;
	unsigned unused:	1;
} status;

struct short_type	{
/*	struct addr addr_info;	*/
	float pay;	/**/
	unsigned :		2;
	unsigned rec:	1;
} shrt;

int main(void)
{
	printf("Information size: %u bytes\n", sizeof(status));
	printf("Shortened size: %u bytes\n", sizeof(shrt));
	status.send = 1;
	if(status.send)	{
		status.rec = 0;
		printf("Sending.\n");
	}
	status.pay = 10500.50;
	status.addr_info.zip = 1206;
	printf("Paid: %.2f\n", status.pay);
	printf("Address: %lu\n", status.addr_info.zip);
/*
	shrt = (struct short_type)status;	//error: conversion to non-scalar type requested
*/
/*	if(!shrt.rec)	printf("Not receiving.\n");	/*	'shrt' sometimes appended in the end of 'status'	*/

	return 0;
}