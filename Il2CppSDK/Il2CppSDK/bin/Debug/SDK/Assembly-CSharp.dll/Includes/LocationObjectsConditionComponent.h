#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LocationObjectsConditionComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LocationObjectsConditionComponent"));
	}

	template <typename T = Il2CppString*> T& BlueprintName() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& UniqueName() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Nullable1int32_t>*> T& MinCount() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Nullable1int32_t>*> T& MaxCount() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Nullable1bool>*> T& PlaceOwner() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T CopyTo(Il2CppObject* target) {
		return ((T (*)(LocationObjectsConditionComponent*, Il2CppObject*))(Il2CppBase() + 0x17BAA00))(this, target);
	}

};

