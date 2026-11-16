/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    Node* cloneGraph(Node* node) {
        unordered_map<Node*, Node*> old2new;
        dfs(old2new, node);
        return old2new[node];

    }
    Node * dfs(unordered_map<Node*, Node*>& old2new,Node* node){
        if(!node)return nullptr;
        if(old2new.count(node)==1)return old2new[node];
        Node* copy = new Node(node->val);
        old2new[node]=copy;
        for(auto i : node->neighbors){
            copy->neighbors.push_back(dfs(old2new,i));
        }
        return copy;
    }
};
