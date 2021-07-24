#include<iostream>
#include<string>
using namespace std;

class Time{
    private:
        int h=0,m=0,s=0;
    public:
        entertime();
        display();
        alltoseconds();
};
Time::entertime(){
    cout<<"Enter time: "<<"hours ? ";
    cin>>h;
    cout<<" minutes ? ";
    cin>>m;
    cout<<"seconds ? ";
    cin>>s;
}
Time::display(){
    string hh=to_string(h);
    string mm=to_string(m);
    string ss=to_string(s);
    if(h<10){
        hh="0"+to_string(h);
    }
    if(m<10){
        mm="0"+to_string(m);
    }
    if(s<10){
        ss="0"+to_string(s);
    }
    cout<<"Time is "+hh+" : "+mm+" : "+ss<<endl;4;
}
Time::alltoseconds(){
    int times=h*3600+m*60+s;
    cout<<"Time in total secons is "<<times;
}
main(){
    Time mytime;
    mytime.entertime();
    mytime.display();
    mytime.alltoseconds();
}