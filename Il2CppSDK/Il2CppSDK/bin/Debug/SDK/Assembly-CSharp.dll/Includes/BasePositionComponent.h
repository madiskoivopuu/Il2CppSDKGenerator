#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BasePositionComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BasePositionComponent"));
	}

	template <typename R = float> R& X() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = float> R& Y() {
		return *(R*)((uintptr_t)this + 0x14);
	}

	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(BasePositionComponent*, Il2CppObject*))(Il2CppBase() + 0x166F9EC))(this, targetObject);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(BasePositionComponent*, uintptr_t))(Il2CppBase() + 0x166FA88))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(BasePositionComponent*, uintptr_t))(Il2CppBase() + 0x166FACC))(this, reader);
	}

};

