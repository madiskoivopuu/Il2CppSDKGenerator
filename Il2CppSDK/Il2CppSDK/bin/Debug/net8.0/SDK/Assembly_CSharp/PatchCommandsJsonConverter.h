#pragma once

#include "TypeListJsonConverter1.h"


class PatchCommandsJsonConverter : public TypeListJsonConverter1<PatchCommand> {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PatchCommandsJsonConverter"));
	}

};};
