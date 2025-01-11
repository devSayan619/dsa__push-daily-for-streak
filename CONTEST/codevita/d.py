def buzz_day_sale(N, ids, costs, A):
    # Create a mapping of item IDs to their costs
    item_cost_map = {ids[i]: costs[i] for i in range(N)}
    
    # To hold the free items information
    free_items_info = {}

    # Calculate free items for each ID
    for i in range(N):
        current_id = ids[i]
        free_items = []
        for j in range(N):
            if current_id % ids[j] == 0 and ids[j] != current_id:
                free_items.append(ids[j])
        free_items_info[current_id] = free_items

    max_free_count = 0
    max_free_worth = 0

    # Check each item to see how many free items can be obtained
    for i in range(N):
        current_id = ids[i]
        current_cost = costs[i]

        # Check how many can be bought with the budget A
        if current_cost <= A:
            # Maximum quantity Veda can buy of this item
            max_quantity = A // current_cost

            # Count free items and their total worth
            total_free_items = max_quantity * len(free_items_info[current_id])
            total_free_worth = sum(item_cost_map[free_id] * max_quantity for free_id in free_items_info[current_id])

            # Update max counts and worth
            if (total_free_items > max_free_count or 
                (total_free_items == max_free_count and total_free_worth > max_free_worth)):
                max_free_count = total_free_items
                max_free_worth = total_free_worth

    return max_free_count, max_free_worth

# Reading input
N = int(input())
ids = list(map(int, input().split()))
costs = list(map(int, input().split()))
A = int(input())

# Getting the result
result = buzz_day_sale(N, ids, costs, A)

# Printing the output
print(result[0], result[1])