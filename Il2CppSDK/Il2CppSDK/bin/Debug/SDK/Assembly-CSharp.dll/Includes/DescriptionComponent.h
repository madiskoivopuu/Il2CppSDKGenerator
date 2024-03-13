#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DescriptionComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DescriptionComponent"));
	}

	template <typename T = Il2CppString*> T& Caption() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& Text() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T CopyTo(Il2CppObject* targetObject) {
		return ((T (*)(DescriptionComponent*, Il2CppObject*))(Il2CppBase() + 0xEBA134))(this, targetObject);
	}
	template <typename T = bool> T IsEqualsDefault(Il2CppObject* blueprintComponent) {
		return ((T (*)(DescriptionComponent*, Il2CppObject*))(Il2CppBase() + 0xEBA1DC))(this, blueprintComponent);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(DescriptionComponent*, uintptr_t))(Il2CppBase() + 0xEBA29C))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(DescriptionComponent*, uintptr_t))(Il2CppBase() + 0xEBA338))(this, writer);
	}

};

