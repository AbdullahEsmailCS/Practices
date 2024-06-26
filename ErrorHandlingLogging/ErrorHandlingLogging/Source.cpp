#include <iostream>
#include <fstream>
#include <stdexcept>
#include <ctime>

// Logger class
class Logger {
private:
    std::ofstream logFile;

public:
    Logger(const std::string& filename) {
        logFile.open(filename, std::ofstream::app);
        if (!logFile) {
            throw std::runtime_error("Failed to open log file.");
        }
    }

    ~Logger() {
        if (logFile.is_open()) {
            logFile.close();
        }
    }

    void log(const std::string& message) {
        std::time_t currentTime = std::time(nullptr);
        std::string timestamp = std::asctime(std::localtime(&currentTime));

        if (logFile.is_open()) {
            logFile << "[" << timestamp.substr(0, timestamp.length() - 1) << "] " << message << std::endl;
        }
        else {
            throw std::runtime_error("Log file is not open.");
        }
    }
};

// Object Manager class
class ObjectManager {
private:
    Logger logger;

public:
    ObjectManager(const std::string& logFilename)
        : logger(logFilename) {
    }

    // Function to perform an action and handle exceptions
    void performAction() {
        try {
            // Perform the action here...
            throw std::runtime_error("Something went wrong.");

            // If successful, log the action
            logger.log("Action performed successfully.");
        }
        catch (const std::exception& ex) {
            // Log the error
            logger.log("Error: " + std::string(ex.what()));

            // Rethrow the exception to propagate it
            throw;
        }
    }
};

int main() {
    try {
        ObjectManager objectManager("log.txt");
        objectManager.performAction();
    }
    catch (const std::exception& ex) {
        std::cerr << "Exception occurred: " << ex.what() << std::endl;
    }

    return 0;
}