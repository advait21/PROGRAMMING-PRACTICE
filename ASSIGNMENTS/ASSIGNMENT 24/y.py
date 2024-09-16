def WorkingWeeks(projC):
    max_modules = 0
    total_sum = 0
    rest_sum = 0

    for modules in projC:
        total_sum += modules
        if modules > max_modules:
            max_modules = modules

    rest_sum = total_sum - max_modules
    return rest_sum + min(max_modules, rest_sum + 1)

def main():
    projC = []
    projC_size = int(input())
    projC = list(map(int, input().split()))
    result = WorkingWeeks(projC)
    print(result)

if __name__ == "__main__":
    main()
