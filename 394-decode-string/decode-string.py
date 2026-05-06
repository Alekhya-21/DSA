class Solution:
    def decodeString(self, s: str) -> str:
        stack1=[]
        stack2=[]
        temp=0
        for i in s:
            if(i.isdigit()):
                temp=temp*10+int(i)
            elif(i=='['):
                stack1.append(int(temp))
                temp=0
                stack2.append(i)
            elif(i.isalpha()):
                stack2.append(i)
            else:
                top1=stack1.pop()
                str=""
                while(stack2 and stack2[-1]!='['):
                    str=stack2.pop()+str
                stack2.pop()
        
                stack2.append(str*top1)
        res="".join(stack2)
        return res