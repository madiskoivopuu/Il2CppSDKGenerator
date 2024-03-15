#pragma once
#include <Il2Cpp/Il2Cpp.h>

class EnterMagicComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EnterMagicComponent"));
	}

	template <typename R = Il2CppString*> R& Name() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppArray<Il2CppString*>*> R& Names() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = bool> R& DailyRandom() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(EnterMagicComponent*, Il2CppObject*))(Il2CppBase() + 0x1372008))(this, target);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(EnterMagicComponent*, uintptr_t))(Il2CppBase() + 0x13720BC))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(EnterMagicComponent*, uintptr_t))(Il2CppBase() + 0x1372114))(this, reader);
	}

};

