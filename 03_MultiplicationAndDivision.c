#include <stdio.h>

int main(int argc, char const **argv) {
    printf("Multiplication and Division\n");
/*
    Addition:
        Two numbers combine to give a sum.
    Multiplication:
        Two numbers combine to give a product.
    
    Let's say:
        We added two apples five times in a basket.
        How many we have now?
            10.
            We can use addition to add.
                2+2+2+2+2 = 10.
                But that is not practicle when number is large.
                It'll take so much time and energy.
            We simply use multiplication.
                2x5 = 10.
                we denote multiplication by X,x,*.
                (Two times five) = 10.
            2 and 5 are called Factors.
            10 is called Product.
            (Factor x Factor = Product).
    The Symbol:
        We use 'X', 'x' to denote multiplication.
            5 x 2 = 10;
        But we can also denote it as '.' (dot).
            5 . 2 = 10;
        Or also '*' (Asterisk).
            5 * 2 = 10;
        Or nothing means also multplication. (3y) -> 3*y.
            y = 2;
            5y = 10; -> means 5 times y.

    Basically:
        Multiplicaion combines identical groups of items into a single larger number (product).

*/
    // Multiplication of two numbers.
    int number_1 = 5;
    int number_2 = 5;
    int multiplication_result = number_1 * number_2;
    printf("%d x %d = %d\n", number_1, number_2, multiplication_result);

    // Multiplication of three numbers.
    int n1 = 5;
    int n2 = 5;
    int n3 = 5;
    int result = n1 * n2 * n3;
    printf("%d x %d x %d = %d\n", n1, n2, n3, result);
    
    // We can multpliply with more numbers as well obviously.

/*
    Division:
        Division breaks a larger number into group of smaller numbers of identical size (quotient).
    
    Let's say we you want 15 apples, and at the market there are baskets, each containing 5 apples.
    How many baskets should you take?
        We simply divide fifteen by five per basket to get three, which means that three baskets.
            15 / 5 = 3;
        15 is the Dividend.
        5 is the Divisor.
        3 is the Quotient.
    Multiplication gives us a product.
    Division gives us a quotient.

    The Symbol:
        We use '÷' for Division.
            15 ÷ 3 = 15;
        But we can also use '/'.
            15/5 = 3;
        And also 15 over 5 = 3. over means a line where 15 is up and 5 is down.
            15 over 5 = 3;

    These all mean the same thing.
*/

    int apples_we_need = 15;
    int each_basket_have_apples = 5;
    int we_need = apples_we_need / each_basket_have_apples;
    printf("We need %d baskets, because apples we need was %d, and we divide it to %d, so we get %d", we_need, apples_we_need, each_basket_have_apples, we_need); 

/*
    Multiplication is commutative.
        2x5 = 5x2;
    Division is not commutative.
        10/2 != 2/10;

    Multiplication is Associative.
        2x3x4 = 24;
    Division is not Associative.
        10/5/2 != 2/10/5;

    NOTE:
        Associative means the order matters.
*/

    return 0;
}
