struct ArNode
{
    char value;
    ArNode* nodes[2];
    ArNode(char _v)
    {
        value = _v; nodes[0] = nodes[1] = 0;
    }
};


struct ArTree
{
    ArNode* root;
};



void stackear(char *a, int tamanho, int parentesis, int sumas, int productos)
{
    if(parentesis == 0 && sumas ==  0 && productos == 0) 
}