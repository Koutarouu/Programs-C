#include<stdio.h>

int main(){
	int n,i,j,mul,dig;
	scanf("%d",&n);
	int arr[1000] = {0};
	arr[0]=1;
	int len=1;
	for(i=2;i<=n;i++){
		int carry=0;
		for(j=0;j<len;j++){
			mul = i * arr[j] + carry;
			dig = mul % 10;
			arr[j] = dig;
			carry = mul/10;
		}
		
		while(carry){
			len++;
			dig = carry % 10;
			arr[len-1] = dig;
			carry /= 10;
		}
	}
	
	for(i = len - 1; i>=0; i--){
		printf("%d",arr[i]);
	}
	
	
	return 0;
}
