#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BuildGroupComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BuildGroupComponent"));
	}

	template <typename R = Il2CppArray<BuildInstance*>*> R& List() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(BuildGroupComponent*, Il2CppObject*))(Il2CppBase() + 0x15A44F8))(this, targetObject);
	}
	template <typename R = int32_t> R GetSlotIndex(Il2CppString* name) {
		return ((R (*)(BuildGroupComponent*, Il2CppString*))(Il2CppBase() + 0x15A4574))(this, name);
	}

};

