#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ProgressQuestComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ProgressQuestComponent"));
	}

	template <typename T = Il2CppString*> T& Name() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& Tag() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& Value() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T CopyTo(uintptr_t targetObject) {
		return ((T (*)(ProgressQuestComponent*, uintptr_t))(Il2CppBase() + 0x16E54B8))(this, targetObject);
	}

};

}
