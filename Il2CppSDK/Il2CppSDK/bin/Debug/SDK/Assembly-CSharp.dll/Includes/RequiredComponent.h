#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RequiredComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RequiredComponent"));
	}

	template <typename R = int32_t> R& Level() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(RequiredComponent*, Il2CppObject*))(Il2CppBase() + 0x119848C))(this, targetObject);
	}
	template <typename R = bool> R IsEqualsDefault(Il2CppObject* blueprintComponent) {
		return ((R (*)(RequiredComponent*, Il2CppObject*))(Il2CppBase() + 0x1198520))(this, blueprintComponent);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(RequiredComponent*, uintptr_t))(Il2CppBase() + 0x11985BC))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(RequiredComponent*, uintptr_t))(Il2CppBase() + 0x1198628))(this, writer);
	}

};

