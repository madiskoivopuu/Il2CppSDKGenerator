#pragma once
#include <Il2Cpp/Il2Cpp.h>

class WorldStatusConditionComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WorldStatusConditionComponent"));
	}

	template <typename R = Il2CppArray<ProtoModels::WorldStatusType>*> R& Any() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppArray<ProtoModels::WorldStatusType>*> R& Not() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(WorldStatusConditionComponent*, Il2CppObject*))(Il2CppBase() + 0x1131314))(this, target);
	}

};

