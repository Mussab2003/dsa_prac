// Given a number n. Count the number of digits in n which evenly divide n.
// Return an integer, total number of digits of n which divides n evenly.

// Example
// Input: n = 12
// Output: 2
// Explanation: 1, 2 when both divide 12 leaves remainder 0.

// Input: n = 2446
// Output: 1
// Explanation: Here among 2, 4, 6 only 2 divides 2446 evenly while 4 and 6 do not.

int evenlyDivides(int N)
{
    int counter = 0;
    int num = N;
    while (num > 0)
    {
        int a = num % 10;
        num /= 10;
        if (a == 0)
        {
            continue;
        }
        if (N % a == 0)
        {
            counter++;
        }
    }
    return counter;
}