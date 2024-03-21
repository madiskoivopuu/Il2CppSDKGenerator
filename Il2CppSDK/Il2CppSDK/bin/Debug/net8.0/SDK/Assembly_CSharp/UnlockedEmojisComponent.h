#pragma once

#include "TypeListComponent_1UnlockedEmojisComponent/TypeListComponent1.h"


class UnlockedEmojisComponent : public TypeListComponent1<UnlockedEmojisComponent::UnlockedEmoji> {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UnlockedEmojisComponent"));
	}

	int32_t& NewEmojisCount() {
		return *(int32_t*)((uintptr_t)this + 0x18);
	}

};};
