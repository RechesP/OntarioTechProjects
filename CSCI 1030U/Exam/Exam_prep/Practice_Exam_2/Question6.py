import math

class Point3D:
    def __init__(self,x,y,z):
        self._x = x
        self._y = y
        self._z = z

    def get_distance_to(self, other_point):
        return math.sqrt(math.pow((self._x - other_point._x),2)+math.pow((self._y - other_point._y),2)+math.pow((self._z - other_point._z),2))
    
p1 = Point3D(2.0, 2.0, 4.0)
p2 = Point3D(3.0, 1.0, 2.0)
print(f'distance between p1 and p2: {p1.get_distance_to(p2)}')
# output:  distance between p1 and p2: 2.449489742783178