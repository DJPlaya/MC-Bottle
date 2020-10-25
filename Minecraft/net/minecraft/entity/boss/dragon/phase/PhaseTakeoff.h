#pragma once
#include "PhaseBase.h"
#include "../../../../pathfinding/Path.h"

class PhaseTakeoff :public PhaseBase {
public:
    PhaseTakeoff(EntityDragon* dragonIn);
    void doLocalUpdate() override;
    void initPhase() override;
    std::optional<Vec3d> getTargetLocation() override;
    PhaseList* getType() override;

private:
    void findNewTarget();
    void navigateToNextPathNode();

    bool firstTick;
    std::optional<Path> currentPath;
    std::optional<Vec3d> targetLocation;
};
