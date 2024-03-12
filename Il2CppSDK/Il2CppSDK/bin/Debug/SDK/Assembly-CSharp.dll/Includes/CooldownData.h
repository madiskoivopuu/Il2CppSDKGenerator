#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CooldownData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CooldownData"));
	}

	template <typename T = int32_t> T& TargetId() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppString*> T& Name() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int64_t> T& StartTime() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& Duration() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& Set() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Tags() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(CooldownData*, uintptr_t))(Il2CppBase() + 0x1337964))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(CooldownData*, uintptr_t))(Il2CppBase() + 0x13379F8))(this, reader);
	}

};

}
