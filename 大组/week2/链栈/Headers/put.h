Status put(LinkStack *s, ElemType x) {  
    // 分配新的节点  
    LinkStackPtr newNode = (LinkStackPtr)malloc(sizeof(StackNode));  
    if (!newNode)
	 { // 分配失败  
        return ERROR;  
    }  
    newNode->data = x; // 设置节点数据  
    newNode->next = s->top; // 新节点指向原来的栈顶  
    s->top = newNode; // 更新栈顶指针  
    s->count++; // 栈中元素个数加一  
    return SUCCESS;  
} 
