#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Math/Matrix4.h"
#include "headers/Known/Game/InstanceSystem/InstanceNodes/Structs/InstanceNodeAbstractBody.h"

class InstanceNodePhysicsBody : public InstanceNodeAbstractBody {
	public:
		Matrix4 matrix1;
		Matrix4 matrix2;
		InstanceNodePhysics * mePtr;


};
