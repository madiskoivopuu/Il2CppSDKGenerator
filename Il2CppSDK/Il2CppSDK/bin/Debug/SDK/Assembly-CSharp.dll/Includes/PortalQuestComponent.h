#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PortalQuestComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PortalQuestComponent"));
	}

	template <typename T = PortalQuestType*> T& Type() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T CopyTo(Il2CppObject* target) {
		return ((T (*)(PortalQuestComponent*, Il2CppObject*))(Il2CppBase() + 0x1577190))(this, target);
	}

};

