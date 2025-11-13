#ifndef OF_NUMBERS_H
#define OF_NUMBERS_H


class of_numbers
{
    public:
        of_numbers();
        virtual ~of_numbers();
        of_numbers(const of_numbers& other);
        of_numbers& operator=(const of_numbers& other);
        int preci=0;
        int log=0;
        long double main_number;
        long double mns[10];
        long double first_sum=0;
        long double rpt[10]; int rpti=0;
        long double rpcd[10];
        long double rprs_o[10];
        long double rprs_t[10];
        long double rpfs[10];
        long double sqti;
        int x_calc();
        int x_show();


    protected:

    private:
};

#endif // OF_NUMBERS_H
