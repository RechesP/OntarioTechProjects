def greedy_change(amount, denoms):
    denoms.sort(reverse=True)
    list = []
    for denom in denoms:
        for i in range(0,(amount//denom)):
            list.append(denom)
        amount -= denom*(amount//denom)
    return list

denoms = [1,2,5,10,20,50]

print(f'greedy_change(174, {denoms}) == {greedy_change(174, denoms)}')
# output: greedy_change(174, [1,2,5,10,20,50]) == [50, 50, 50, 20, 2, 2]

denoms.sort(reverse=True)

print(f'greedy_change(99, {denoms}) == {greedy_change(99, denoms)}')
# output: greedy_change(99, [1,2,5,10,20,50]) == [50, 20, 20, 5, 2, 2]