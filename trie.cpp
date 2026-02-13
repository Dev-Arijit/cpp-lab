#include <iostream>
using namespace std;

class TrieNode
{
public:
    char data;
    TrieNode *children[26];
    bool isTerminal;
    TrieNode(char ch)
    {
        data = ch;
        for (int i = 0; i < 26; i++)
        {
            children[i] = NULL;
        }
        isTerminal = false;
    }
};

class trie
{
public:
    TrieNode *root;

    trie()
    {
        root = new TrieNode('\0');
    }
    void insertUtil(TrieNode *root, string word)
    {
        if (word.length() == 0)
        {
            root->isTerminal = true;
            return;
        }
        int index = word[0] - 'A';
        TrieNode *child;
        if (root->children[index])
        {
            child = root->children[index];
        }
        else
        {
            child = new TrieNode(word[0]);
            root->children[index] = child;
        }

        insertUtil(child, word.substr(1));
    }

    void insertWord(string word)
    {
        insertUtil(root, word);
    }

    bool searchUtil(TrieNode *root, string word)
    {
        if (word.length() == 0)
        {
            return root->isTerminal;
        }

        int index = word[0] - 'A';
        TrieNode *child;

        if (root->children[index])
        {
            child = root->children[index];
        }
        else
        {
            return false;
        }

        return searchUtil(child, word.substr(1));
    }

    bool searchWord(string word){
        return searchUtil(root,word);
    }

    void removeUtil(TrieNode *root, string word)
    {
        if (word.length() == 0)
        {
            root->isTerminal = false;
            return;
        }
        int index = word[0] - 'A';
        TrieNode *child;
        if (root->children[index])
        {
            child = root->children[index];
        }

        removeUtil(child, word.substr(1));
    }

    void removeWord(string word)
    {
        removeUtil(root, word);
    }
};

int main(int argc, char const *argv[])
{
    trie *t = new trie();
    t->insertWord("ARM");
    t->insertWord("DO");
    t->insertWord("TIME");
    cout << "Present or not " << t->searchWord("TIME") << endl;
    t->removeWord("DO");
    cout << "Present or not " << t->searchWord("DO") << endl;

    return 0;
}
