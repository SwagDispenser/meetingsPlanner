//
// Created by Ain't On Nuttin on 15.04.2025.
//

#ifndef INFOHANDLER_H
#define INFOHANDLER_H

class InfoHandler {
public:
    virtual ~InfoHandler() = default;
    virtual void displayInfo() const = 0;
};


#endif //INFOHANDLER_H
