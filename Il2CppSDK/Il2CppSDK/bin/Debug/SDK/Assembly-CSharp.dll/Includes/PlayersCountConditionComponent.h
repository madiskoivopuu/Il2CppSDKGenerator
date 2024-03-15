#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PlayersCountConditionComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PlayersCountConditionComponent"));
	}

	 Nullable1int32_t>*& Min() {
		return *(Nullable1int32_t>**)((uintptr_t)this + 0x10);
	}
	 Nullable1int32_t>*& Max() {
		return *(Nullable1int32_t>**)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(PlayersCountConditionComponent*, Il2CppObject*))(Il2CppBase() + 0x1574354))(this, target);
	}

};

