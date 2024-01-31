// 6. Given a string S, the task is to find the bracket numbers.
// Example 1:
// Input: S = "(aa(bdc))p(dee)â€‹"
// Output: 1 2 2 1 3 3
// Explanation: The highlighted brackets in the given string (aa(bdc))p(dee) has been
// assigned the numbers as: 1 2 2 1 3 3.
// Example 2:
// Input: S = "(((()("
// Output: 1 2 3 4 4 5
// Explanation: The highlighted brackets in
// the given string (((()( has been assigned
// the numbers as: 1 2 3 4 4 5



vector<int> bracketNumbers(string S)
	{
	    // Your code goes here
	    vector<int> ans;
	    stack<int> s;
	    int count=0;
	    for(int i=0;i<S.size();i++)
	    {
	        if(S[i]=='(')
	        {
	             count++;
	            s.push(count);
	            ans.push_back(count);
	            
	        }
	        else if(S[i]==')')
	        {
	            ans.push_back(s.top());
	             s.pop();
	        }
	     }
	     return ans;
	}