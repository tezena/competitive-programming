class Solution {
    public boolean isValid(String s) {
        Stack <Character> stak=new Stack<Character>();
        int lengz=s.length();

        for(int i=0; i<lengz;i++){
            if(s.charAt(i)=='(' || s.charAt(i)=='{' || s.charAt(i)=='['){
                stak.push(s.charAt(i));
            }else if(s.charAt(i)==')' || s.charAt(i)=='}' || s.charAt(i)==']'){
                if(stak.empty())
                   return false;
                 else if(s.charAt(i)==')' && stak.peek()!='(')
                   return false;
                   else if(s.charAt(i)=='}' && stak.peek()!='{')
                   return false;
                   else if(s.charAt(i)==']' && stak.peek()!='[')
                   return false;
                   else
                   stak.pop();
            }
        }
        if(stak.empty())
        return true;
        else
        return false;
     
         
        
    
    }
}
