TVisitante obteneraux(TGrupoABB grupoABB, int& n){
    if(grupoABB == NULL){
        return NULL;
    }
    int cant;
    if(grupoABB->izq == NULL) cant = 1;
    else cant = (cantidadVisitantes(grupoABB->izq)+1);
    if(n == cant) return grupoABB->visitante;
    else if(n < cant) obteneraux(grupoABB->izq, n);
    else obteneraux(grupoABB->der, n - cant);
}

TreeNode* findNthElement(int n, TreeNode* tree) {
    if (tree == NULL) {
        return NULL;
    }
    int currentNum = tree->left == NULL ? 1 : tree->left->nodeCount + 1;
    return n == currentNum ? tree // Found it!
         : n <  currentNum ? findNthElement(n, tree->left) 
                           : findNthElement(n - currentNum, tree->right);
}