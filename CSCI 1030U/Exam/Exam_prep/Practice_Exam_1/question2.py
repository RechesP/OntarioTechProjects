def process_game(filename, handler):
    file = open(filename, 'r')
    text = file.read()
    # print(text)
    handler(text)

def print_game(game_state):
        for i in range(0,81):
            if i%9 == 0 and i != 0:
                print()
            print('|', game_state[i], '|', end="")

process_game('Exam/Exam_prep/Practice_Exam_1/game.txt', print_game)
# print(10%9)