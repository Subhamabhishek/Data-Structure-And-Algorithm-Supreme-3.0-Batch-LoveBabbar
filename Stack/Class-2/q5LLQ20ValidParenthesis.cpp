class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        for(int i=0; i<s.length(); i++){
            char ch = s[i];

            //ch-> open/close bracket
            //open->sirf push karta hu
        //close->isme check karta hun ki same typr ka open h ya nehi 
            
            if(ch == '(' || ch == '[' || ch =='{'){
                st.push(ch);
            }

            else{
                //mujhe close bracket mila 
                //close bracket ke case mein 
                //mein stack ke top pr jata hun and check karta hun
                //ki mujhe same type ka open bracket mila ya nehi 
                if(ch == ')' && !st.empty() && st.top() == '('){
                    //bracket match -->cancel out
                    st.pop();
                }
                else if(ch == ']' && !st.empty() && st.top() == '['){
                    //bracket match -->cancel out
                    st.pop();
                }
                else if(ch == '}' && !st.empty() && st.top() == '{'){
                    //bracket match -->cancel out
                    st.pop();
                }
                else{
                    //bracket not match
                    return false; 
                }
            }
        }
        //check stack ka size
        if(st.size()==0){ //means valid string
            return true;
        }
        else 
            return false;
    }
};