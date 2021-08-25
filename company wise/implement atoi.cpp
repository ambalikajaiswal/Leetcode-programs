class Solution{
  public:
    /*You are required to complete this method */
    int atoi(string str) {
        for(int i=0;i<str.length();i++)
        {
            if(str[i]>='0'&&str[i]<='9'||str[i]=='-')
            continue;
            else
            return -1;
        }
        return stoi(str);
    }
};
