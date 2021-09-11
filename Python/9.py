#Problem 9 Python (Hackerrank)
#Print the second largest number from list

if __name__ == '__main__':
    n = int(input())
    arr = map(int, input().split())
    print(sorted(set(arr))[-2])
        
