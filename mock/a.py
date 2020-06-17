import time

t=int(input())
def ok():
    while(t>0):
        print('lol')
        k=int(input())
        while(k>2):
            if k!=3:
                print('lol')
                k=k-1
            t=t-1
    return t

def main():
    ok()

if __name__=='__main__':
     main()
