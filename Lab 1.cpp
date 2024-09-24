//Created by: Rafael Pompa
//Date: 9/18
//this program is used to design the code for Project 1 by taking a given input (unit) to turn it into an output (a different unit)

#include <iostream>
using namespace std;

int main() {
//setting up the coding process
    float hour =0;
    float minutes =0;
    float seconds =0;
    float Jiffy =0;
    float nanoseconds =0;
    float Shake =0;
    float Moment =0;

//picking a starting hour
    cout<<"please enter a hour : ";
    cin>>hour;
    cout<<"The distance away from the Mall is "<<hour<<"\n";
//converting hour to minutes
    minutes =hour*60;
    cout<<hour<<"*60="<<minutes<<"\n";

    minutes =minutes/1.0;
    cout<<minutes<<"/1.0="<<minutes<<"\n";

//converting minutes to seconds
    seconds =minutes*60;
    cout<<minutes<<"*60="<<seconds<<"\n";

    seconds =seconds/1.0;
    cout<<seconds<<"/1.0="<<seconds<<"\n";
//converting seconds to jiffy
    Jiffy =seconds*0.01;
    cout<<seconds<<"*0.01="<<Jiffy<<"\n";

//converting seconds to nanoseconds
    nanoseconds =seconds*1000000000;
    cout<<seconds<<"*1000000000="<<nanoseconds<<"\n";

    nanoseconds =nanoseconds/1.0;
    cout<<nanoseconds<<"*0.01="<<nanoseconds<<"\n";

//turning nanoseconds to shake
    Shake =nanoseconds/10;
    cout<<nanoseconds<<"/10="<<Shake<<"\n";

//turning seconds to moment
    Moment= seconds/90.0;
    cout<<seconds<<"/90"<<Moment<<"\n";

//displaying all the outputs
    cout<< "The distance away from the Mall in Jiffy is " << Jiffy<< " ! " << " \n ";
    cout<< "The distance away from the Mall in Moment is " << Moment<< " ! " << " \n ";
    cout<< "The distance away from the Mall in Shake is " << Shake<< " ! " << " \n ";
//I was wondering why it wouldn't show the whole number  for jiffy.
}