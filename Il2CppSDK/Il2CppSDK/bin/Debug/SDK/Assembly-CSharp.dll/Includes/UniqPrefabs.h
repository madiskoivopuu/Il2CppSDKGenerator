#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UniqPrefabs
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UniqPrefabs"));
	}

	template <typename T = uintptr_t> T& slotList() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& maxIndex() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T Start() {
		return ((T (*)(UniqPrefabs*))(Il2CppBase() + 0x1536C38))(this);
	}

};

}
