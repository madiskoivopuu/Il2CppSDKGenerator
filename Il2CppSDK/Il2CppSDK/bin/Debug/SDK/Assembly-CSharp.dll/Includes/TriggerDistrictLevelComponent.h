#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TriggerDistrictLevelComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TriggerDistrictLevelComponent"));
	}

	template <typename R = bool> R& CanBuild() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(TriggerDistrictLevelComponent*, Il2CppObject*))(Il2CppBase() + 0x1525760))(this, target);
	}

};

