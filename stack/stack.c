# include <stdio.h>

struct Node {
	ElementType Element;
	PtrToNode Next;
}

int IsEmpty(Stack S)
{
	return S->Next == NUll;
}

Stack CreateStack(void) 
{
	Stack S;
	S = (Stack)malloc(sizeof(struct Node));
	if(S == NULL) {
		printf("error!")
	}
	S->Next = NULL;
	MakeEmpty(S);
	return S;
}

void MakeEmpty(Stack S)
{
	if(S == NULL) {
		printf("Must use CreateStack() first");
	} else {
		while(!IsEmpty(S))
			pop(S);
	}
}

void Push(ElementType X, Stack S)
{
	PtrToNode TmpCell;

	TmpCell = (PtrToNode)malloc(sizeof(struct Node));
	if(TmpCell == NULL) {
		printf("error!");
	} else {
		TmpCell->Element = X;
		TmpCell->Next = S->Next;
		S->Next = TmpCell;
	}
}

ElementType Top(Stack S)
{
	if(!IsEmpty(s)) {
		return S->Next->Element;
	}
	printf("Empty Stack");
	return 0;
}


void Pop(Stack S) 
{
	PtrToNode FirstCell;

	if(IsEmpty(S)) {
		printf("Empty Stack")
	} else {
		FirstCell = S->Next;
		S->Next = S->Next->Next;
		free(FirstCell);
	}
}













