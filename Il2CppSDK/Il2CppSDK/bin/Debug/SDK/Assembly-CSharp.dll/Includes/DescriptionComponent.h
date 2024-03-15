#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DescriptionComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DescriptionComponent"));
	}

	template <typename R = Il2CppString*> R& Caption() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppString*> R& Text() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(DescriptionComponent*, Il2CppObject*))(Il2CppBase() + 0xEBA134))(this, targetObject);
	}
	template <typename R = bool> R IsEqualsDefault(Il2CppObject* blueprintComponent) {
		return ((R (*)(DescriptionComponent*, Il2CppObject*))(Il2CppBase() + 0xEBA1DC))(this, blueprintComponent);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(DescriptionComponent*, uintptr_t))(Il2CppBase() + 0xEBA29C))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(DescriptionComponent*, uintptr_t))(Il2CppBase() + 0xEBA338))(this, writer);
	}

};

