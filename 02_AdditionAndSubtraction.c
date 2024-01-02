#include <stdio.h>

int main(int argc, char const* argv[]) {
    /*

    Addition and Subtration.

    Human Beings have developed an incredible understandind of Mathematics over
    the past few centuries. There is much to learn before one is able to
    innovate brand new math.

    Arithmetic.
    Shortly after humans were able to count we needed symbols to represent those
    counting numbers. As well as methods to manipulate those numbers in the way
    to represent real life concepts. For Example:
        1. How many people are in the tribe?
        2. 2 Kinds just born.
        3. How many years has someone been alive?
        4. etc...

    Most cultures developed systems of counting based on the number 10.
    There were others based on twenty (Africans, Mayans) and sixty (Sumerians).
    But the one we use today is based on 10.

    Pretty much everyone today uses a decimal (base 10) system.
        1234:
            1 = thousand (1000)
            2 = hundreds (100)
            3 = tens (10)
            4 = ones (1)

    We often forget that the number ten is arbirary.

    */

    /*

    Addition.
    The combination of two numbers to become one (sum).
    For Example:
        If you get 2 apples from a vendor and 3 from another, how many apples
    did you get? We need to add them and make one value. that's called addition
    or sum. We know that the anwer would be 5 but how can we write it
    mathematically? We need to use "+" symbol to tell that the operation is
    addition operation. 2 + 3 = 5 We would put 2 (first two apples) + (the
    operation (addition operation)) 3 (second three apples) = (to express the
    output) 5 (the output). 2 + 3 = 5 : This is an equation. Which is a
    statement of equality. It means that the expression on the left hand side of
    = (equality symbol) and the expression on the right hand side of = (equality
    symbol) are equal. This equation reads (two plus three equals five). The
    word plus esentially means "and". The word equals means "is". (Two and three
    is five). Five is the sum of the addition.

    */

    int apples_first_time = 2;
    int apples_second_time = 3;
    int sum_of_both_apples = apples_first_time + apples_second_time;

    printf("%d + %d = %d\n", apples_first_time, apples_second_time,
           sum_of_both_apples);

    /*

    Subtraction.
    The inverse of Addition.
        Addition gives a sum.
        Subtraction gives a difference.

    You bring all five of your apples home and you eat one of them.
    If one apple has been subracted, how many are left?
    Again this is easy to count and we can see 4 left. But we want to calculate
    the answer. Which is much different from counting.

    We can write another equation with a five then minus symbo, followed by a
    one then the equals sign, and the number four. This reads: "five minus one
    equals four". Which essentially means five less one is four.

    So 4 is the difference between one and five.

    */

    int total_apples = 5;
    int eaten = 1;
    int difference = total_apples - eaten;

    printf("%d - %d = %d\n", total_apples, eaten, difference);

    /*

    Points:
        1. Addition is commutative, in that order in which numbers are added
    does not matter. 2 + 3 = 5 == 3 + 2 = 5 // No difference.
        2. Subtraction is not commutative, in that order in which number are
    subtracted does matter. 3 - 2 = 1 != 2 - 3 // It would not be the same.
        3. Addition is also associative. This means that if performing two
    successive additions, the order in which they are performed does not matter.
            2 + 3 + 4 = 9 // No matter which number we add first.
        4. Subtration is not associative.
            5 - 3 - 2 // It matters which number we subtract first.

    */

    return 0;
}
