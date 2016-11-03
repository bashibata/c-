
struct node
{
    int number;
    struct node * next;
};

typedef struct node* nodeptr;
void create(nodeptr p);
int count(nodeptr p);
void print(nodeptr p);
nodeptr delete_by_number(nodeptr p);
nodeptr insert_node(nodeptr p,int set);
