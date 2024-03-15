#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UniqPrefabs
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UniqPrefabs"));
	}

	template <typename R = Slot*> R& slotList() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> R& maxIndex() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	template <typename R = void> R Start() {
		return ((R (*)(UniqPrefabs*))(Il2CppBase() + 0x1536C38))(this);
	}

};

