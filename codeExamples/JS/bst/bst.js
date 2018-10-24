    class BinarySearchTree {
        constructor (value) {
            this.root = new TreeNode(value)
        }

        addNode(value, node = this.root) {
            if (!node.leftChild && node.value > value) {
                node.leftChild = new TreeNode(value);
                return this;
            }
            if (!node.rightChild && node.value < value) {
                node.rightChild = new TreeNode(value);
                return this; 
            }
            return this.addNode(value, value > node.value ? node.rightChild : node.leftChild); 
        }

        deleteNode(value) {
            return this
        }

        searchNode (node, value) {
    }

    class TreeNode {
        constructor (value, leftChild = null, rightChild = null) {
            this.value = value;
            this.leftChild = leftChild;
            this.rightChild = rightChild;
        }
    }