# include <stdio.h>

int main(int argc, char const* argv[]) {

    /*
    Fractions.

    Any time we divide, we have dividend, divisor, quotient.
    -> 15 / 5 = 3.
    -> 15 = dividend.
    -> 5 = divisor.
    -> 3 = quotient.

    When dividend > divisor, this can sometimes result a whole number quotient.
    
    But when divisor > dividend, this will gives us a fraction.
    -> 1 / 2 = somewhere between 0 and 1.
    -> Its a piece of 1, a fraction of 1.
    -> This is called fraction.

    For Example:
    Let's cut a pizza up into 8 equal slices.
    To represent this, we can take the number 1 to describe 1 pizza, 
    and divide it by 8, to show that it is divided into 8 sections.
    
    That means, that one slice is one eighth of the pizza.
    If we eat 2 slices, we ate 2 eighths of the pizza.
    We can eat 3, 4, 5, or up to 8 eights of the pizza.

    */

    float pizza = 1;
    float slices = 8;
    float fraction = pizza / slices;
    printf("Pizza / Slices = %f\n", fraction);


    /*
    
    Let's cut the pizza in 4 parts, now each part will have 1/4 (one fourth) of the pizza.
    
    1/4 and 2/8 are equvalent fractions.

    We can eat one fourth or two eights, the meaning is same.

    2 / 8 is the same as 1 / 4.

    Fractions = 2/8.
    We can manipulate this fraction by doing the same thing to both the numerator and the denominator.
    Numerator = 2.
    Denominator = 8.

    Or we can write like this as well.
    2
    -
    8
    // Over.

    2/2    1
    --- = ---
    8/2    4

    We just reduced the fraction.

    */

    /*
    
       If fractions have the same denominator the one with the bigger numerator is bigger.
       3/8 or 5/8
       -> 5/8 = bigger.

       If the denominators, you must use another strategy to compare them.
       3/8 or 3/10
       -> Let's draw 2 circles, one can be divided into 8 peices, and other one can be divided into 10 peices.
       -> Then let's shade 3 peices in each circle.
       -> We can clearly see that the 3/8 covers the larger area.
       -> 3/8 is larger fraction.
       -> This makes sense because this circle is divided fewer times.

    */

    /*
    
       Not all fractions are smaller than 1.
       Some fractions are greater than 1.

       This would be the case when the dividend is greater thatn the divisor.
       4/3.
       -> 4 = dividend.
       -> 3 = divisor.
       -> But the quotient is not the whole number.

       For Example:
       4/3.
       or 4 thirds.
       3 thirds are 1.
       6 thirds are 2.
       So, 4/3 is between one and two.
       These are called improper fraction.

       We can convert this into a mixed number.

       Let's say we have a pizza part.
       So, we want to order pizza from our favourite restaurant.
       They cut the pizza into 8 slices.
       And we are 10 friends.
       Each want 3 slices.

       So we can do, 3x10=30.
       Which means 30 slices needed in order to give 3 slices each friend (10 friends total).

       Each slice is 1/8 of a pizza.
       We can say we need 30/8 of pizza.

       But we don't say like this to waiter, we need to say it more clearly to them.

       8/8 = 1 pizza.
       16/8 = 2 pizza.
       24/8 = 3 pizza.
       still we need 6 more slices.
       So we can say, 3 6/8
       3 and 6 eighths of pizza.
       Which reduces to 3 and 3/4.

       3 is whole pizzas, and 3/4 means other slices.

       Then we will have 4 pizza, and 2 slices left over.
       We have 32/8 or pizza.

       We can also go other way.
       Let's say we ate 4 or 3/8 pizzas.
       How many slices did we eat?

       Each pizza has eight slices.
       We multiply 4 x 8 = 32.
       Then we add on the remaining 3 = 35.
       We ate 35 slices total.

    */

    /*
    
    We must be able to convert between these different forms.
    -> Mixed Number.
        4 of 3/8.
    -> Improper Fraction.
        35/8.

    */

    return 0;
}
