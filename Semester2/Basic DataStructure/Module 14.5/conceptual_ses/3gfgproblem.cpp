/* // User function Template for C++

// Function to reverse first k elements of a queue.
queue<int> modifyQueue(queue<int> q, int k) {
    // add code here.
   stack<int> st;
   for(int i = 0; i<k; i++)
   {
       st.push(q.front());
       q.pop();
   }
    queue<int> q1;
    while(!st.empty())
    {
        q1.push(st.top());
        st.pop();
    }
    while(!q.empty())
    {
        q1.push(q.front());
        q.pop();
    }
    return q1;
} */