#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ClanPersonalEntitiesComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ClanPersonalEntitiesComponent"));
	}

	template <typename T = Il2CppDictionary<Il2CppString*, Il2CppString*>*> T& List() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T CopyTo(uintptr_t targetObject) {
		return ((T (*)(ClanPersonalEntitiesComponent*, uintptr_t))(Il2CppBase() + 0x15971BC))(this, targetObject);
	}

};

}
