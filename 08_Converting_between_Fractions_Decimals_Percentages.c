# include <stdio.h>

int main(int argc, char const* argv[]) {
    printf("Converting between Fractions, Decimals, and Percentages\n");
    
    /*
        We must be able to convert between Fractions, Decimals, and Percentages.

        If we take an example:
            Percentage:
                30%
                    // This means thirty out of one hundred.
            Fraction:
                30/100
                    Simplify:
                        // We have to divide both by 10 until we can't do anymore.
                        // // Tip: We can simple joint 0s.
                        3/10
            Decimals:
                0.3
                    // We know that in this case 3/10 = 0.3 in Decimals.
                    // 0.3 = After 0. the value is tenths place.
            
        Tip:
            To convert percentages to decimals, to go from percentage straight to decimal just move the decimal twice to the left.
                // Because, 100 is two orders of magnitude greater than 1.
                // 30% -> 30. (move decimal twice, decimal to the end isn't written but implied every number) = .30 (now, we can never start a number with a (.), there should be a number, we will add 0 = 0.30.
                // We could do this with 8.25 -> move . to twice, if no number is there, create a 0. = 0.0825
                // We can use this algorithm.
                // price x 0.0825 = value
                // 50 x 0.0825 = 4.13.

            We can also do opposite, to convert decimals to percentages.
                // To go from decimal straight to percentage just move the decimal twice to the right.
                // This is like multiplying by 100.
                // 0.84 -> 84%

            To go from a fraction to a percentage we can convert to a decimal first.
            For 3/5 we can ask what is the 1/5 as a decimal?
            That would be 0.2 because 5 of these (0.2)s are 1
            So 3/5 would be 0.6
            From there, we just moved decimal twice = 60%.
    */

    /*
        Some Common Conversions.
        Fraction
            1/2
            1/3
            1/4
            1/5
            1/6
            1/8
            1/9
            1/10
        Decimal
            0.5
            0.33333333
            0.25
            0.2
            0.16666666
            0.125
            0.111111111111
            0.1
        Percentage
            50%
            33.33333333%
            25%
            20%
            16.66666666%
            12.5%
            11.1111111111111%
            10%
    */

    /*
        Practice:
            We have 3 values to solve.
                Percentage:
                    45%
                        // 45% is the same as 45/100
                Fractions:
                    21/50
                        // If we want to compare it to another fraction, it needs to have a 100 in the denominator.
                        // Let's get this one by 21 x 2 and 50 x 2 = 42/100
                Decimals:
                    0.43
                        // We can move the decimal over twice.
                        // 43%
                        // 43/100
    */

    return 0;
}
