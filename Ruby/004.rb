palindromes = []

999.downto(100) do |i|
	999.downto(100) do |j|
		result = (i * j)
		if result.to_s == result.to_s.reverse 
			palindromes << result
		end
	end
end

puts palindromes.sort.last
