class Solution:
    def evalRPN(self, tokens: List[str]) -> int:
        ls=[]
        op=["+", "-", "*", "/"]
        for x in tokens:
            if (x not in op):
                ls.append(int(x))
            else:
                num2= ls.pop()
                num1= ls.pop() 
                if ( x== "+" ):
                    ls.append( num1+num2)
                elif ( x== "-"):
                    ls.append( num1-num2)
                elif ( x=="*"):
                    ls.append( num1*num2)
                elif ( x=="/"):
                    ls.append( int(num1/num2) )
        return ls.pop()
