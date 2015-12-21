<?php

$num1 = range(100, 999);
$num2 = range(100, 999);

$largest = 0;

foreach ($num1 as $i) {
	foreach ($num2 as $ii) {
		$num = $i * $ii;

		$n = (string) $num;

		if ($n == strrev($n)) {
			$largest = max($largest, $num);
		}
	}
}

echo $largest . "\n";