#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LastDamagerComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LastDamagerComponent"));
	}

	template <typename T = uintptr_t> T& Type() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int64_t> T& PlayerId() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int64_t> T& Tick() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& Blueprint() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(LastDamagerComponent*, uintptr_t))(Il2CppBase() + 0x1429548))(this, target);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(LastDamagerComponent*, uintptr_t))(Il2CppBase() + 0x14295F8))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(LastDamagerComponent*, uintptr_t))(Il2CppBase() + 0x14296F8))(this, writer);
	}

};

}
