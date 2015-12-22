$sum_squares = 0
$sum_natural = 0

$i = 1

while $i <= 100 do
	$sum_squares += $i ** 2
	$sum_natural += $i

	$i += 1
end

$sum_natural_squared = $sum_natural ** 2

puts $sum_natural_squared - $sum_squares