#include<iostream>
using namespace std;

class TrieNode{
    public:
    char data;
    TrieNode* children[26];
    bool isTerminal;

    TrieNode(char ch){
        data = ch;
        for(int i=0; i<26; i++){
            children[i] = NULL;
        }
        isTerminal = false;
    }
};

class Trie{
    public:
    TrieNode* root;
    Trie(){
        root = new TrieNode('\0');
    }

    void insertUntil(TrieNode* root , string word){
        if(word.length() == 0){
            root->isTerminal = true;
            return;
        }

        // assumption , word will be in CAPS
        int index = word[0] - 'A';
        TrieNode* child;

        //present
        if(root->children[index] != NULL){
            child = root->children[index];
            // cout << "present" << endl;
        }
        else{
            //absent
            child = new TrieNode(word[0]);
            root->children[index] = child;
        }

        //RECURSION
        insertUntil(child , word.substr(1));
    }

    void insertWord(string word){
        insertUntil(root , word);
    }

    bool searchUntil(TrieNode* root , string word){
        if(word.length() == 0){
            return root->isTerminal;
        }
        int index = word[0]-'A';
        TrieNode* child;

        //present
        if(root->children[index] != NULL){
            child = root->children[index];
        }
        else{
            //absent
            return false;
        }
        //Recursion
        return searchUntil(child , word.substr(1));
    }

    bool searchWord(string word){
        return searchUntil(root , word);
    }

};

int main(){
    Trie *t = new Trie();
    t->insertWord("ABCD");

    cout << "Present or Not " << t->searchWord("ABD") << endl;
}