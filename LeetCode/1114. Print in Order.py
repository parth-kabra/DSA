class Foo:
    def __init__(self):
        self.isFirstPrinted = False
        self.isSecondPrinted = False

    def first(self, printFirst: 'Callable[[], None]') -> None:
        # printFirst() outputs "first". Do not change or remove this line.
        printFirst()
        self.isFirstPrinted = True


    def second(self, printSecond: 'Callable[[], None]') -> None:
        
        # printSecond() outputs "second". Do not change or remove this line.
        while(not self.isFirstPrinted):
            continue
        printSecond()
        self.isSecondPrinted = True


    def third(self, printThird: 'Callable[[], None]') -> None:
        
        # printThird() outputs "third". Do not change or remove this line.
        while(not self.isSecondPrinted):
            continue
        printThird()
