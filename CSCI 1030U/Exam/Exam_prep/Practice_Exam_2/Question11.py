class Product:

    def __init__(self, name, price, weight):
        self.name = name
        self.price = price
        self.weight = weight

    def get_shipping_cost(self):
        return self.weight * 10

    def get_tax(self):
        return self.price * 0.13

    def get_total_price(self):
        return self.price + self.get_shipping_cost() + self.get_tax()
    
class Product_Test(Exception):
    def test_get_shipping_cost():
        if Product.get_shipping_cost("Item 1", 100.00, 10) != 10*10:
            print('Error')
        if Product.get_shipping_cost("Item 2", 100.00, 5) != 5*10:
            print('Error')
        if Product.get_shipping_cost("Item 3", 100.00, 1) != 1*10:
            print('Error')
        if Product.get_shipping_cost("Item 4", 100.00, 0) != 0*10:
            print('Error')
    def test_get_tax():
        if Product.get_tax("Item 1", 100.00, 10) != 100.00 * 0.13:
            print('Error')
        if Product.get_tax("Item 2", 10.00, 5) != 10.00 * 0.13:
            print('Error')
        if Product.get_tax("Item 3", 1.00, 1) != 1.00 * 0.13:
            print('Error')
        if Product.get_tax("Item 4", 0.00, 0) != 0.00 * 0.13:
            print('Error')

    def test_get_total_price():
        if Product.get_total_price("Item 1", 100.00, 10) != 100.00 + 10*10 + 100.00*0.13:
            print('Error')
        if Product.get_total_price("Item 2", 100.00, 5) != 10.00 + 5*10 + 10.00*0.13:
            print('Error')
        if Product.get_total_price("Item 3", 100.00, 1) != 1.00 + 1*10 + 1.00*0.13:
            print('Error')
        if Product.get_total_price("Item 4", 100.00, 0) != 0.00 + 0*10 + 0.00*0.13:
            print('Error')