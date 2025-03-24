# Sort integer arguments (ascending)

result = []

ARGV.each do |arg|
  # Skip if not an integer
  next unless arg =~ /^-?\d+$/

  # Convert to integer and store in result array
  result << arg.to_i
end

# Sort and print the result
puts result.sort

