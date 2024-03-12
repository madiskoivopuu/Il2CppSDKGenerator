#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PersonalComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PersonalComponent"));
	}

	template <typename T = int64_t> T& PlayerId() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(PersonalComponent*, uintptr_t))(Il2CppBase() + 0x11EA3F8))(this, target);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(PersonalComponent*, uintptr_t))(Il2CppBase() + 0x11EA48C))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(PersonalComponent*, uintptr_t))(Il2CppBase() + 0x11EA4B0))(this, reader);
	}

};

}
