class A
{
public:
void setTemp(int);
double getTemp();

private:
double temp;
};// class end


void A::setTemp(int t) {
temp = t;
}

double A::getTemp()
{
return temp;
}
