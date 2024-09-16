def product_of_even_digits(rating):
    product = 1
    for digit in rating:
        digit = int(digit)
        if digit % 2 == 0 and digit != 0:
            product *= digit
    return product

def product_of_odd_digits(rating):
    product = 1
    for digit in rating:
        digit = int(digit)
        if digit % 2 != 0:
            product *= digit
    return product

def calculate_bonus_rating(rating):
    even_product = product_of_even_digits(rating)
    odd_product = product_of_odd_digits(rating)
    bonus_rating = even_product - odd_product
    return bonus_rating if bonus_rating >= 0 else 0

def solution(input_from_question):
    input_list = input_from_question.strip().split()
    n = int(input_list[0])
    movie_ratings = list(map(int, input_list[1:]))

    bonus_ratings = []
    for rating in movie_ratings:
        rating_str = str(rating)
        bonus_ratings.append(calculate_bonus_rating(rating_str))

    return ' '.join(str(bonus) for bonus in bonus_ratings)

# Input from user
n = int(input())
movie_ratings = input()

input_from_question = f"{n}\n{movie_ratings}"

print(solution(input_from_question))
