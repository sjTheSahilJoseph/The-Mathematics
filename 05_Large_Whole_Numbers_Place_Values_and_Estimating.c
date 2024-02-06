# include <stdio.h>

int main(int argc, char const* argv[]) {

    /*
        Place Values.
        We use place values to cnvey magnitude.
        We start from units place and so on.
        1 -> Units Place.
        11 -> Tens Place.
        111 -> Hundreds Place.
        1111 -> Thousands place.
        11111 -> Ten thousands place.
        111111 -> hundred thousands place.
        1111111 -> millions.
        ... so on.

        When we hit 9 we increment the next place by 1 and keep going.
    */

    int unit = 9;
    int tens = 99;
    int hundreds = 999;
    int thousands = 9999;
    int ten_thousands = 99999;
    int hundred_thousands = 999999;
    int millions = 9999999;

    /*
        For example:
        555 -> Five hundred fifty five.
        103 -> One hundred three.
    */

    /*
        We can place values to make estimates.
        For Example.
        If we have to calculate total number of people in the room.
        We can take an estimate by grouping by 10.
        We can see that they are more than 50 but not more than 200.
        So we can round up this in let's say 100 approx.
        100 becomes a reasonale estimate.

        Now, hundreds is quite certain.
        But tens and units is uncertain.
    */

    return 0;
}
