
    Node* T = bt.generateFromTraversal(inorder, preorder, 0, sizeof(inorder)/sizeof(inorder[0])-1);
    bt.Preorder(T);