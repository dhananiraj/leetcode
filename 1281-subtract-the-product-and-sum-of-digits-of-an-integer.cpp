class Solution {
	public:
	int subtractProductAndSum(int n) {
		int s=0,p=1,x;
		while(n>0){
			x=n%10;
			n/=10;
			s+=x;
			p*=x;
		}
		return p-s;		
	}
};
