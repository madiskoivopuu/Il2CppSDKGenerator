#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ClassRuneChangedData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ClassRuneChangedData"));
	}

	template <typename T = uintptr_t> T& ClassType() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& FromClassSlotIndex() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = Il2CppString*> T& FromClassBlueprint() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int64_t> T& FromClassEndTime() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& ToClassSlotIndex() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& ToClassBlueprint() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int64_t> T& ToClassEndTime() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& IsMerge() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(ClassRuneChangedData*, uintptr_t))(Il2CppBase() + 0x159BABC))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(ClassRuneChangedData*, uintptr_t))(Il2CppBase() + 0x159BB70))(this, reader);
	}

};

}
