def maxRevenue(salesRecord):
    result = []
    for row in salesRecord:
        max_sale = max(row)
        result.append(max_sale)
    return result



def main():
    salesRecord = []
    salesRecord_rows, salesRecord_cols = map(int, input().split())

    for idx in range(salesRecord_rows):
        salesRecord.append(list(map(int, input().split())))


    result = maxRevenue(salesRecord)
    print(" ".join([str(res) for res in result]))


if __name__ == "__main__":
    main()
