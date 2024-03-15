#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MoveInventoryData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MoveInventoryData"));
	}

	template <typename R = int32_t> R& FromId() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = int32_t> R& ToId() {
		return *(R*)((uintptr_t)this + 0x4);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(MoveInventoryData*, uintptr_t))(Il2CppBase() + 0x1556F74))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(MoveInventoryData*, uintptr_t))(Il2CppBase() + 0x1556FC8))(this, reader);
	}

};

