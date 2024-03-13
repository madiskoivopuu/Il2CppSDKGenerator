#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ClanPersonalComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ClanPersonalComponent"));
	}

	template <typename T = int64_t> T& ClanId() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T CopyTo(Il2CppObject* target) {
		return ((T (*)(ClanPersonalComponent*, Il2CppObject*))(Il2CppBase() + 0x1597090))(this, target);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(ClanPersonalComponent*, uintptr_t))(Il2CppBase() + 0x1597124))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(ClanPersonalComponent*, uintptr_t))(Il2CppBase() + 0x1597148))(this, reader);
	}

};

