#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PortalQuestComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PortalQuestComponent"));
	}

	template <typename R = PortalQuestType> R& Type() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(PortalQuestComponent*, Il2CppObject*))(Il2CppBase() + 0x1577190))(this, target);
	}

};

