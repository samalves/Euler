=begin

Compute the prime factors of the input.

ruby 1.8.7
Sam Alves

=end


if ARGV[0].nil? or ARGV[0].to_i == 0
	puts "needs a positive integer argument; usage: #{$0} <integer>" 
	exit 1
end

input = ARGV[0].to_i

numerator = input
denominator = 2


prime_factors = []

# Find the prime factors.
while numerator != 1
#puts
#puts "Start the loop with numerator = #{numerator} and denominator = #{denominator}"

	# Is this denominator a divisor of the numerator?
	if numerator % denominator == 0
		#puts "  the denominator #{denominator} is a prime factor."
		prime_factors << denominator
		numerator /= denominator
		#puts "  setting the numerator to #{numerator}"
	else
		#puts "  the denominator #{denominator} is not a divisor."
		denominator += 1
		#puts "  Incrementing the denominator to #{denominator}."
	end
end

puts 		
print "Here are the prime factors: "
prime_factors.each { |x| print "#{x} " }
puts
