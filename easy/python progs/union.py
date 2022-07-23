def doUnion(self,a,n,b,m):
        
        a.extend(b)
        return len(set(a))
