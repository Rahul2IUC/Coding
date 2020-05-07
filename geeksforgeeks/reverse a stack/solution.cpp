void reverse(char *str, int len)
{
    stack<char> s;
	// pushing each characters of string into stack
    for(int i=0;i<len;i++) {
        s.push(str[i]);
    }
    int j=0;
	// printing the stack
    while(!s.empty()) {
        str[j] = s.top(); // in this we have to update in string itself printing stack does not work here cause duplicacy.
        s.pop();
        j++;
    }



}