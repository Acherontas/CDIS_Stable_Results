#include <iostream>
#include "of_numbers.h"
using namespace std;

int main(int argc,char** argv)
{
    long double main_number[10];
    int preci;
    cout<<"we get a stable Result through cdi's \n";
    of_numbers *ofnm=new of_numbers();
    cout<<"enter 1 to 10 numbers , enter precision , 0 for no log 1 for log\n";
    cout<<"u can enter till 10 numbers in a row \n";
    cout<<"eg ./cdi_pol_diar_arm64 1381 2785 3271 4596 78895621 352 781 926 55732 48336 12 0 \n";
    ofnm->mns[0]=stold(argv[1]);
    ofnm->mns[1]=stold(argv[2]);
    ofnm->mns[2]=stold(argv[3]);
    ofnm->mns[3]=stold(argv[4]);
    ofnm->mns[4]=stold(argv[5]);
    ofnm->mns[5]=stold(argv[6]);
    ofnm->mns[6]=stold(argv[7]);
    ofnm->mns[7]=stold(argv[8]);
    ofnm->mns[8]=stold(argv[9]);
    ofnm->mns[9]=stold(argv[10]);
    ofnm->preci=stoi(argv[11]);
    ofnm->log=stoi(argv[12]);
    ofnm->x_calc();
    cout<<"\n";
    ofnm->x_show();
    return 0;
}
