#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SplitInventoryData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SplitInventoryData"));
	}

	template <typename R = int32_t> R& Id() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = int32_t> R& SplitedCount() {
		return *(R*)((uintptr_t)this + 0x4);
	}
	template <typename R = int32_t> R& ToId() {
		return *(R*)((uintptr_t)this + 0x8);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(SplitInventoryData*, uintptr_t))(Il2CppBase() + 0x1488878))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(SplitInventoryData*, uintptr_t))(Il2CppBase() + 0x14888DC))(this, reader);
	}

};

