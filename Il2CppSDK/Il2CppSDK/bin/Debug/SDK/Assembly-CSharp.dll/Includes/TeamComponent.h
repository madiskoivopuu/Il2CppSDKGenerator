#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TeamComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TeamComponent"));
	}

	template <typename R = uint8_t> R& Id() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = bool> R& Source() {
		return *(R*)((uintptr_t)this + 0x11);
	}
	template <typename R = Il2CppString*> R& RandomByTag() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	 HashSet1int64_t>*& ClanIds() {
		return *(HashSet1int64_t>**)((uintptr_t)this + 0x20);
	}

	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(TeamComponent*, Il2CppObject*))(Il2CppBase() + 0x16AD314))(this, targetObject);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(TeamComponent*, uintptr_t))(Il2CppBase() + 0x16AD3D0))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(TeamComponent*, uintptr_t))(Il2CppBase() + 0x16AD5DC))(this, writer);
	}

};

