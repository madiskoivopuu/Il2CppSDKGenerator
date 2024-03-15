#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PersonalComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PersonalComponent"));
	}

	template <typename R = int64_t> R& PlayerId() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(PersonalComponent*, Il2CppObject*))(Il2CppBase() + 0x11EA3F8))(this, target);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(PersonalComponent*, uintptr_t))(Il2CppBase() + 0x11EA48C))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(PersonalComponent*, uintptr_t))(Il2CppBase() + 0x11EA4B0))(this, reader);
	}

};

