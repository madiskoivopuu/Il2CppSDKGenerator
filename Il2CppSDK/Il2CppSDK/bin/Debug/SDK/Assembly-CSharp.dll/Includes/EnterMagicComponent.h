#pragma once
#include <Il2Cpp/Il2Cpp.h>

class EnterMagicComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EnterMagicComponent"));
	}

	template <typename T = Il2CppString*> T& Name() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Names() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& DailyRandom() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T CopyTo(Il2CppObject* target) {
		return ((T (*)(EnterMagicComponent*, Il2CppObject*))(Il2CppBase() + 0x1372008))(this, target);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(EnterMagicComponent*, uintptr_t))(Il2CppBase() + 0x13720BC))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(EnterMagicComponent*, uintptr_t))(Il2CppBase() + 0x1372114))(this, reader);
	}

};

