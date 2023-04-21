//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:

    struct Node
    {
        char c;
        Node* adj[26] = {NULL};
        Node(char ch)
        {
            c = ch;
        }
    };
    
    void insert_st(Node* head, string& s)
    {
        int n = s.length();
        Node* temp = head;
        int i = 0;
        while(i < n)
        {
            if(temp->adj[s[i] - 'a'] == NULL)
                temp->adj[s[i] - 'a'] = new Node(s[i]);
                
            temp = temp->adj[s[i] - 'a'];
            i++;
        }
        return;
    }
    
    bool trav(Node* head, string& s)
    {
        int n = s.length();
        int i = 0;
        Node* temp = head;
        while(i < n)
        {
            if(temp->adj[s[i] - 'a'] == NULL)
                return false;
                
            temp = temp->adj[s[i] - 'a'];
            i++;
        }
        return true;
    }

    int prefixSuffixString(vector<string> &s1,vector<string>& s2){
        Node* head = new Node('0');
        Node* tail = new Node('0');
        for(int i = 0;i<s1.size();i++)
            insert_st(head, s1[i]);
        for(int i = 0;i<s1.size();i++)
        {
            string temp = s1[i];
            reverse(temp.begin(), temp.end());
            insert_st(head, s1[i]);
            insert_st(tail, temp);
        }
        int ans = 0;
        for(int i = 0;i<s2.size();i++)
        {
            string temp = s2[i];
            reverse(temp.begin(), temp.end());
            if(trav(head, s2[i]) || trav(tail, temp))
                ans++;
        }
        return ans;
    }
};

//{ Driver Code Starts.


int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        string str1,str2,newline;
        if(i==0)
        getline(cin,newline);
        getline(cin,str1);
        getline(cin,str2);
        // getline(cin,newline);
        // cout<<str1<<endl<<str2<<endl;
        vector<string> s1,s2;
        stringstream ss1(str1);
        stringstream ss2(str2);
        string str;
        while(ss1>>str){
            s1.push_back(str);
        }
        while(ss2>>str){
            s2.push_back(str);
        }
        Solution ob;
        cout<<ob.prefixSuffixString(s1, s2)<<endl;
    }
}
// } Driver Code Ends
