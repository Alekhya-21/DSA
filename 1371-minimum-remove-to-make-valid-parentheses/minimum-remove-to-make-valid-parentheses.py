class Solution:
    def minRemoveToMakeValid(self, s: str) -> str:
        arr=list(s)
        openn=0
        close=0
        i=0
        while(i<len(arr)):
            if(arr[i]=='('):
                openn+=1
                i+=1
            elif(arr[i]==')'):
                if(close<openn):
                    close+=1
                    i+=1
                else:
                    arr.pop(i)
            else:
                i+=1
        i=len(arr)-1
        while(i>=0):
            if(arr[i]=='(' and openn!=close):
                arr.pop(i)
                openn-=1
            i-=1
        res=''.join(arr)
        return res