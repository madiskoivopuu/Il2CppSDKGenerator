#pragma once

#include "../mscorlib/System/Object.h"
#include "Gender.h"

class IGenderEntity*;
class GameEntity*;

class GenderExtensions : public Il2CppObject {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GenderExtensions"));
	}

};};
