#include <boost/multiprecision/cpp_int.hpp>
using namespace boost::multiprecision;
using namespace std;

int128_t boost_product(long long A, long long B)
{
    int128_t ans = (int128_t) A * B;
    return ans;
}

int main()
{
    long long n,d;
    while(1)
    {
    	cin>>n>>d;
    	if(n==0 && d==0)
    	break;
    	cout<<boost_product(n,d)<<endl;
    }
    return 0;
}
