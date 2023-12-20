#include <iostream>
#include <map>

namespace CP {

template <typename K, typename V>
class map_bst {
private:
    struct Node {
        K key;
        V value;
        Node* left;
        Node* right;

        Node(const K& k, const V& v) : key(k), value(v), left(nullptr), right(nullptr) {}
    };

    Node* root;

    // Helper function to recursively insert a key-value pair into the BST
    Node* insert(Node* node, const K& key, const V& value) {
        if (node == nullptr) {
            return new Node(key, value);
        }

        if (key < node->key) {
            node->left = insert(node->left, key, value);
        } else if (key > node->key) {
            node->right = insert(node->right, key, value);
        } else {
            // Handle duplicate keys (if needed)
            // You can choose to update the value or ignore duplicates
        }

        return node;
    }

    // Helper function to recursively split the BST based on a given key
    std::pair<Node*, Node*> split(Node* node, const K& key) {
        if (node == nullptr) {
            return {nullptr, nullptr};
        }

        if (key <= node->key) {
            auto [left_part, right_part] = split(node->left, key);
            node->left = right_part;
            return {left_part, node};
        } else {
            auto [left_part, right_part] = split(node->right, key);
            node->right = left_part;
            return {node, right_part};
        }
    }

public:
    map_bst() : root(nullptr) {}

    // Function to insert a key-value pair into the BST
    void insert(const K& key, const V& value) {
        root = insert(root, key, value);
    }

    // Function to split the BST based on a given key
    void split(const K& key) {
        auto [left_part, right_part] = split(root, key);

        // Process the left and right parts as needed
        // In this example, we will simply print the values
        std::cout << "Left part after split: ";
        printInorder(left_part);
        std::cout << std::endl;

        std::cout << "Right part after split: ";
        printInorder(right_part);
        std::cout << std::endl;

        // Update the root to the right part
        root = right_part;
    }

    // Function to print the BST in inorder traversal
    void printInorder(Node* node) const {
        if (node != nullptr) {
            printInorder(node->left);
            std::cout << "{" << node->key << ", '" << node->value << "'} ";
            printInorder(node->right);
        }
    }
};

} // namespace CP

int main() {
    CP::map_bst<int, char> a;
    a.insert(10, 'a');
    a.insert(20, 'b');
    a.insert(30, 'c');
    a.insert(40, 'd');
    a.insert(50, 'e');
    a.insert(60, 'f');

    std::cout << "Original BST: ";
    a.printInorder(a);
    std::cout << std::endl;

    // Split the BST at key 25
    a.split(25);

    std::cout << "Updated BST: ";
    a.printInorder(a);
    std::cout << std::endl;

    return 0;
}
