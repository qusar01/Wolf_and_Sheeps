#ifndef GRA_NA_PROJEKT_UNIT_H
#define GRA_NA_PROJEKT_UNIT_H

#include <iostream>
#include <string>
#include "memory"
#include "Field.h"
#include "Player.h"
#include "typedefs.h"
#include <vector>

using namespace std;

class Unit {
private:
    string unitType;
    fieldPtr unitsField;
    playerPtr unitsPlayer;
    std::vector<fieldPtr> fieldsThatUnitCanStandOn;
public:
    Unit(const string &unitType, const fieldPtr &unitsField, const playerPtr &unitsPlayer);

    void clearFieldsThatUnitCanStandOn();

    virtual ~Unit();

    const string &getUnitType() const;
    virtual string getPositionInfo();

    const vector<fieldPtr> &getFieldsThatUnitCanStandOn() const;

    void setUnitsField(const fieldPtr &unitsField);


    const fieldPtr &getUnitsField() const;

    const playerPtr &getUnitsPlayer() const;

    virtual void availableMoves();

    void setFieldsThatUnitCanStandOn(fieldPtr field);

};

#endif