#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MoveInventoryConvertableData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MoveInventoryConvertableData"));
	}

	template <typename R = int32_t> R& FromId() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = int32_t> R& ToId() {
		return *(R*)((uintptr_t)this + 0x4);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(MoveInventoryConvertableData*, uintptr_t))(Il2CppBase() + 0x1556E1C))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(MoveInventoryConvertableData*, uintptr_t))(Il2CppBase() + 0x1556E70))(this, reader);
	}

};

