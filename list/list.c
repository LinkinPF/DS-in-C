# include <stdio.h>

# include "list.h"

struct Node {
	ElementType Element;
	Position Next;
};

// return true if L is empty
int IsEmpty(List L)
{
	return L->Next == NULL;
}

int IsLast(Position P, List L)
{
	return P->Next == NULL;
}

Position Find(ElementType X, List L)
{
	Position P;
	P = L->Next;
	while(P!=NULL && P->Element != X)
		P = P->Next;

	return P;
}

Position FindPrevious(ElementType X, List L)
{
	Position P;
	P = L;
	while(p->Next != NULL && p->Next->Element != X)
		P = P->Next;
	return P;
}

void Delete(ElementType X, List L)
{
	Position P, TmpCell;
	P = FindPrevious(X,L);

	if(!IsLast(P,L))
	{
		TmpCell = P->Next;
		P->Next = TmpCell->Next;
		free(TmpCell);
	}
}

void Insert(ElementType X, List L, Position P)
{
	Position TmpCell;

	TmpCell = malloc(sizeof(struct Node));
	if(TmpCell == NULL)
		printf("error");

	TmpCell->Element = X;
	TmpCell->Next = P->Next;
	P->Next = TmpCell;
}

void DeleteList(List L)
{
	Position P,TmpCell;

	P = L->Next;
	L->Next = NULL;
	while(P!=NULL)
	{
		TmpCell = P->Next;
		free(P);
		P = TmpCell;
	}
}














