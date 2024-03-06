# include <stdio.h>

int main(int argc, char const* argv[]) {
    printf("Addition and Subtraction of Large Numbers\n");

    /*
        3 + 3 = 6;
        But what if the numbers are too big to count?
        We must learn how to perform computations.

        Let's say one market sold 1,293 apples today.
        While, another market sold 2,614 apples today.
        How many are sold in total?

        We can place one number over the other.
            1,293
           +2,614
           =
           // Make sure that these must aligned, units over unit, hundreds over hundreds.
           // Now we add two digits at a time.
           // Starting with the units
           // 3+4 = 7
           // With 10s 9+1 = 10
           // Now we write 0 under 9+1 and add reminder (1) to next unit (hundred in this case).
           // This is called carrying the one.
           // Now 2(+1 of 10)+6 = 3+6 = 9
           // 1+2 = 3
            1,293
           +2,614
           =3,907 apples sold
    */

    /*
        // Subtraction
        // But make sure to put greater number up and smaller number down.
           
           473
          -286
          // that's not going to work for 3-6, so we have to borrow 1 from next up number (7 in this case)
          // But, it is playing role of 10th in unit. So we borrowed 10 to 3 = 10 carry for 3 = 13
          // It would be 13 - 6 = 7
          // Now in the tens place, we have 6-8 = same step
          // Borrow a tens from next.
          // This would be now (6+10)-8 = 8
          // Now last 3 - 2 = 1
           473
          -286
          =187 number of apples
    */

    /*
        We can use this for long lists of many numbers.
            17
            22
            11
            34
           +46
        =  130
            // add all units = 20
            // put 0 and add 2 to next.
            // now add all tens = 13
            // == 130
    */

    return 0;
}
