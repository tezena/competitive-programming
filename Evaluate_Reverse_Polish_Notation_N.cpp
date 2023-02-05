typedef long long int lli;

class Solution {
public:
    int evalRPN(vector<string>& tokens)
    {
        vector<lli> operands;   

        for(string& token : tokens)
        {
            if(token == "+" || token == "-" || token == "*" || token == "/")
            {
                lli operand2 = operands.back();
                operands.pop_back();

                lli operand1 = operands.back();
                operands.pop_back();
                operands.push_back(evaluate(operand1, operand2, token));
            }
            else    
                operands.push_back(stoll(token));
        }
        
        return operands[0];
    }


    lli evaluate(lli op1, lli op2, string& operation)
    {
        if(operation == "+")
            return (op1+op2);
        else if(operation == "-")
            return (op1-op2);
        else if(operation == "*")
            return (op1*op2);
        else
            return (op1/op2);
    }
};
