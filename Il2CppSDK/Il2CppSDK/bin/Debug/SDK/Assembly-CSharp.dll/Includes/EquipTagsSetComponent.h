#pragma once
#include <Il2Cpp/Il2Cpp.h>

class EquipTagsSetComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EquipTagsSetComponent"));
	}

	template <typename T = HashSet1Il2CppString*>*> T& Values() {
		return *(T*)((uintptr_t)this + 0x10);
	}


};

