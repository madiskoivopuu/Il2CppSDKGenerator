#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BasePositionComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BasePositionComponent"));
	}

	template <typename T = float> T& X() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& Y() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = void> T CopyTo(uintptr_t targetObject) {
		return ((T (*)(BasePositionComponent*, uintptr_t))(Il2CppBase() + 0x166F9EC))(this, targetObject);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(BasePositionComponent*, uintptr_t))(Il2CppBase() + 0x166FA88))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(BasePositionComponent*, uintptr_t))(Il2CppBase() + 0x166FACC))(this, reader);
	}

};

}
