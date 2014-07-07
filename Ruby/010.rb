require 'mathn'

# Problem 10
#
# The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.
# Find the sum of all the primes below two million.

# Ruby 1.9.2
# Tue Nov 22, 2011

sum = 0

Prime.each(2_000_000) do |prime|
  sum += prime
end

puts sum
