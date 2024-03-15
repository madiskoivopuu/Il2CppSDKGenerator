#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MoveResourceData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MoveResourceData"));
	}

	template <typename R = Il2CppString*> R& ResourceName() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = int32_t> R& ToId() {
		return *(R*)((uintptr_t)this + 0x8);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(MoveResourceData*, uintptr_t))(Il2CppBase() + 0x15570CC))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(MoveResourceData*, uintptr_t))(Il2CppBase() + 0x1557120))(this, reader);
	}

};

