#pragma once

#include "TypeListComponent1.h"


class PatchCommandsComponent : public TypeListComponent1<PatchCommand> {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PatchCommandsComponent"));
	}

};};
