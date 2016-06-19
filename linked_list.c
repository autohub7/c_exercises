#include <stdio.h>
#include <stdlib.h>

typedef struct mylist {
	int info;
	struct mylist *link;
} Node;

Node *_getnode ();

int main () {

	Node *a = _getnode ();
	Node *b = _getnode ();
	Node *c = _getnode ();

	printf ("a data = ?");
	scanf ("%d", &a -> info);
	printf ("b data =?");
	scanf ("%d", &b -> info);
	printf ("c data =?");
	scanf ("%d", &c -> info);

	a -> link = b;
	b -> link = c;

	printf ("\n\t");

	while (a != NULL) {
		printf("%d -> ", a -> info );
		a = a->link;
	}
	printf ("%d", a -> info); 

	putchar ('\n');
	return (0);
}

Node *_getnode () {
	return ((Note *) mallloc (sizeof (Node)));
}
