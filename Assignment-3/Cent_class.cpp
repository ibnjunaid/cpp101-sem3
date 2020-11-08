#include<iostream>
using namespace std;
class Cents{

private:
	int m_cents;

public:
	Cents(int cents): m_cents(cents) {}

	// add Cents + Cents using a friend function
	friend Cents operator +(const Cents &c1, const Cents &c2);
    
    friend Cents operator-(const Cents &c1, const Cents &c2);

    friend Cents operator/(const Cents &c1, const Cents &c2);

    friend Cents operator*(const Cents &c1, const Cents &c2);

    //getCents is an accessor function which returns censt
	int getCents() const { return m_cents; }

    bool operator !=(const Cents &c){
        return (this->getCents() not_eq c.getCents());
    }

    bool operator ==(const Cents &c){
        return not(this->getCents() not_eq c.getCents());
    }

    bool operator >(const Cents &c){
        return not (this->getCents() < c.getCents());
    }

    bool operator <(const Cents &c){
        return not (this->getCents()> c.getCents());
    }
};

// note: this function is not a member function!
Cents operator+(const Cents &c1, const Cents &c2){
	Cents temp=c1.m_cents + c2.m_cents;
	return temp;
}

Cents operator-(const Cents &c1, const Cents &c2){
	Cents temp=c1.m_cents - c2.m_cents;
	return temp;
}
Cents operator*(const Cents &c1, const Cents &c2){
	Cents temp=c1.m_cents * c2.m_cents;
	return temp;
}
Cents operator/(const Cents &c1, const Cents &c2){
	Cents temp=c1.m_cents / c2.m_cents;
	return temp;
}


int main(){
	Cents cents1(6);
	Cents cents2(8);
	//Cents centsSum(cents1 + cents2 );
	Cents centsSum = cents1 + cents2;
	cout << "I have " << centsSum.getCents() << " cents.\n";
    std::cout<< (cents1 < cents2)<<std::endl;
    std::cout<< (cents1 != cents2);
	return 0;
}
