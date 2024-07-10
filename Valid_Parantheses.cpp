    stack<char> stack;
    for (char x : s) 
    {
        if (x == '(' || x == '{' || x == '[')
        {
            stack.push(x);
        }
        else
        {
            if (stack.empty())
                return false;
            char top = stack.top();
            stack.pop();
            if ((x == ')' && top != '(') || (x == '}' && top != '{') || (x == ']' && top != '[')) {
                return false;
            }
        }
    }

    return stack.empty();
