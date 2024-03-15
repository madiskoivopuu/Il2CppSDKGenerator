#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ResourceConditionComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ResourceConditionComponent"));
	}

	template <typename R = Il2CppString*> R& Name() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	 Nullable1int32_t>*& MinCount() {
		return *(Nullable1int32_t>**)((uintptr_t)this + 0x18);
	}
	 Nullable1int32_t>*& MaxCount() {
		return *(Nullable1int32_t>**)((uintptr_t)this + 0x20);
	}
	template <typename R = bool> R& WithExternal() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(ResourceConditionComponent*, Il2CppObject*))(Il2CppBase() + 0x119C2B4))(this, target);
	}

};

