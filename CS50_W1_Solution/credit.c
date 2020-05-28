<<<<<<< HEAD
#include <stdio.h>
#include <math.h>
#include <cs50.h>

int main(void)
{
    long long cred_number, coldfin = 0, val;
    long long oldfin = 0;
    long long oldfin1 = 0;
    int oldzero = 0;
    int zero, p = 0;
    do
    {
        cred_number = get_long_long("Number: ");
    } while (cred_number < 1);
    /*printf("%lld\n", cred_number);*/
    long long don = cred_number / pow(10, 15);
    long long amon = cred_number / pow(10, 13);
    long long mon = cred_number / pow(10, 14);
    /*printf("%lld\n", don);*/
    int n, q;
    for (n = 0; n <= 16; n = n + 2)
    {
        long long new = pow(10, n);
        long long cnew = cred_number % new;
        long long lin = (cnew / pow(10, n - 1));
        long long fin = lin * 2;
        if (fin > 9)
        {
            long long kin = fin / 10;
            long long in = fin % 10;
            long long din = kin + in;
            long long chin = oldfin + din;
            oldfin = chin;
            /*printf("%lld  %lld  %lld\n", cnew, din, chin);*/
        }
        else
        {
            long long chin = oldfin + fin;
            oldfin = chin;
            /*printf("%lld  %lld %lld\n", cnew, fin, chin);*/
        }
    }
    for (q = 1; q <= 16; q = q + 2)
    {
        long long ole = pow(10, q);
        long long cnew1 = cred_number % ole;
        long long lin1 = cnew1 / pow(10, q - 1);
        long long chin1 = oldfin1 + lin1;
        oldfin1 = chin1;
    }
    coldfin = oldfin + oldfin1;
    /*printf("%lld\n",coldfin);*/
    if (coldfin % 10 == 0)
    {
        while (cred_number > 0)
        {
            cred_number = cred_number / 10;
            p = p + 1;
        }

        /*printf("length is %d\n", p);*/
        if (p == 15 && (amon == 34 || amon == 37))
        {
            printf("AMEX\n");
        }
        else if ((p == 13 || p == 16) && don == 4)
        {
            printf("VISA\n");
        }
        else if (p == 16 && (mon >= 51 && mon <= 55))
        {
            printf("MASTERCARD\n");
        }
        else
        {
            printf("INVALID\n");
        }
    }
    else
    {
        printf("INVALID\n");
    }
}