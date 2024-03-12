#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SplitInventoryData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SplitInventoryData"));
	}

	template <typename T = int32_t> T& Id() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& SplitedCount() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = int32_t> T& ToId() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(SplitInventoryData*, uintptr_t))(Il2CppBase() + 0x1488878))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(SplitInventoryData*, uintptr_t))(Il2CppBase() + 0x14888DC))(this, reader);
	}

};

}
