#include<iostream>
#include<string>
using namespace std;

class TrieNode{
    public:
    char data;
    TrieNode* children[26];
    bool isTerminate;

    TrieNode(char ch){
        data = ch;
        for(int i=0; i<26; i++){
            children[i] = NULL;
        }
        isTerminate = false;
    }
};

class Trie{
    TrieNode* root;
    public:
    Trie(){
        root = new TrieNode('\0');
    }
    void insertUntil(TrieNode* root , string word){
        if(word.size() == 0){
            root->isTerminate = true;
            return;
        }
        int index = word[0] - 'A';
        TrieNode* child;
        // present
        if(root->children[index] != NULL){
            child = root->children[index];
        }
        else{
            child = new TrieNode(word[0]);
            root->children[index] = child;
        }
        insertUntil(child , word.substr(1));
    }

    void insertWord(string word){
        insertUntil(root , word);
    }

    bool searchUntil(TrieNode* root , string word){
        if(word.size() == 0)
        return root->isTerminate;

        int index = word[0] - 'A';
        TrieNode* child;
        if(root->children[index] != NULL){
            child = root->children[index];
        }
        else{
            return false;
        }

        return searchUntil(child , word.substr(1));
        
    }

    bool searchWord(string word){
        return searchUntil(root , word);
    }

};

int main(){
    Trie t;
    t.insertWord("ABCD");
    cout << "present or not " << t.searchWord("ABD");
}