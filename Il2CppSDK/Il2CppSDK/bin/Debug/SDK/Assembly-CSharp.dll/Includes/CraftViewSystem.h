#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CraftViewSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CraftViewSystem"));
	}

	template <typename T = uintptr_t> T& _world() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& _craft() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& _finalize() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = void*> T& _fusion() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = void*> T& _extractor() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppDictionary<int32_t, uintptr_t>*> T& _working() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T Initialize() {
		return ((T (*)(CraftViewSystem*))(Il2CppBase() + 0x1344800))(this);
	}
	template <typename T = void> T Execute() {
		return ((T (*)(CraftViewSystem*))(Il2CppBase() + 0x1344900))(this);
	}
	template <typename T = bool> T IsActiveCraft(uintptr_t entity, int64_t now) {
		return ((T (*)(CraftViewSystem*, uintptr_t, int64_t))(Il2CppBase() + 0x1345FF8))(this, entity, now);
	}
	template <typename T = void> T Cleanup() {
		return ((T (*)(CraftViewSystem*))(Il2CppBase() + 0x1346060))(this);
	}

};

}
