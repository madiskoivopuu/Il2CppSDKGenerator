#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MoveInventoryConvertableData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MoveInventoryConvertableData"));
	}

	template <typename T = int32_t> T& FromId() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& ToId() {
		return *(T*)((uintptr_t)this + 0x4);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(MoveInventoryConvertableData*, uintptr_t))(Il2CppBase() + 0x1556E1C))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(MoveInventoryConvertableData*, uintptr_t))(Il2CppBase() + 0x1556E70))(this, reader);
	}

};

}
