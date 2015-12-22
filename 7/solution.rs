fn is_prime(num: u32) -> bool {

	for n in 2..num {
		if num % n == 0 {
			return false
		}
	}

	return true
}

fn main() {

	let mut found_primes = 0;

	for n in 2..100000000 {
		if is_prime(n) {
			found_primes += 1;
		}

		if found_primes == 10001 {
			println!("{}", n);
			return
		}
	}
}