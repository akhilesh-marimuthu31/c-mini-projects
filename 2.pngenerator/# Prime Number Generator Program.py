# Prime Number Generator Program
# ------------------------------
# This program generates all prime numbers up to a user-defined limit.
# It uses the Sieve of Eratosthenes algorithm for efficiency.

def generate_primes(limit):
    # Create a boolean array "is_prime[0..limit]" and initialize all entries as True
    # A value in is_prime[i] will be False if i is not a prime, True otherwise
    is_prime = [True] * (limit + 1)
    p = 2  # Start with the first prime number, which is 2

    while p * p <= limit:
        # If is_prime[p] is not changed, then it is a prime
        if is_prime[p]:
            # Updating all multiples of p to False, marking them as non-prime
            for i in range(p * p, limit + 1, p):
                is_prime[i] = False
        p += 1

    # Collect all prime numbers by checking the is_prime list
    primes = [p for p in range(2, limit + 1) if is_prime[p]]
    return primes

# Main program
if __name__ == "__main__":
    # Take user input for the limit up to which prime numbers should be generated
    limit = int(input("Enter the limit up to which you want prime numbers: "))

    # Generate and print prime numbers
    primes = generate_primes(limit)
    print(f"Prime numbers up to {limit}:")
    print(primes)
