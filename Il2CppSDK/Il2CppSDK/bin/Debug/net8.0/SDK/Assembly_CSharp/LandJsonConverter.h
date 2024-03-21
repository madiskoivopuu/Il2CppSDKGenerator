#pragma once

#include "TypeTypeJsonConverter1.h"


class LandJsonConverter : public TypeTypeJsonConverter1<LandType> {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LandJsonConverter"));
	}

};};
