def solution(input_from_question):
    # Split the input into separate parts
    votes_per_wing = list(map(int, input_from_question[0].split()))
    party_leader_votes = list(map(int, input_from_question[1].split()))

    # Unpack the votes_per_wing list into separate variables
    I, J, K = votes_per_wing

    # Unpack the party_leader_votes list into separate variables
    X, Y, Z = party_leader_votes

    # Calculate the total votes cast overall
    total_votes = I + J + K

    # Calculate the total votes received by the party leader after hacking each EVM
    total_votes_hacked_A = X + J + K
    total_votes_hacked_B = I + Y + K
    total_votes_hacked_C = I + J + Z

    # Check if any of the hacked totals is greater than half of the overall votes
    if total_votes_hacked_A > total_votes / 2 or total_votes_hacked_B > total_votes / 2 or total_votes_hacked_C > total_votes / 2:
        return "YES"
    else:
        return "NO"

# Read input from standard input
input_from_question = [input().strip() for _ in range(2)]

# Call the solution function and print the output
print(solution(input_from_question))
