#include <bits/stdc++.h>
#include <iostream>

int main()
{
    std::stack<int> st;
    st.push(2); // Use push to insert elements into the stack
    st.push(5);
    st.push(7);
    st.push(9);

    while (!st.empty())
    {
        std::cout << st.top() << std::endl;
        st.pop();
    }

    return 0;
}
