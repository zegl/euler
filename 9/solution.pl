for (my $a = 0; $a < 1000; $a++) {
	for (my $b = 0; $b < 1000 - $a; $b++) {
		$c = 1000 - $a - $b;

		if ($a < $b && $b < $c) {
			if ($a ** 2 + $b ** 2 == $c ** 2) {
				print $a . " " . $b . " " . $c . ": " . ($a * $b * $c) . "\n";
			}
		}
	}
}