class Game:
    def __init__(self,team_1_name,team_2_name):
        self.team_1_name = team_1_name
        self.team_1_score = 0
        self.team_2_name = team_2_name
        self.team_2_score = 0

    def str(self):
        return f"{self.team_1_name}: {self.team_1_score}\n{self.team_2_name}: {self.team_2_score}"

class BasketballGame(Game):
    def score(self, team_name):
        if team_name == self.team_1_name:
            self.team_1_score += 2
            return self.team_1_score
        elif team_name == self.team_2_name:
            self.team_2_score += 2
            return self.team_2_score

class HockeyGame(Game):
    def score(self, team_name):
        if team_name == self.team_1_name:
            self.team_1_score += 1
            return self.team_1_score
        elif team_name == self.team_2_name:
            self.team_2_score += 1
            return self.team_2_score
        
game1 = BasketballGame('Pacers', 'Raptors')
game1.score('Raptors')
game1.score('Pacers')
game1.score('Raptors')
game1.score('Raptors')
game1.score('Pacers')
print(f'{Game.str(game1)}')
# Pacers: 4
# Raptors: 6

game2 = HockeyGame('Leafs', 'Penguins')
game2.score('Leafs')
game2.score('Penguins')
game2.score('Penguins')
print(f'{Game.str(game2)}')
# Leafs: 1
# Penguins: 2