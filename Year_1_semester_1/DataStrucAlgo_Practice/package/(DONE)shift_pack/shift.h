void shift(int k) {
	// TODO: Add your code here
	if(k==0) return;
	if(k<0) k = mSize+k;
	k = k%mSize;
	auto it = begin();
	for(int i=0;i<k;i++){
		it++;
	}
	mHeader->prev->next = mHeader->next;
	mHeader->next->prev = mHeader->prev;
	tmp->prev->next = mHeader;
	mHeader->prev = tmp->prev;
	tmp->prev = mHeader;
	mHeader->next = tmp;

}
