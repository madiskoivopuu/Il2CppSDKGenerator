#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TeamComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TeamComponent"));
	}

	template <typename T = unsigned char> T& Id() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& Source() {
		return *(T*)((uintptr_t)this + 0x11);
	}
	template <typename T = Il2CppString*> T& RandomByTag() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& ClanIds() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T CopyTo(uintptr_t targetObject) {
		return ((T (*)(TeamComponent*, uintptr_t))(Il2CppBase() + 0x16AD314))(this, targetObject);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(TeamComponent*, uintptr_t))(Il2CppBase() + 0x16AD3D0))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(TeamComponent*, uintptr_t))(Il2CppBase() + 0x16AD5DC))(this, writer);
	}

};

}
