int Partition(int A[],int left,int right){
	int temp=A[left];
	while(left<right){
		while(A[right]>temp)
		right--;
		A[left]=A[right];
		while(A[left]>=temp)
		left++;
		A[right]=A[left];
	}
	A[left]=temp;
	return left;
}
void quickSort(int A[],int left,int right){
	if(left<right){
		int pos=Parition(A,left,right);
		quickSort(A,left,pos-1);
		quickSort(A,pos+1,right);
	}
}
