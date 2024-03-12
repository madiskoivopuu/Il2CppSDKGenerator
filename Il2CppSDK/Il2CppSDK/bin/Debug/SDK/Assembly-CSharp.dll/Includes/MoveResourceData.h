#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MoveResourceData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MoveResourceData"));
	}

	template <typename T = Il2CppString*> T& ResourceName() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& ToId() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(MoveResourceData*, uintptr_t))(Il2CppBase() + 0x15570CC))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(MoveResourceData*, uintptr_t))(Il2CppBase() + 0x1557120))(this, reader);
	}

};

}
