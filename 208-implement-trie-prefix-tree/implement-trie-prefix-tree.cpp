struct node{
    node*link[26];
    bool flag=false;
    bool containkey(char ch){
        return (link[ch-'a']!=nullptr);
    }
    void put(char ch,node*n){
        link[ch-'a']=n;
    }
    node*get(char ch){
        return link[ch-'a'];
    }
    void setend(){
        flag=true;
    }
    bool isend(){
        return flag;
    }
};
class Trie {
    node*root;
public:
    Trie() {
        root=new node();
    }
    
    void insert(string word) {
        node*n=root;
        for(int i=0;i<word.length();i++){
            if(!n->containkey(word[i]))
            n->put(word[i],new node());
        
        n=n->get(word[i]);
        }
        n->setend();

    }
    
    bool search(string word) {
        node*n=root;
        for(int i=0;i<word.length();i++){
            if(!n->containkey(word[i]))
            return false;
            n=n->get(word[i]);
        }
        return n->isend();
    }
    
    bool startsWith(string prefix) {
        node*n=root;
        for(int i=0;i<prefix.length();i++){
    if(!n->containkey(prefix[i]))
        return false;
    n = n->get(prefix[i]);
}
        return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */