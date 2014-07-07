=begin

Wed Nov 23, 2011
ruby 1.9.2


n! means n  (n  1)  ...  3  2  1

For example, 10! = 10  9  ...  3  2  1 = 3628800,
and the sum of the digits in the number 10! is 3 + 6 + 2 + 8 + 8 + 0 + 0 = 27.

Find the sum of the digits in the number 100!

=end

puts 100.downto(1).inject(:*).to_s.split(//).map {|x| x.to_i}.inject(:+)
