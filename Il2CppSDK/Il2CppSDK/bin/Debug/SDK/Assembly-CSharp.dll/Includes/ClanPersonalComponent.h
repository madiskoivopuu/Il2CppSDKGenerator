#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ClanPersonalComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ClanPersonalComponent"));
	}

	template <typename R = int64_t> R& ClanId() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(ClanPersonalComponent*, Il2CppObject*))(Il2CppBase() + 0x1597090))(this, target);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(ClanPersonalComponent*, uintptr_t))(Il2CppBase() + 0x1597124))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(ClanPersonalComponent*, uintptr_t))(Il2CppBase() + 0x1597148))(this, reader);
	}

};

