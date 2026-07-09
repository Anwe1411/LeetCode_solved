class WordDictionary {
    struct node{
        bool flag;
        node*child[26];
    };
public:
    node*getnode(){
        node*n=new node();
        n->flag=false;
        for(int i=0;i<26;i++)
        n->child[i]=nullptr;
        return n;
    }
    node*root;
    WordDictionary() {
        root=getnode();
    }
    
    void addWord(string word) {
        node*n=root;
        for(char ch:word){
            if(n->child[ch-'a']==nullptr)
              n->child[ch-'a']=getnode();
              n=n->child[ch-'a'];
        }
        n->flag=true;
    }
    bool helper(string &word, int idx, node* n) {
        if(n == NULL)
            return false;

        if(idx == word.size())
            return n->flag;

        if(word[idx] == '.'){
            for(int i = 0; i < 26; i++){
                if(helper(word, idx + 1, n->child[i]))
                    return true;
            }
            return false;
        }

        return helper(word, idx + 1, n->child[word[idx] - 'a']);
    }

    bool search(string word) {
        return helper(word,0,root);
    }
};

/**
 * Your WordDictionary object will be instantiated and called as such:
 * WordDictionary* obj = new WordDictionary();
 * obj->addWord(word);
 * bool param_2 = obj->search(word);
 */