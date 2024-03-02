# include <stdio.h>

int main(int argc, char const* argv[]) {

    printf("06 Notation and Operations\n");

    /*
        We know about place values.
        We know about units place, tens place, hundereds place, and so on.
        But what about all the fractions?
        What if we have one-tenth of a pizza, is there any way to represent that?
        Without having to use an improper fraction or mixed number?
        Yes, we can represent the whole pizza with a one in this unites place.
        And represent one slice with a one in the tenths place.
        This is achieved with a decimal point.
            1 = whole pizza
            0.1 = one tenth
                // In 0.1 - 1 is tenth place
                // All the way up to ten slices

                <- Each place value is ten times larger.
                325.3433434323
                -> Each place value is ten times smaller.

        If the pizza has 100 slices then:
            0.01
        If 1000 slices then:
            0.001
        If ten thousands:
            0.0001

        Place values allow us to report the magnitude of something.
    */

    /*
        We can do operations with decimal values.
        We just have to line up the place values.
            2.3 + 1.4 = 3.7
    */

    float n1 = 2.3;
    float n2 = 1.4;

    printf("%f + %f = %f\n", n1, n2, (n1 + n2));

    return 0;
}
