#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Box {
private:
    int length, breadth, height;
    
public:
    Box() {
        length = breadth = height = 0;
    }
    Box(int l, int b, int h) {
        length = l;
        breadth = b;
        height = h;
    }
    Box(Box &box) {
        length = box.length;
        breadth = box.breadth;
        height = box.height;
    }
    int GetLength() {
        return length;
    }
    int GetBreadth() {
        return breadth;
    }
    int GetHeight() {
        return height;
    }
    long long CalculateVolume() {
        return (long long) length * breadth * height;
    }
    bool operator<(Box& b) {
        if (length < b.length) {
            return true;
        } else if (breadth < b.breadth && length == b.length) {
            return true;
        } else if (height < b.height && breadth == b.breadth && length == b.length) {
            return true;
        } else {
            return false;
        }
    }
    friend ostream& operator<<(ostream&, Box& b);
};

ostream& operator<<(ostream& out, Box& b) {
    out << b.GetLength() << " " << b.GetBreadth() << " " << b.GetHeight();
    return out;
}

void check2()
{
    int n;
    cin>>n;
    Box temp;
    for(int i=0;i<n;i++)
    {
        int type;
        cin>>type;
        if(type ==1)
        {
            cout<<temp<<endl;
        }
        if(type == 2)
        {
            int l,b,h;
            cin>>l>>b>>h;
            Box NewBox(l,b,h);
            temp=NewBox;
            cout<<temp<<endl;
        }
        if(type==3)
        {
            int l,b,h;
            cin>>l>>b>>h;
            Box NewBox(l,b,h);
            if(NewBox<temp)
            {
                cout<<"Lesser\n";
            }
            else
            {
                cout<<"Greater\n";
            }
        }
        if(type==4)
        {
            cout<<temp.CalculateVolume()<<endl;
        }
        if(type==5)
        {
            Box NewBox(temp);
            cout<<NewBox<<endl;
        }

    }
}

void constructors_main()
{
    check2();
}
