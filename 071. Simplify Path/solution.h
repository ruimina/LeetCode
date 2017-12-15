class Solution {
public:
    string simplifyPath(string path) {
        stack<string> mystk;
        string temp;
        stringstream ss(path);
        while(getline(ss, temp, '/')){
            if(temp == ".." && !mystk.empty()) mystk.pop();
            else if(temp != ".." && temp != "" && temp != ".") mystk.push(temp);
        }
        string out;
        if(mystk.empty()) return "/";
        while(!mystk.empty()){
            out = "/" + mystk.top() + out;
            mystk.pop();
        }
        return out;
    }
};