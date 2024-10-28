#pragma once

#include "Resource.hpp"
#include <iostream>

class ResourceManager {
private:
    Resource* res;

public:
    ResourceManager() : res(new Resource()) {
        }

    ~ResourceManager() {
        delete res;  
    }

    ResourceManager(const ResourceManager& other) : res(new Resource(*other.res)) {
    }

    ResourceManager& operator=(const ResourceManager& other) {
        if (this != &other) {
            delete res; 
            res = new Resource(*other.res);  
        }
        
        return *this;
    }

    double get() const {
         return (*res).get();
    }
};