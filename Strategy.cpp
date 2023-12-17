#include <iostream>

using namespace std;

class Strategy {
public:
    virtual void execute() = 0;
};

class ConcreteStrategyA : public Strategy {
public:
    void execute() override {
        cout << "Executing Strategy A" << endl;
    }
};

class ConcreteStrategyB : public Strategy {
public:
    void execute() override {
        cout << "Executing Strategy B" << endl;
    }
};

class Context {
    Strategy* strategy;
public:
    void setStrategy(Strategy* strategy) {
        this->strategy = strategy;
    }

    void executeStrategy() {
        strategy->execute();
    }
};

int main() {
    Context context;

    ConcreteStrategyA strategyA;
    ConcreteStrategyB strategyB;

    context.setStrategy(&strategyA);
    context.executeStrategy();

    context.setStrategy(&strategyB);
    context.executeStrategy();

    return 0;
}
