#pragma once
#include <Il2Cpp/Il2Cpp.h>

class EquipTagsSetComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EquipTagsSetComponent"));
	}

	 HashSet1<Il2CppString*>*& Values() {
		return *(HashSet1<Il2CppString*>**)((uintptr_t)this + 0x10);
	}


};

