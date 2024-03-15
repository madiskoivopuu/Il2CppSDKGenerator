#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PersonalKeyComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PersonalKeyComponent"));
	}

	template <typename R = Il2CppString*> R& Value() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = bool> R& SaveInLocation() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = bool> R& SaveForOneVersion() {
		return *(R*)((uintptr_t)this + 0x19);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(PersonalKeyComponent*, Il2CppObject*))(Il2CppBase() + 0x11EB254))(this, target);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(PersonalKeyComponent*, uintptr_t))(Il2CppBase() + 0x11EB300))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(PersonalKeyComponent*, uintptr_t))(Il2CppBase() + 0x11EB3C8))(this, writer);
	}

};

