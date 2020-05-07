void reverse(char *str, int len)
{
    stack<char> k;
	// pushing each characters of string into stack
    for(int i=0;i<len;i++) {
        k.push(str[i]);
    }
    int j=0;
	// printing the stack
    while(!k.empty()) {
        str[j] = k.top(); // in this we have to update in string itself printing stack does not work here cause duplicacy.
        k.pop();
        j++;
    }



}
