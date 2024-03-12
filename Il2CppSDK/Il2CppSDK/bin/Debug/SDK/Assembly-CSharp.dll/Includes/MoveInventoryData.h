#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MoveInventoryData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MoveInventoryData"));
	}

	template <typename T = int32_t> T& FromId() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& ToId() {
		return *(T*)((uintptr_t)this + 0x4);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(MoveInventoryData*, uintptr_t))(Il2CppBase() + 0x1556F74))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(MoveInventoryData*, uintptr_t))(Il2CppBase() + 0x1556FC8))(this, reader);
	}

};

}
