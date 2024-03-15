#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LocationObjectsConditionComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LocationObjectsConditionComponent"));
	}

	template <typename R = Il2CppString*> R& BlueprintName() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppString*> R& UniqueName() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	 Nullable1int32_t>*& MinCount() {
		return *(Nullable1int32_t>**)((uintptr_t)this + 0x20);
	}
	 Nullable1int32_t>*& MaxCount() {
		return *(Nullable1int32_t>**)((uintptr_t)this + 0x28);
	}
	 Nullable1bool>*& PlaceOwner() {
		return *(Nullable1bool>**)((uintptr_t)this + 0x30);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(LocationObjectsConditionComponent*, Il2CppObject*))(Il2CppBase() + 0x17BAA00))(this, target);
	}

};

