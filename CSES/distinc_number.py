import sys
def main():
    n = int(input().strip())
    x = list(map(int, input().split()))
    x.sort()
    distinct = 1
    for i in range(1, n):
        if x[i] != x[i - 1]:
            distinct += 1
    print(distinct)

if __name__ == "__main__":
    main()
