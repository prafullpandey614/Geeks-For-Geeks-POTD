 map<int,int>mp;
        for(int i=0;i<size;i++)
        {
            mp[preMirror[i]] = i;
        }
        Node* root = new Node(pre[0]);
        vector<int>vis(100000+1,0);
        Node* ans = root;
        stack<Node*>st;
        st.push(root);
        for(int i=1;i<size;i++)
        {
            int x = mp[pre[i]];
            while(!st.empty())
            {
                int y = mp[st.top()->data];
                if(x<y){
                    st.pop();
                }
                else
                {
                    break;
                }
            }
            Node* a = st.top();
            if(vis[a->data]==0)
            {
                Node* b = new Node(pre[i]);
                a->left = b;
                vis[a->data] = 1;
                st.push(b);
            }
            else 
            {
                Node* b = new Node(pre[i]);
                a->right = b;
                st.pop();
                st.push(b);
            }
        }
        return ans;
