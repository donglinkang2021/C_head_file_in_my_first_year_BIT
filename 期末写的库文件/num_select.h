#ifndef _NUM_SELECT_H_
#define _NUM_SELECT_H_
#include<stdio.h>
#include<string.h>
/*
here we will define a char array: prime[i]
which means that number i is prime,
you can also think it as isprime[] in our class,
and there are few methods to select the prime-num
*/

void Aselect(char prime[], int n);
/*	@param 
	prime is a char array (str) 
	and prime[i] is used to judge whether i is prime.
	
	n is num you want to use to limit the area of 
	prime list. Actually, you can also also use strlen
	to get the length of prime[] and let n equal to it 
	
	@function 
	delete the prime-times num, and get the prime list
	store the result in a str(small)
	
	@return 
	none 
*/
void Eulaselect(char prime[], int n);
/*	@param 
	same as Aselect,prime is a str to record prime
	n is the area of prime
	@return 
	none 
	
*/
void show_isflag(char prime[], int n);


void Aselect(char prime[], int n) {
	/*select the prime-num
		between 2~n, and attach 0 to the non-prime-num */
	/*initialize:
	suppose that all in 2~n is prime (except 1), and we ignore prime[0]*/
	memset(prime, 1, n);
	prime[1] = 0;
	/*select:
	if i is prime,we know that i*j isn't prime, where j is between 2 ~ n/i */
	for (int i = 2; i <= n; i++) {
		if (prime[i]) {
			for (int j = 2; j * i <= n; j++) {
				prime[j * i] = 0;
			}
		}
	}
//	int sum=0; 
//	for(int i=1;i<=n;i++){
//		sum+=prime[i];
//	}
//	printf("%d\n",sum);
}

void Eulaselect(char prime[], int n) {
	/*initialize:same as Aselect*/
	memset(prime, 1, n);
	prime[1] = 0;
	/*we don't want such repeat as
	2 will attach 0 to 6, but 3 will do it too! */
	/*so we build a array
	to store the already chosen prime-num,
	(and we will use it to ignore such '3' num while
	judge whether '6' num is prime)
	and a num cnt to count the num in the array*/
	int alprime[n];
	int cnt = 0;
	/*select:just a little modify on Aselect:
	if i is prime, we know that i*j isn't prime,
	here j is replaced by the already chosen prime-num
	because we select from the little number,
	in Aselect you can see that j enums from 2,
	then 3,4,5...(where i*j should less equal n ),
	however each num may be judged by the min prime first
	such as 2 can judge where j=2,4,6...
	and 3 can judge where j=3,6,9...
	so we can just use the min prime to replace
	the function of j and we can easily find the already
	chosen prime is really the best replacement of j!*/
	for (int i = 2; i <= n; i++) {
		if (prime[i]) {
			alprime[cnt++] = i;
		}
		for (int j = 0; i * alprime[j] <= n && j <= cnt; j++) {
			prime[i * alprime[j]] = 0;
			if (i % alprime[j] == 0) {
				break;
			}
		}
	}
//	printf("%d\n", cnt);
}

void show_isflag(char prime[], int n) {
	for (int i = 1; i <= n; i++) {
		if (prime[i]) {
			printf("%d ", i);
		}
	}
}


#endif
