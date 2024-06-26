#include <iostream>
#include <string>
#include <vector>
#include <limits>

class Ball {
public:
    Ball(const std::string& name, int size) : name(name), size(size) {}

    std::string GetName() const {
        return name;
    }

    int GetSize() const {
        return size;
    }

private:
    std::string name;
    int size;
};

class BallCollection {
public:
    void AddBall(const Ball& ball) {
        balls.push_back(ball);
    }

    Ball GetBall(int index) const {
        if (index >= 0 && index < balls.size()) {
            return balls[index];
        }
        throw std::out_of_range("Invalid ball index");
    }

    int GetNumberOfBalls() const {
        return balls.size();
    }

    Ball GetSmallestBall() const {
        if (balls.empty()) {
            throw std::logic_error("No balls in the collection");
        }

        Ball smallestBall = balls[0];
        for (const Ball& ball : balls) {
            if (ball.GetSize() < smallestBall.GetSize()) {
                smallestBall = ball;
            }
        }
        return smallestBall;
    }

    Ball GetLargestBall() const {
        if (balls.empty()) {
            throw std::logic_error("No balls in the collection");
        }

        Ball largestBall = balls[0];
        for (const Ball& ball : balls) {
            if (ball.GetSize() > largestBall.GetSize()) {
                largestBall = ball;
            }
        }
        return largestBall;
    }

    int GetSizeDifference() const {
        if (balls.empty()) {
            throw std::logic_error("No balls in the collection");
        }

        Ball smallestBall = GetSmallestBall();
        Ball largestBall = GetLargestBall();
        return largestBall.GetSize() - smallestBall.GetSize();
    }

private:
    std::vector<Ball> balls;
};

class BallReader {
public:
    Ball ReadBall(int index) const {
        std::string name;
        int size;

        std::cout << "Enter the name of the " << index << " ball: ";
        std::getline(std::cin >> std::ws, name);

        std::cout << "Enter the size of the " << index << " ball: ";
        std::cin >> size;
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Ignore remaining characters in input buffer

        return Ball(name, size);
    }
};

class BallPrinter {
public:
    void PrintBallInfo(const Ball& ball, int index) const {
        std::cout << "Ball " << index << ":\n";
        std::cout << "Name: " << ball.GetName() << "\n";
        std::cout << "Size: " << ball.GetSize() << "\n";
    }

    void PrintSizeDifference(int difference) const {
        std::cout << "Difference between the largest and smallest sizes: " << difference << "\n";
    }
};

int main() {
    const int NumberOfBalls = 4;

    BallCollection collection;
    BallReader reader;
    BallPrinter printer;

    for (int i = 1; i <= NumberOfBalls; ++i) {
        Ball ball = reader.ReadBall(i);
        collection.AddBall(ball);
    }

    printer.PrintBallInfo(collection.GetSmallestBall(), 1);
    printer.PrintBallInfo(collection.GetLargestBall(), 2);
    printer.PrintSizeDifference(collection.GetSizeDifference());

    return 0;
}