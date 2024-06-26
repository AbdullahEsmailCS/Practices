#include <iostream>
#include <unordered_map>
#include <string>

// Structure representing security credentials of a user
struct SecurityCredentials {
    std::string username;
    std::string securityToken;
};

// Structure representing an access control policy for a resource
struct AccessControlPolicy {
    std::unordered_map<std::string, bool> permissions; // <username, allowed>
};

// Class representing Security Reference Monitor
class SecurityReferenceMonitor {
private:
    std::unordered_map<std::string, AccessControlPolicy> resourcePolicies; // <resourceName, AccessControlPolicy>

public:
    // Method to register an access control policy for a resource
    void RegisterAccessControlPolicy(const std::string& resourceName, const AccessControlPolicy& policy) {
        resourcePolicies[resourceName] = policy;
    }

    // Method to check if access is allowed for a resource based on security credentials
    bool IsAccessAllowed(const std::string& resourceName, const SecurityCredentials& credentials) {
        if (resourcePolicies.find(resourceName) == resourcePolicies.end()) {
            // Resource does not have an access control policy
            return false;
        }

        const AccessControlPolicy& policy = resourcePolicies[resourceName];
        auto it = policy.permissions.find(credentials.username);
        if (it != policy.permissions.end()) {
            // User is found in the access control policy
            return it->second;
        }

        // User is not found in the access control policy
        return false;
    }
};

int main() {
    // Create an instance of Security Reference Monitor
    SecurityReferenceMonitor srm;

    // Define access control policies for resources
    AccessControlPolicy resource1Policy;
    resource1Policy.permissions["user1"] = true;
    resource1Policy.permissions["user2"] = false;
    srm.RegisterAccessControlPolicy("resource1", resource1Policy);

    AccessControlPolicy resource2Policy;
    resource2Policy.permissions["user1"] = true;
    resource2Policy.permissions["user3"] = true;
    srm.RegisterAccessControlPolicy("resource2", resource2Policy);

    // Check access for resources based on security credentials
    SecurityCredentials user1Credentials{ "user1", "token1" };
    SecurityCredentials user2Credentials{ "user2", "token2" };
    SecurityCredentials user3Credentials{ "user3", "token3" };

    std::cout << "Access for resource1 (user1): " << (srm.IsAccessAllowed("resource1", user1Credentials) ? "Allowed" : "Denied") << std::endl;
    std::cout << "Access for resource1 (user2): " << (srm.IsAccessAllowed("resource1", user2Credentials) ? "Allowed" : "Denied") << std::endl;
    std::cout << "Access for resource2 (user1): " << (srm.IsAccessAllowed("resource2", user1Credentials) ? "Allowed" : "Denied") << std::endl;
    std::cout << "Access for resource2 (user3): " << (srm.IsAccessAllowed("resource2", user3Credentials) ? "Allowed" : "Denied") << std::endl;

    return 0;
}