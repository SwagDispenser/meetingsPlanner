//
// Created by Dmitrij Oblockow on 16.04.2025.
//

#ifndef VIPPARTICIPANT_H
#define VIPPARTICIPANT_H

#include "RegularParticipant.h"
#include <iostream>

class VipParticipant : public RegularParticipant {
public:
    using RegularParticipant::RegularParticipant;

    void doStaticThing();
};



#endif //VIPPARTICIPANT_H
