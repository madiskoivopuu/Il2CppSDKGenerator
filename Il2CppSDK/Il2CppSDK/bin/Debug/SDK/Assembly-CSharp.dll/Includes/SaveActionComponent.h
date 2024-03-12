#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SaveActionComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SaveActionComponent"));
	}

	template <typename T = Il2CppString*> T& Name() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& Item() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& SaveEffect() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& LeaveOnDeath() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T CopyTo(uintptr_t targetObject) {
		return ((T (*)(SaveActionComponent*, uintptr_t))(Il2CppBase() + 0x1356C98))(this, targetObject);
	}

};

}
