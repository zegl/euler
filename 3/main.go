package main

import (
	"fmt"
	"math/big"
)

func main() {
	fmt.Println(find_prime(600851475143, 2))
}

func find_prime(find_factor_of, prime int64) int64 {

	fmt.Println(find_factor_of, prime)

	if is_prime(find_factor_of) {
		return find_factor_of
	}

	if find_factor_of % prime == 0 {
		return find_prime(find_factor_of / prime, prime)
	}

	return find_prime(find_factor_of, next_prime(prime))
}

func next_prime(i int64) int64 {
	for {
		i++;

		if is_prime(i) {
			return i
		}
	}
}

func is_prime(i int64) bool {
	return big.NewInt(i).ProbablyPrime(4)
}