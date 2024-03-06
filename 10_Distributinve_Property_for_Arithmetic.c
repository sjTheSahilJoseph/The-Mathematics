# include <stdio.h>

int main(int argc, char const* argv[]) {
    printf("Distributinve Property for Arithmetic\n");

    /*
        In maths, there are numbers, and numbers have properties.
        Like we learnt commutative property
            a+b = b+a
            axb = bxa
            a-b != b-a
            a/b != b/a
        and Associative property
            (a+b) + c = a + (b+c)
            (axb) x c = a x (bxc)
            (a-b) - c != a - (b-c)
            (a/b) / c != a / (b/c)

        Now let's learn distributive property.
            Say we have 5 piles of 7 apples.
                5x7=35
            Now split each pile up into a group of three and a group of 4.
                There are few ways to represent this.
                    Let's take 7 and split ino  5 x (3 + 4) = 35
                    The answer is same 35, which means that re-arranging the apples doesn't change the answer.
                    But we could also say that (5 x 3) + (5 x 4) = 35
                    This is called distributive property.

        Understanding the Distributive Property
            If a number is multiplied by a sum or difference it can be distributed across that sum or difference.
                5(3+4)=35 -> (5x3) + (5x4) = 15+25 = 35
            No matter we do sum first and then multiply, or we can multiply twice to get the same answer.
            We just distrubed by multiplying.

        We can use this property in reverse.
            When multiplying 2 numbers one can be split up into a sum or difference
                5x17
                5(10 + 5 + 2) = distribute into separate 5
                (5x10) + (5x5) + (5x2) = 85

    */

    return 0;
}
