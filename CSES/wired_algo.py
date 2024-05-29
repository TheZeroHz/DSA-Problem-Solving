def main():
    n = int(input().strip())
    outputs=[n] 
    while n != 1:
        if n % 2 == 0:
            n = n // 2
        else:
            n = 3 * n + 1
        outputs.append(n)
    print(" ".join(map(str, outputs)))
    
if __name__ == "__main__":
    main()
